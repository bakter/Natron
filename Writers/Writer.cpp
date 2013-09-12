//  Powiter
//
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */
/*
*Created by Alexandre GAUTHIER-FOICHAT on 6/1/2012. 
*contact: immarespond at gmail dot com
*
*/

#include "Writer.h"

#include <QtCore/QMutex>
#include <QtCore/QMutexLocker>
#include <QtConcurrentRun>

#include "Global/LibraryBinary.h"
#include "Global/AppManager.h"

#include "Engine/Row.h"
#include "Engine/Settings.h"
#include "Engine/Model.h"
#include "Engine/Settings.h"
#include "Engine/Knob.h"

#include "Writers/Write.h"


using namespace std;
using namespace Powiter;

Writer::Writer(Model* model):
OutputNode(model),
_requestedChannels(Mask_RGB), // temporary
_premult(false),
_buffer(Settings::getPowiterCurrentSettings()->_writersSettings._maximumBufferSize),
_writeHandle(0),
_writeOptions(0)
{
     
    _lock = new QMutex;
}

Writer::~Writer(){
    if(_writeOptions){
        //    _writeOptions->cleanUpKnobs();
        delete _writeOptions;
    }
    delete _lock;
}

std::string Writer::className() {
    return "Writer";
}

std::string Writer::description() {
    return "OutputNode";
}

bool Writer::_validate(bool forReal){
    /*Defaults writing range to readers range, but
     the user may change it through GUI.*/
    _timeline.setFirstFrame(info().firstFrame());
    _timeline.setLastFrame(info().lastFrame());
    
    if (forReal) {
        
        
        if(_filename.size() > 0){
            
            Write* write = 0;
            Powiter::LibraryBinary* encoder = Settings::getPowiterCurrentSettings()->_writersSettings.encoderForFiletype(_fileType);
            if(!encoder){
                cout << "ERROR: Couldn't find an appropriate encoder for filetype: " << _fileType << " (" << getName()<< ")" << endl;
                return false;
            }else{
                

                pair<bool,WriteBuilder> func = encoder->findFunction<WriteBuilder>("BuildWrite");
                if(func.first)
                    write = func.second(this);
                else{
                    cout <<"ERROR: Couldn't create the encoder for " << getName() << ", something is wrong in the plugin." << endl;
                    return false;
                }
                write->premultiplyByAlpha(_premult);
                /*check if the filename already contains the extension, otherwise appending it*/
                QString extension;
                QString filename(_filename.c_str());
                int i = filename.lastIndexOf(QChar('.'));
                if(i != -1){
                    extension.append(filename.toStdString().substr(i).c_str());
                    filename = filename.replace(i+1, extension.size(), _fileType.c_str());
                }else{
                    filename.append(extension);
                }
                
                i = filename.lastIndexOf(QChar('#'));
                QString n = QString::number(_timeline.currentFrame());
                if(i != -1){
                    filename = filename.replace(i,1,n);
                }else{
                    i = filename.lastIndexOf(QChar('.'));
                    filename = filename.insert(i, n);
                }
                
                write->setOptionalKnobsPtr(_writeOptions);
                write->setupFile(filename.toStdString());
                write->initializeColorSpace();
                _writeHandle = write;
            }
        }
    }
    return true;
}

void Writer::engine(int y,int offset,int range,ChannelSet channels,Row* out){
    _writeHandle->engine(y, offset, range, channels, out);
}

void Writer::createKnobDynamically(){
    Node::createKnobDynamically();
}
void Writer::initKnobs(){
    std::string fileDesc("File");
    _fileKnob = dynamic_cast<OutputFile_Knob*>(KnobFactory::createKnob("OutputFile", this, fileDesc,1, Knob::NONE));
    QObject::connect(_fileKnob,SIGNAL(filesSelected()),this,SLOT(onFilesSelected()));
    assert(_fileKnob);
    
    std::string renderDesc("Render");
    Button_Knob* renderButton = static_cast<Button_Knob*>(KnobFactory::createKnob("Button", this, renderDesc, 1,Knob::NONE));
    assert(renderButton);
    QObject::connect(renderButton, SIGNAL(valueChanged(Variant)), this, SLOT(startRendering()));
    
    std::string premultString("Premultiply by alpha");
    Bool_Knob* premult = static_cast<Bool_Knob*>(KnobFactory::createKnob("Bool", this, premultString, 1,Knob::NONE));
    premult->setValue(_premult);
    
    std::string filetypeStr("File type");
    _filetypeCombo = dynamic_cast<ComboBox_Knob*>(KnobFactory::createKnob("ComboBox", this, filetypeStr, 1,Knob::NONE));
    QObject::connect(_filetypeCombo, SIGNAL(valueChangedByUser()), this, SLOT(fileTypeChanged()));
    const std::map<std::string,Powiter::LibraryBinary*>& _encoders = Settings::getPowiterCurrentSettings()->_writersSettings.getFileTypesMap();
    std::map<std::string,Powiter::LibraryBinary*>::const_iterator it = _encoders.begin();
    for(;it!=_encoders.end();++it) {
        _allFileTypes.push_back(it->first.c_str());
    }
    _filetypeCombo->populate(_allFileTypes);
}


void Writer::write(Write* write,QFutureWatcher<void>* watcher){
    
    _buffer.appendTask(write, watcher);
    if(!write) return;
    write->writeAndDelete();
    _buffer.removeTask(write);
}

void Writer::startWriting(){
    if(_buffer.size() < _buffer.getMaximumBufferSize()){
        QFutureWatcher<void>* watcher = new QFutureWatcher<void>;
        QObject::connect(watcher, SIGNAL(finished()), this, SLOT(notifyWriterForCompletion()));
        QFuture<void> future = QtConcurrent::run(this,&Writer::write,_writeHandle,watcher);
        _writeHandle = 0;
        watcher->setFuture(future);
    }else{
        _writeQueue.push_back(_writeHandle);
        _writeHandle = 0;
    }
}

void Writer::notifyWriterForCompletion(){
    _buffer.emptyTrash();
    
    /*Several threads may fight here to try to start another task.
     We ensure that at least 1 thread get into the condition, as more
     are not needed. */
    QMutexLocker guard(_lock);
    if(_writeQueue.size() > 0 && _buffer.size() < _buffer.getMaximumBufferSize()){
        QFutureWatcher<void>* watcher = new QFutureWatcher<void>;
        QObject::connect(watcher, SIGNAL(finished()), this, SLOT(notifyWriterForCompletion()));
        QFuture<void> future = QtConcurrent::run(this,&Writer::write,_writeQueue[0],watcher);
        _writeQueue.erase(_writeQueue.begin());
        watcher->setFuture(future);
    }
}

void Writer::Buffer::appendTask(Write* task,QFutureWatcher<void>* future){
    _tasks.push_back(make_pair(task, future));
}

void Writer::Buffer::removeTask(Write* task){
    for (U32 i = 0 ; i < _tasks.size(); ++i) {
        std::pair<Write*,QFutureWatcher<void>* >& t = _tasks[i];
        if(t.first == task){
            _trash.push_back(t.second);
            _tasks.erase(_tasks.begin()+i);
            break;
        }
    }
}
void Writer::Buffer::emptyTrash(){
    for (U32 i = 0; i < _trash.size(); ++i) {
        delete _trash[i];
    }
    _trash.clear();
}

Writer::Buffer::~Buffer(){
    for (U32 i = 0 ; i < _tasks.size(); ++i) {
        std::pair<Write*,QFutureWatcher<void>* >& t = _tasks[i];
        delete t.second;
    }
}

bool Writer::validInfosForRendering(){
    /*check if filetype is valid*/
    Powiter::LibraryBinary* isValid = Settings::getPowiterCurrentSettings()->_writersSettings.encoderForFiletype(_fileType);
    if(!isValid) return false;
    
    /*checking if channels are supported*/
    pair<bool,WriteBuilder> func = isValid->findFunction<WriteBuilder>("builder");
    Write* write = func.second(this);
    try {
        write->supportsChannelsForWriting(_requestedChannels);
    } catch (const std::exception &e) {
        cout << "ERROR: " << e.what() << endl;
    }
    delete write;
    
    /*check if frame range makes sense*/
    if(_timeline.firstFrame() > _timeline.lastFrame()) return false;
    
    /*check if write specific knobs have valid values*/
    if (_writeOptions) {
        if (!_writeOptions->allValid()) {
            return false;
        }
    }
    
    return true;
}

void Writer::startRendering(){
    if(validInfosForRendering()){
        _model->updateDAG(this,false);
        _model->startVideoEngine();
    }
}

void Writer::fileTypeChanged(){
    int index = _filetypeCombo->value<int>();
    assert(index < (int)_allFileTypes.size());
    _fileType = _allFileTypes[index];
    if(_writeOptions){
        _writeOptions->cleanUpKnobs();
        delete _writeOptions;
        _writeOptions = 0;
    }
    Powiter::LibraryBinary* isValid = Settings::getPowiterCurrentSettings()->_writersSettings.encoderForFiletype(_fileType);
    if(!isValid) return;
    
    QString file(_filename.c_str());
    int pos = file.lastIndexOf(QChar('.'));
    ++pos;
    file.replace(pos, file.size() - pos, _fileType.c_str());
    _fileKnob->setValue(file);
    
    /*checking if channels are supported*/
    pair<bool,WriteBuilder> func = isValid->findFunction<WriteBuilder>("builder");
    Write* write = func.second(this);
    _writeOptions = write->initSpecificKnobs();
    if(_writeOptions)
        _writeOptions->initKnobs(_fileType);
    delete write;
}

void Writer::onFilesSelected(){
    _filename = _fileKnob->getValueAsVariant().toString().toStdString();
}