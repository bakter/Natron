.. _eu.gmic.AboutGMIC:

About G’MIC node
================

*This documentation is for version 1.0 of About G’MIC (eu.gmic.AboutGMIC).*

Description
-----------

Support Us !

is proposed to you by

David Tschumperle and Sebastien Fourey

( IMAGE Team / GREYC Laboratory - CNRS UMR 6072 ): https://www.greyc.fr/?page_id=443&lang=en

If you appreciate what we do on G’MIC and want to help us maintaining and developing this piece of software, please consider making a donation!

Go to the donation page: https://libreart.info/en/projects/gmic

G’MIC officially collaborates with LILA (“Libre comme l’Art”), a French non-profit organization, which promotes Arts and Artists as well as access to technics and knowledge for everyone.

LILA collects donations to help developing G’MIC.

Author: David Tschumperle. Latest Update: 2019/03/13.

About G’MIC

is proposed to you by

David Tschumperle and Sebastien Fourey

( IMAGE Team / GREYC Laboratory - CNRS UMR 6072 ): https://www.greyc.fr/?page_id=443&lang=en

This plug-in is based on our open-source libraries G’MIC and CImg (C++ Template Image Processing Library), available at:

https://gmic.eu and http://cimg.eu

If you appreciate G’MIC, you are welcome to send us a nice postcard from your place, at:

David Tschumperle,

Laboratoire GREYC (CNRS UMR 6072), Equipe Image,

6 Bd du Marechal Juin,

14050 Caen Cedex / France.

Postcards senders automatically enter the Friends Hall of Fame :) !

You may also consider making a donation!

Contributors

We would like to thank all these people who contributed to G’MIC in one way or another. A big hug to :

- Sylvie Alexandre (packaging, testing & filters) - Partha Bagchi (packaging) - Daniel P. Berrange (packaging) - Sebastien Bougleux (debugging) - Jerome Boulanger (testing & code) - Claude Bulin (packaging) - Aurelien Ceyden (packaging) - Francois Collard (testing) - Patrick David (testing & filters) - Maxime Daisy (code & testing) - Frederic Devernay (code) - Iain Fergusson (filters) - Tobias Fleischer (testing & code) - Roberto Ferramosca (packaging) - Jerome Ferrari (testing, code & tutorials) - Andrea Ferrero (testing, code) - Chris Fiedler (gfx) - Sebastien Fourey (G’MIC-Qt, ZArt code & G’MIC online) - Gentlemanbeggar (filters) - David Gowers (testing) - Claes Holmerson (tutorials) - Arto Huotari (filters) - Dan Leinir Turthra Jensen (debugging) - Tom Keil (testing, filters & tutorials) - Andy Kelday (testing & filters) - Alan Kwan (afre) (testing & filters) - Angelo Lama (testing & EKD integration) - John Lakkas (filters) - Stephane de la Linuxerie (design) - Mark (translation) - Mahvin (testing & design) - MareroQ (translation) - Ramon Miranda (translation) - Tou Omiya (translation) - Mauro Quercia (translation) - PhotoComiX (testing, translation & filters) - Garry Osgood (documentation & filters) - Jehan Pages (testing & code) - Andreas Pahlsson (filters) - James Prichard (testing & filters) - Guilherme Razgriz (translation) - Karsten Rodenacker (packaging & code) - Marc Roovers (clut data) - Dani Sarda (translation) - Yuri Shemanin (debugging) - Silvio Grosso (debugging) - Stepanekos (translation) - Thorsten “otto” Stettin (packaging) - Lukas Tvrdy (Krita integration) - Martin Wolff (testing & filters) - Bernd Zeimetz (packaging) - Matthias Zepper (testing) -

Download External Data

This filter will download all external data files used by some filters of the G’MIC plug-in (Color Grading, Light Leaks, Grain, etc...), and will install them as persistent files on your hard drive. After this operation, you won’t need a permanent internet connection anymore in order to use some of the G’MIC filters.

Warning: A lot of data will be downloaded by this filter. This can take a long time !

Alternative (manual) method:

If, for any reasons, your plug-in is unable to retrieve data from the Internet, you can download all those data files manually (as a single .zip file) at this address :

https://gmic.eu/gmic_all_data.zip

You must then decompress all files contained in this archive at the following location:

- for Unix-like systems : $HOME/.cache/gmic/

- for Windows systems : %APPDATA/gmic/

Author: David Tschumperle. Latest Update: 2014/16/04.

Filter Design

G’MIC is an open image processing framework. Thus, including user-defined filters into this plug-in is possible.

To do so, you need to create a .gmic file in your $HOME/ folder (or %APPDATA%/user.gmic on Windows). It will be read each time the plug-in is launched, or when the Refresh button (under the central pane) is pressed. It must be a regular ascii file, containing the declarations and implementations of the filters (written in the G’MIC language) that will be added to the list of available ones.

Existing filters are already defined this way. Writing a filter from scratch in G’MIC requires some skills, but can be generally done in very few lines.

Example of a valid .gmic entry :

#@gmic\_plugin My effect : my_effect, my_effect

Sigma = float(2,0,10)

my_effect :

::

    \+blur $1 n 0,255 xor

Look at the reference documentation and the tutorial whose links are given below, to learn more. By the way, you are encouraged to share your nice custom filters with us on our forums, for inclusion into next releases of G’MIC.

[1] G’MIC reference documentation": : https://gmic.eu/reference.shtml

[2] G’MIC scripting tutorial": : https://gmic.eu/tutorial/index.shtml

[3] G’MIC filter template": : https://gmic.eu/template.gmic

Friends Hall of Fame

Supporters:

- A big hug goes to these friends who supported the project:

Margaret Wong, Adrian Bottomley, Pamela Young, Chris Bowness, Peter Howarth, Marlon Montalvo, Christian Freiherr von Malchus, Nolan Tyrrell, Gilles Bouquerel, Mihail Balabanov, Rolf Niepraschk, Volkmar Geske, Menno Tjoelker, Abhijeet Borkar, Arleta Lesniewska, Nicola Giaccobe, Helmut Muhleisen, Paul Buckley, Mike Bing, Olivier Lecarme, Edward Ingram, Stefan Stadtler-Ley, Michel Pastor, Sz.U, Sven Kraft, Frederik Elwert, Jessica Leonard, Kenneth Simons, Milos Ciuk, Manlio Barolo, John Lewandowski, Didier Lima, &#381;ygimantas Tauras, Massimo Ferri, Hiroshi Takekawa, Freelance writer, Elaine Hutchings, Andras Somogyi, Jason Dora, Boris Hajdukovic, Jeff Combs / Mappish, BTraven, Steven Brener, Susanne Gabrielski, Andrea Correani, Mads Thomsen, Djek Eykhout, Michael Calabrese, Joachim Steiert Christian Dubettier, J. Casseur, Okki, Dariusz Duma, Mahvin, Elleen Hennessy, BluffStuffPlus, Bertrand Chan, Mirella Scotto, Paul Sauve, Lars Mielke, Devin Sorell, Pepe Baeza, Andrey Pivovarova, David Oliver, errore, Anudai, James Stalnaker, Paolo Finetti, Luigi Scarselli, Pat David, Juan Jose Rodriguez Vela, Thomas Jakob, Kim Bartholomew, Sudi, Michael Prostka, Arkadi Gelfond, Sabine Schafers, Bull O’Woods, Jost Jakob Schaper, Dominik Wefers, Frank McLaughlin, Jonas Wagner, Void lon iXaarii, Mark Boadey, Laura Haglund, Lee Elliott, Bernard Desenclos, Randy Gordon-Gilmore, Eddie Dedrick, Greg FitzPatrick, Zsolt Szabo, Daniel Hanna, Peter Bengtsson, Diego Nassetti, William Tweedy, Shawnee Horn, Stephan Munsch, MysticAli3n-Wear, Mika Mantere, Christian Beuschel, Tore Busch, Douc McGregor. Marcel Dahm, Susan Voitel, Henk Koning, Arnie Jordan, Carol Jennings, Sebastien Huart, Jess Stryker, Rui Luis, Renato Salles, Petr Zagalak, Antonio Vicien Faure, Vincent Bermel, Christian Stocco, Richard Benedict, Dr. Helmut Jarausch, Michael Beck, Riccardo Leone, Gisela Looram, Frank Tegtmeyer, David Kettrey, Peter Hoge, Alexander Heitmann, Olivier Larski, Victor Fandrey, Stefan Peter, Dimitrios Psychogios, Antti Luoma, Eddy Young Tie Yang, Thomas Elfstrom, Valentine Boyce, George Harnett, Darius Manka, Chris Knox, Thomas Tapping, Phillip R Ziesemer, Jean Francois. Franz Ziereis, Alessandro Renzi, Tsuda Koshi, Boxrec Ltd, Wolfgang Schweizer, Ramon Miranda, Volker Bradley, Marco Zara, Marco Tedaldi, Rodney Lee, Konstantinos Blatzonis, Simon Chanson, Herbert Malle, Matthias Zepper, Christian Mariucci, M. R., Mark Link, Rolf Steinort, Daniel Tauro, Ben Langhinrichs, Paolo Pedaletti, Ricardo Corin, James Prichard, Matt Jones, Eddy Vervest, Steven Shupe, Flavio Casadei Della Chiesa, Lyle Kroll.

Postcard senders:

- We’ve received 44 postcards from G’MIC enthusiasts so far. You could be the 45rd sender :)

- A big hug goes to these postcard senders (recently received first) :

Patrick Wanters (USA), Josep Febrer (Pregonda/Menorca), Richard Gledson (Newcastle upon tyne/England), James Jaworski (Winnipeg/Canada), Powlux (France), Volker Doebel (Haldern/Germany), Patrick Wauters (Bilbao/Spain), Sebastien Fourey (Konstanz/Germany), David Revoy (Toulouse/France), Giulio Canevari (Pavia/Italy), Bruno Steinbach (Pondicherry/India), Steve Gillow (Fort Worth/Texas/USA), Peter Neave (Sydney/Australia), Andrea [Photoflow] (Italy), Garry R. Osgood (New York/USA), Justin Pletzfeld (Germany), Werner Meier (Germany), Patrick Wauters (Roma/Italy), Marc Lis (Belgium), ZondeR (France), Bill C. (USA), Michael T. (France), Patrick Wauters (Lisboa), Akky [Gimpchat] (Australia), Michel Thomas (Germany), Pierre-Yves (Ile de Batz/France), Family Hamacher (Trier/Germany), Benoit Gauzere and Francois Lozes (Hokusai/Japan), Dr. Rainer Teubner (Seligenstadt/Germany), Mauro Mitrino (Mantova/Italy), Werner Meier (Mettlach/Germany), Arto Huotari (Helsinki/Finland), Benoit Gauzere (California/USA), Arkadi Gelfond (Foster City - California/USA), Corinne Masimann (Neuchatel/Switzerland), Mahvin (Portland/USA), Vincent Roullier (Caen/France), M???? (Munich/Germany), F. Albior (Jaca/Spain), PhotoComIX (Frascati/Italy), Guy Poizat (Cabestany/France), Institut for Biomathematik und Biometrie (Neuherberg/Germany), Jean-Michel Webbe (Guadeloupe/France), Jaime (Barcelona/Spain).

May the force be with you!

Gmicky - Roddy

Gmicky is the name of the G’MIC mascot. He is a small and cute tiger who knows how to do magic. Gmicky is a tiger, i.e. fast, agile and elegant, just as the G’MIC code is :). As many magicians, Gmicky knows lot of gimmicks, and he is a direct and friendly companion of the ImageMagick’s wizard, or the GraphicMagick’s frog.

Roddy is another mascot designed specifically for the Artistic / Rodilius filter of G’MIC.

Gmicky and Roddy have been both created and drawn by

Mahvelous Mahvin: http://www.mahvin.com/

and

David Revoy (Deevad): http://www.davidrevoy.com/

Privacy Notice

This plugin may download up-to-date filter definitions from the gmic.eu server.

It is the case when first launched after a fresh installation, and periodically with a frequency which can be set in the settings dialog. The user should be aware that the following information may be retrieved from the server logs: IP address of the client; date and time of the request; as well as a short string, supplied through the HTTP protocol “User Agent” header field, which describes the full plugin version as shown in the window title (e.g. “G’MIC-Qt for GIMP 2.8 - Linux 64 bits - 2.2.1_pre#180301”).

Note that this information may solely be used for purely anonymous statistical purposes.

Author: Sebastien Fourey. Latest Update: 2018/03/01.

Release Notes

- 2009/01/13 : version 1.3.0 (initial plug-in release).

- 2010/09/03 : version 1.4.0.

- 2011/07/07 : version 1.5.0.

- 2014/08/20 : version 1.6.0.

- 2016/03/25 : version 1.7.0.

- 2017/05/29 : version 2.0.0.

- 2017/10/09 : version 2.1.0.

- 2018/02/15 : version 2.2.0.

- 2018/06/21 : version 2.3.0.

- 2018/10/04 : version 2.4.0.

- 2019/03/15 : version 2.5.0.

- 2019/04/29 : version 2.6.0.

- 2019/06/28 : version 2.6.7 (Current stable).

View latest minor changelog (2.6): https://discuss.pixls.us/t/release-of-gmic-2-6

View latest major changelog (2.0): https://discuss.pixls.us/t/release-of-gmic-2-0-0

Wrapper for the G’MIC framework (http://gmic.eu) written by Tobias Fleischer (http://www.reduxfx.com) and Frederic Devernay.

Inputs
------

+--------+-------------+----------+
| Input  | Description | Optional |
+========+=============+==========+
| Source |             | No       |
+--------+-------------+----------+

Controls
--------

.. tabularcolumns:: |>{\raggedright}p{0.2\columnwidth}|>{\raggedright}p{0.06\columnwidth}|>{\raggedright}p{0.07\columnwidth}|p{0.63\columnwidth}|

.. cssclass:: longtable

+--------------------------------------------------------------------+---------+--------------------+-----------------------------------+
| Parameter / script name                                            | Type    | Default            | Function                          |
+====================================================================+=========+====================+===================================+
| Force re-Download from Scratch / ``Force_reDownload_from_Scratch`` | Boolean | Off                |                                   |
+--------------------------------------------------------------------+---------+--------------------+-----------------------------------+
| Mascot Image / ``Mascot_Image``                                    | Choice  | Gmicky (by Deevad) | |                                 |
|                                                                    |         |                    | | **Gmicky (by Deevad)**          |
|                                                                    |         |                    | | **Gmicky (by Mahvin)**          |
|                                                                    |         |                    | | **Gmicky & Wilber (by Mahvin)** |
|                                                                    |         |                    | | **Roddy (by Mahvin)**           |
+--------------------------------------------------------------------+---------+--------------------+-----------------------------------+
| Output Layer / ``Output_Layer``                                    | Choice  | Layer 0            | |                                 |
|                                                                    |         |                    | | **Merged**                      |
|                                                                    |         |                    | | **Layer 0**                     |
|                                                                    |         |                    | | **Layer -1**                    |
|                                                                    |         |                    | | **Layer -2**                    |
|                                                                    |         |                    | | **Layer -3**                    |
|                                                                    |         |                    | | **Layer -4**                    |
|                                                                    |         |                    | | **Layer -5**                    |
|                                                                    |         |                    | | **Layer -6**                    |
|                                                                    |         |                    | | **Layer -7**                    |
|                                                                    |         |                    | | **Layer -8**                    |
|                                                                    |         |                    | | **Layer -9**                    |
+--------------------------------------------------------------------+---------+--------------------+-----------------------------------+
| Resize Mode / ``Resize_Mode``                                      | Choice  | Dynamic            | |                                 |
|                                                                    |         |                    | | **Fixed (Inplace)**             |
|                                                                    |         |                    | | **Dynamic**                     |
|                                                                    |         |                    | | **Downsample 1/2**              |
|                                                                    |         |                    | | **Downsample 1/4**              |
|                                                                    |         |                    | | **Downsample 1/8**              |
|                                                                    |         |                    | | **Downsample 1/16**             |
+--------------------------------------------------------------------+---------+--------------------+-----------------------------------+
| Ignore Alpha / ``Ignore_Alpha``                                    | Boolean | Off                |                                   |
+--------------------------------------------------------------------+---------+--------------------+-----------------------------------+
| Preview/Draft Mode / ``PreviewDraft_Mode``                         | Boolean | Off                |                                   |
+--------------------------------------------------------------------+---------+--------------------+-----------------------------------+
| Global Random Seed / ``Global_Random_Seed``                        | Integer | 0                  |                                   |
+--------------------------------------------------------------------+---------+--------------------+-----------------------------------+
| Animate Random Seed / ``Animate_Random_Seed``                      | Boolean | Off                |                                   |
+--------------------------------------------------------------------+---------+--------------------+-----------------------------------+
| Log Verbosity / ``Log_Verbosity``                                  | Choice  | Off                | |                                 |
|                                                                    |         |                    | | **Off**                         |
|                                                                    |         |                    | | **Level 1**                     |
|                                                                    |         |                    | | **Level 2**                     |
|                                                                    |         |                    | | **Level 3**                     |
+--------------------------------------------------------------------+---------+--------------------+-----------------------------------+
