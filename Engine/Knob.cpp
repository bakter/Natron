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
#include "Knob.h"

#include <QtCore/QDir>

#include "Engine/Node.h"
#include "Engine/Model.h"

#include "Global/AppManager.h"
#include "Global/LibraryBinary.h"
#include "Global/GlobalDefines.h"


#include "Readers/Reader.h"

#include "Gui/SequenceFileDialog.h"
#include "Gui/KnobGui.h"
#include "Gui/NodeGui.h"

using namespace std;
using namespace Powiter;

std::vector<Knob::Knob_Flags> Knob_Mask_to_Knobs_Flags(const Knob_Mask&m) {
    unsigned int i=0x1;
    std::vector<Knob::Knob_Flags> flags;
    if(m!=0){
        while(i<0x4){
            if((m & i)==i){
                flags.push_back((Knob::Knob_Flags)i);
            }
            i <<= 2;
        }
    }
    return flags;
}


/*Class inheriting Knob and KnobGui, must have a function named BuildKnob and BuildKnobGui with the following signature.
 This function should in turn call a specific class-based static function with the appropriate param.*/
typedef Knob* (*KnobBuilder)(Node* node,const std::string& description,int dimension,Knob_Mask flags);

typedef KnobGui* (*KnobGuiBuilder)(Knob* knob);

/***********************************FACTORY******************************************/
KnobFactory::KnobFactory(){
    loadKnobPlugins();
}

KnobFactory::~KnobFactory(){
    for ( std::map<std::string,LibraryBinary*>::iterator it = _loadedKnobs.begin(); it!=_loadedKnobs.end() ; ++it) {
        delete it->second;
    }
    _loadedKnobs.clear();
}

void KnobFactory::loadKnobPlugins(){
    vector<LibraryBinary*> plugins = AppManager::loadPlugins(POWITER_KNOBS_PLUGINS_PATH);
    vector<string> functions;
    functions.push_back("BuildKnob");
    functions.push_back("BuildKnobGui");
    for (U32 i = 0; i < plugins.size(); ++i) {
        if (plugins[i]->loadFunctions(functions)) {
            pair<bool,KnobBuilder> builder = plugins[i]->findFunction<KnobBuilder>("BuildKnob");
            if(builder.first){
                Knob* knob = builder.second(NULL,"",1,0);
                _loadedKnobs.insert(make_pair(knob->name(), plugins[i]));
                delete knob;
            }
        }else{
            delete plugins[i];
        }
    }
    loadBultinKnobs();
}

void KnobFactory::loadBultinKnobs(){
    std::string stub;
    Knob* fileKnob = File_Knob::BuildKnob(NULL,stub,1,0);
    
    std::map<std::string,void*> FILEfunctions;
    FILEfunctions.insert(make_pair("BuildKnob",(void*)&File_Knob::BuildKnob));
    FILEfunctions.insert(make_pair("BuildKnobGui",(void*)&File_KnobGui::BuildKnobGui));
    LibraryBinary *FILEKnobPlugin = new LibraryBinary(FILEfunctions);
    _loadedKnobs.insert(make_pair(fileKnob->name(),FILEKnobPlugin));
    delete fileKnob;
    
    Knob* intKnob = Int_Knob::BuildKnob(NULL,stub,1,0);
    
    std::map<std::string,void*> INTfunctions;
    INTfunctions.insert(make_pair("BuildKnob",(void*)&Int_Knob::BuildKnob));
    INTfunctions.insert(make_pair("BuildKnobGui",(void*)&Int_KnobGui::BuildKnobGui));
    LibraryBinary *INTKnobPlugin = new LibraryBinary(INTfunctions);
    _loadedKnobs.insert(make_pair(intKnob->name(),INTKnobPlugin));
    delete intKnob;
    
    
    Knob* doubleKnob = Double_Knob::BuildKnob(NULL,stub,1,0);
    
    std::map<std::string,void*> DOUBLEfunctions;
    DOUBLEfunctions.insert(make_pair("BuildKnob",(void*)&Double_Knob::BuildKnob));
    DOUBLEfunctions.insert(make_pair("BuildKnobGui",(void*)&Double_KnobGui::BuildKnobGui));
    LibraryBinary *DOUBLEKnobPlugin = new LibraryBinary(DOUBLEfunctions);
    _loadedKnobs.insert(make_pair(doubleKnob->name(),DOUBLEKnobPlugin));
    delete doubleKnob;
    
    Knob* boolKnob = Bool_Knob::BuildKnob(NULL,stub,1,0);
    
    std::map<std::string,void*> BOOLfunctions;
    BOOLfunctions.insert(make_pair("BuildKnob",(void*)&Bool_Knob::BuildKnob));
    BOOLfunctions.insert(make_pair("BuildKnobGui",(void*)&Bool_KnobGui::BuildKnobGui));
    LibraryBinary *BOOLKnobPlugin = new LibraryBinary(BOOLfunctions);
    _loadedKnobs.insert(make_pair(boolKnob->name(),BOOLKnobPlugin));
    delete boolKnob;
    
    Knob* buttonKnob = Button_Knob::BuildKnob(NULL,stub,1,0);
    
    std::map<std::string,void*> BUTTONfunctions;
    BUTTONfunctions.insert(make_pair("BuildKnob",(void*)&Button_Knob::BuildKnob));
    BUTTONfunctions.insert(make_pair("BuildKnobGui",(void*)&Button_KnobGui::BuildKnobGui));
    LibraryBinary *BUTTONKnobPlugin = new LibraryBinary(BUTTONfunctions);
    _loadedKnobs.insert(make_pair(buttonKnob->name(),BUTTONKnobPlugin));
    delete buttonKnob;
    
    Knob* outputFileKnob = OutputFile_Knob::BuildKnob(NULL,stub,1,0);
    
    std::map<std::string,void*> OFfunctions;
    OFfunctions.insert(make_pair("BuildKnob",(void*)&OutputFile_Knob::BuildKnob));
    OFfunctions.insert(make_pair("BuildKnobGui",(void*)&OutputFile_KnobGui::BuildKnobGui));
    LibraryBinary *OUTPUTFILEKnobPlugin = new LibraryBinary(OFfunctions);
    _loadedKnobs.insert(make_pair(outputFileKnob->name(),OUTPUTFILEKnobPlugin));
    delete outputFileKnob;
    
    Knob* comboBoxKnob = ComboBox_Knob::BuildKnob(NULL,stub,1,0);
    
    std::map<std::string,void*> CBBfunctions;
    CBBfunctions.insert(make_pair("BuildKnob",(void*)&ComboBox_Knob::BuildKnob));
    CBBfunctions.insert(make_pair("BuildKnobGui",(void*)&ComboBox_KnobGui::BuildKnobGui));
    LibraryBinary *ComboBoxKnobPlugin = new LibraryBinary(CBBfunctions);
    _loadedKnobs.insert(make_pair(comboBoxKnob->name(),ComboBoxKnobPlugin));
    delete comboBoxKnob;
    
    
    Knob* separatorKnob = Separator_Knob::BuildKnob(NULL,stub,1,0);
    
    std::map<std::string,void*> Sepfunctions;
    Sepfunctions.insert(make_pair("BuildKnob",(void*)&Separator_Knob::BuildKnob));
    Sepfunctions.insert(make_pair("BuildKnobGui",(void*)&Separator_KnobGui::BuildKnobGui));
    LibraryBinary *SeparatorKnobPlugin = new LibraryBinary(Sepfunctions);
    _loadedKnobs.insert(make_pair(separatorKnob->name(),SeparatorKnobPlugin));
    delete separatorKnob;
    
    Knob* groupKnob = Group_Knob::BuildKnob(NULL,stub,1,0);
    
    std::map<std::string,void*> Grpfunctions;
    Grpfunctions.insert(make_pair("BuildKnob",(void*)&Group_Knob::BuildKnob));
    Grpfunctions.insert(make_pair("BuildKnobGui",(void*)&Group_KnobGui::BuildKnobGui));
    LibraryBinary *GroupKnobPlugin = new LibraryBinary(Grpfunctions);
    _loadedKnobs.insert(make_pair(groupKnob->name(),GroupKnobPlugin));
    delete groupKnob;
    
    Knob* rgbaKnob = RGBA_Knob::BuildKnob(NULL,stub,1,0);
    
    std::map<std::string,void*> RGBAfunctions;
    RGBAfunctions.insert(make_pair("BuildKnob",(void*)&RGBA_Knob::BuildKnob));
    RGBAfunctions.insert(make_pair("BuildKnobGui",(void*)&RGBA_KnobGui::BuildKnobGui));
    LibraryBinary *RGBAKnobPlugin = new LibraryBinary(RGBAfunctions);
    _loadedKnobs.insert(make_pair(rgbaKnob->name(),RGBAKnobPlugin));
    delete rgbaKnob;
    
    
    Knob* tabKnob = Tab_Knob::BuildKnob(NULL,stub,1,0);
    
    std::map<std::string,void*> TABfunctions;
    TABfunctions.insert(make_pair("BuildKnob",(void*)&Tab_Knob::BuildKnob));
    TABfunctions.insert(make_pair("BuildKnobGui",(void*)&Tab_KnobGui::BuildKnobGui));
    LibraryBinary *TABKnobPlugin = new LibraryBinary(TABfunctions);
    _loadedKnobs.insert(make_pair(tabKnob->name(),TABKnobPlugin));
    delete tabKnob;
    Knob* strKnob = String_Knob::BuildKnob(NULL,stub,1,0);
    
    std::map<std::string,void*> STRfunctions;
    STRfunctions.insert(make_pair("BuildKnob",(void*)&String_Knob::BuildKnob));
    STRfunctions.insert(make_pair("BuildKnobGui",(void*)&String_KnobGui::BuildKnobGui));
    LibraryBinary *STRKnobPlugin = new LibraryBinary(STRfunctions);
    _loadedKnobs.insert(make_pair(strKnob->name(),STRKnobPlugin));
    delete strKnob;
    
    
}

/*Calls the unique instance of the KnobFactory and
 calls the appropriate pointer to function to create a knob.*/
Knob* KnobFactory::createKnob(const std::string& name, Node* node, const std::string& description,int dimension, Knob_Mask flags){
    const std::map<std::string,LibraryBinary*>& loadedPlugins = KnobFactory::instance()->getLoadedKnobs();
    std::map<std::string,LibraryBinary*>::const_iterator it = loadedPlugins.find(name);
    if(it == loadedPlugins.end()){
        return NULL;
    }else{
        std::pair<bool,KnobBuilder> builderFunc = it->second->findFunction<KnobBuilder>("BuildKnob");
        if(!builderFunc.first){
            return NULL;
        }
        KnobBuilder builder = (KnobBuilder)(builderFunc.second);
        Knob* knob = builder(node,description,dimension,flags);
        if(!knob){
            return NULL;
        }
        node->addKnob(knob);
        return knob;
    }
}
KnobGui* KnobFactory::createGuiForKnob(Knob* knob){
    const std::map<std::string,LibraryBinary*>& loadedPlugins = KnobFactory::instance()->getLoadedKnobs();
    std::map<std::string,LibraryBinary*>::const_iterator it = loadedPlugins.find(knob->name());
    if(it == loadedPlugins.end()){
        return NULL;
    }else{
        std::pair<bool,KnobGuiBuilder> guiBuilderFunc = it->second->findFunction<KnobGuiBuilder>("BuildKnobGui");
        if(!guiBuilderFunc.first){
            return NULL;
        }
        KnobGuiBuilder guiBuilder = (KnobGuiBuilder)(guiBuilderFunc.second);
        return guiBuilder(knob);
    }
}



/***********************************KNOB BASE******************************************/


Knob::Knob(Node* node,const std::string& description,int dimension,Knob_Mask flags):
_node(node),
_value(),
_dimension(dimension),
_description(description),
_flags(flags),
_newLine(true),
_itemSpacing(0),
_parentKnob(NULL)
{
    //_value.setValue(0); // it is better to keep it as an invalid variant
}

Knob::~Knob(){
}

Knob_Mask Knob::getFlags() const{
    return _flags;
}

void Knob::startRendering(bool initViewer){
    Node* viewer = Node::hasViewerConnected(_node);
    if(viewer){
        dynamic_cast<OutputNode*>(viewer)->updateDAG(true,initViewer);
    }
}

void Knob::deleteKnob(){
    emit deleteWanted();
}

void Knob::turnOffNewLine(){
    _newLine = false;
}

void Knob::setSpacingBetweenItems(int spacing){
    _itemSpacing = spacing;
}
void Knob::setEnabled(bool b){
    emit enabledStateChanged(b);
}

void Knob::setVisible(bool b){
    emit visibleStateChanged(b);
}

int Knob::determineHierarchySize() const{
    int ret = 0;
    Knob* current = getParentKnob();
    while(current){
        ++ret;
        current = current->getParentKnob();
    }
    return ret;
}
/***********************************FILE_KNOB*****************************************/

std::string File_Knob::serialize() const{
    return SequenceFileDialog::patternFromFilesList(_value.toStringList()).toStdString();
}

void File_Knob::_restoreFromString(const std::string& str){
    //    _name->setText(str.c_str());
    QStringList filesList = SequenceFileDialog::filesListFromPattern(str.c_str());
    _value.setValue(filesList);
}
void File_Knob::tryStartRendering(){
    QStringList files = _value.value<QStringList>();
    if(files.size() > 0){
        const std::string& className = _node->className();
        if(className == "Reader"){
            dynamic_cast<Reader*>(_node)->showFilePreview();
        }
        startRendering(true);
    }
}

/***********************************OUTPUT_FILE_KNOB*****************************************/

std::string OutputFile_Knob::serialize() const{
    return _value.toString().toStdString();
}
void OutputFile_Knob::_restoreFromString(const std::string& str){
    _value.setValue(str);
}


void OutputFile_Knob::tryStartRendering(){
    startRendering(false);
}
/***********************************INT_KNOB*****************************************/
void Int_Knob::fillHashVector(){
    _hashVector.clear();
    if(_dimension > 1){
        QList<QVariant> list = _value.toList();
        for (int i = 0; i < list.size(); ++i) {
            _hashVector.push_back((U64)list.at(i).toInt());
        }
    }else{
        _hashVector.push_back((U64)_value.toInt());
    }
}


std::string Int_Knob::serialize() const{
    QList<QVariant> list = _value.toList();
    QString str;
    if(_dimension > 1){
        for (int i = 0; i < list.size(); ++i) {
            str.append("v");
            str.append(QString::number(i));
            str.append(" ");
            str.append(QString::number(list.at(i).toInt()));
            if(i < list.size()-1){
                str.append(" ");
            }
        }
    }else{
        str.append(QString::number(_value.toInt()));
    }
    return str.toStdString();
}
void Int_Knob::_restoreFromString(const std::string& str){
    QString s(str.c_str());
    if(!s.isEmpty()){
        if(_dimension > 1){
            int i = s.indexOf("v");
            QList<QVariant> values;
            while(i != -1){
                i+=3;
                QString vStr;
                while(i < s.size() && s.at(i).isDigit()){
                    vStr.append(s.at(i));
                    ++i;
                }
                values.append(QVariant(vStr.toInt()));
                i = s.indexOf("v",i);
            }
            _value.setValue(values);
        }else{
            QString s(str.c_str());
            _value.setValue(s.toInt());
        }
        
    }
}

const std::vector<int> Int_Knob::getValues() const {
    vector<int> ret;
    if(_dimension > 1){
    QList<QVariant> list = _value.toList();
    for (int i = 0; i < list.size(); ++i) {
        ret.push_back(list.at(i).toInt());
    }
    }else{
        ret.push_back(_value.toInt());
    }
    return ret;
}

void Int_Knob::tryStartRendering(){
    startRendering(false);
}

/***********************************BOOL_KNOB*****************************************/
void Bool_Knob::fillHashVector(){
    _hashVector.clear();
    _hashVector.push_back((U64)_value.toBool());
}


std::string Bool_Knob::serialize() const{
    bool value = _value.toBool();
    return value ? "1" : "0";
}
void Bool_Knob::_restoreFromString(const std::string& str){
    QString s(str.c_str());
    if(!s.isEmpty()){
        int val = s.toInt();
        _value.setValue((bool)val);
    }
    
}

void Bool_Knob::tryStartRendering(){
    startRendering(false);
}

/***********************************DOUBLE_KNOB*****************************************/
void Double_Knob::fillHashVector(){
    _hashVector.clear();
    if(_dimension > 1){
        QList<QVariant> list = _value.toList();
        for (int i = 0; i < list.size(); ++i) {
            double value = list.at(i).toDouble();
            _hashVector.push_back(*(reinterpret_cast<U64*>(&(value))));
        }
    }else{
        double value = _value.toDouble();
        _hashVector.push_back(*(reinterpret_cast<U64*>(&(value))));
    }
}


std::string Double_Knob::serialize() const{
    QString str;
    if(_dimension > 1){
        QList<QVariant> list = _value.toList();
        for (int i = 0; i < list.size(); ++i) {
            str.append("v");
            str.append(QString::number(i));
            str.append(" ");
            str.append(QString::number(list.at(i).toDouble()));
            if(i < list.size()-1){
                str.append(" ");
            }
        }
        
    }else{
        double value = _value.toDouble();
        str.append(QString::number(value));
    }
    return str.toStdString();
    
}
void Double_Knob::_restoreFromString(const std::string& str){
    QString s(str.c_str());
    if(!s.isEmpty()){
        if(_dimension > 1){
            int i = s.indexOf("v");
            QList<QVariant> values;
            while(i != -1){
                i+=3;
                QString vStr;
                while(i < s.size() && s.at(i).isDigit()){
                    vStr.append(s.at(i));
                    ++i;
                }
                values.append(QVariant(vStr.toDouble()));
                i = s.indexOf("v",i);
            }
            _value.setValue(values);
        }else{
            QString s(str.c_str());
            _value.setValue(s.toDouble());
        }
        
    }
}

const std::vector<double> Double_Knob::getValues() const {
    vector<double> ret;
    if(_dimension > 1){
        QList<QVariant> list = _value.toList();
        for (int i = 0; i < list.size(); ++i) {
            ret.push_back(list.at(i).toDouble());
        }
    }else{
        ret.push_back(_value.toDouble());
    }
    return ret;
}

void Double_Knob::tryStartRendering(){
    startRendering(false);
}
/***********************************BUTTON_KNOB*****************************************/

Button_Knob::Button_Knob(Node* node, const std::string& description,int dimension, Knob_Mask flags):
Knob(node,description,dimension,flags)
{
    QObject::connect(this,SIGNAL(valueChanged(const Variant&)),this,SLOT(connectToSlot(const Variant&)));
}

void Button_Knob::connectToSlot(const Variant& v){
    const char* str = v.toString().toStdString().c_str();
    (void)str;
    QObject::connect(this,SIGNAL(valueChangedByUser()),this,str);
}

/***********************************COMBOBOX_KNOB*****************************************/
void ComboBox_Knob::fillHashVector(){
    _hashVector.clear();
    int value = _value.toInt();
    _hashVector.push_back(value);
}
std::string ComboBox_Knob::serialize() const{
    return QString::number(_value.toInt()).toStdString();
}
void ComboBox_Knob::_restoreFromString(const std::string& str){
    _value.setValue(QString(str.c_str()).toInt());
}

void ComboBox_Knob::tryStartRendering(){
    startRendering(false);
}
/***********************************RGBA_KNOB*****************************************/
void RGBA_Knob::fillHashVector(){
    QVector4D values = _value.value<QVector4D>();
    _hashVector.clear();
    double x[1]; x[0] = values.x();
    double y[1]; y[0] = values.y();
    double z[1]; z[0] = values.z();
    double w[1]; w[0] = values.w();
    _hashVector.push_back(*(reinterpret_cast<U64*>(&(x))));
    _hashVector.push_back(*(reinterpret_cast<U64*>(&(y))));
    _hashVector.push_back(*(reinterpret_cast<U64*>(&(z))));
    _hashVector.push_back(*(reinterpret_cast<U64*>(&(w))));
}
std::string RGBA_Knob::serialize() const{
    QVector4D values = _value.value<QVector4D>();
    return QString("r "+ QString::number(values.x()) + " g " + QString::number(values.y()) +
                   " b " + QString::number(values.z()) + " a " +QString::number(values.w())).toStdString();
}

void RGBA_Knob::_restoreFromString(const std::string& str){
    QString s(str.c_str());
    int i = s.indexOf("r");
    i+=2;
    QString rStr,gStr,bStr,aStr;
    while(i < s.size() && s.at(i).isDigit()){
        rStr.append(s.at(i));
        ++i;
    }
    i = s.indexOf("g");
    i+=2;
    while(i < s.size() && s.at(i).isDigit()){
        gStr.append(s.at(i));
        ++i;
    }
    
    i = s.indexOf("b");
    i+=2;
    while(i < s.size() && s.at(i).isDigit()){
        bStr.append(s.at(i));
        ++i;
    }
    
    i = s.indexOf("a");
    i+=2;
    while(i < s.size() && s.at(i).isDigit()){
        aStr.append(s.at(i));
        ++i;
    }
    QVector4D v(rStr.toDouble(),gStr.toDouble(),bStr.toDouble(),aStr.toDouble());
    _value.setValue(v);
    
}
/***********************************STRING_KNOB*****************************************/
void String_Knob::fillHashVector(){
    _hashVector.clear();
    QString str(_value.toString());
    for (int i = 0; i < str.size(); ++i) {
        _hashVector.push_back(str.at(i).unicode());
    }
}

std::string String_Knob::serialize() const{
    return _value.toString().toStdString();
}

void String_Knob::_restoreFromString(const std::string& str){
    _value.setValue(str);
}
/***********************************GROUP_KNOB*****************************************/


void Group_Knob::addKnob(Knob* k){
    _children.push_back(k);
}
/***********************************TAB_KNOB*****************************************/


void Tab_Knob::addTab(const std::string& name){
    _knobs.insert(make_pair(name, std::vector<Knob*>()));
}

void Tab_Knob::addKnob(const std::string& tabName,Knob* k){
    std::map<std::string,std::vector<Knob*> >::iterator it = _knobs.find(tabName);
    if(it == _knobs.end()){
        pair<std::map<std::string,std::vector<Knob*> >::iterator,bool> ret = _knobs.insert(make_pair(tabName, std::vector<Knob*>()));
        ret.first->second.push_back(k);
    }else{
        it->second.push_back(k);
    }
}

