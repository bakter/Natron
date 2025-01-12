.. _eu.gmic.AsciiArt:

G’MIC Ascii Art node
====================

*This documentation is for version 1.0 of G’MIC Ascii Art (eu.gmic.AsciiArt).*

Description
-----------

Click here for a detailed description of this filter.: http://www.gimpchat.com/viewtopic.php?f=28&t=10047

Author: David Tschumperle. Latest Update: 2014/27/03.

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

+-----------------------------------------------+---------+-------------------+------------------------------+
| Parameter / script name                       | Type    | Default           | Function                     |
+===============================================+=========+===================+==============================+
| Charset / ``Charset``                         | Choice  | Ascii             | |                            |
|                                               |         |                   | | **Custom**                 |
|                                               |         |                   | | **Binary Digits**          |
|                                               |         |                   | | **Digits**                 |
|                                               |         |                   | | **Lowercase Letters**      |
|                                               |         |                   | | **Uppercase Letters**      |
|                                               |         |                   | | **Ascii**                  |
|                                               |         |                   | | **Card Suits**             |
|                                               |         |                   | | **Math Symbols**           |
+-----------------------------------------------+---------+-------------------+------------------------------+
| Custom Dictionary / ``Custom_Dictionary``     | String  | .oO0              |                              |
+-----------------------------------------------+---------+-------------------+------------------------------+
| Analysis Scale / ``Analysis_Scale``           | Integer | 16                |                              |
+-----------------------------------------------+---------+-------------------+------------------------------+
| Analysis Smoothness / ``Analysis_Smoothness`` | Double  | 15                |                              |
+-----------------------------------------------+---------+-------------------+------------------------------+
| Synthesis Scale / ``Synthesis_Scale``         | Integer | 16                |                              |
+-----------------------------------------------+---------+-------------------+------------------------------+
| Result Type / ``Result_Type``                 | Choice  | Colored on Black  | |                            |
|                                               |         |                   | | **White on Black**         |
|                                               |         |                   | | **Black on White**         |
|                                               |         |                   | | **Colored on Black**       |
|                                               |         |                   | | **Colored on Transparent** |
+-----------------------------------------------+---------+-------------------+------------------------------+
| Gamma / ``Gamma``                             | Double  | 0                 |                              |
+-----------------------------------------------+---------+-------------------+------------------------------+
| Smoothness / ``Smoothness``                   | Double  | 0.2               |                              |
+-----------------------------------------------+---------+-------------------+------------------------------+
| Colors / ``Colors``                           | Choice  | Full Colors       | |                            |
|                                               |         |                   | | **Full Colors**            |
|                                               |         |                   | | **2 Colors**               |
|                                               |         |                   | | **3 Colors**               |
|                                               |         |                   | | **4 Colors**               |
|                                               |         |                   | | **8 Colors**               |
|                                               |         |                   | | **12 Colors**              |
|                                               |         |                   | | **16 Colors**              |
|                                               |         |                   | | **Grayscale**              |
|                                               |         |                   | | **2 Grays**                |
|                                               |         |                   | | **3 Grays**                |
|                                               |         |                   | | **4 Grays**                |
|                                               |         |                   | | **8 Grays**                |
|                                               |         |                   | | **12 Grays**               |
|                                               |         |                   | | **16 Grays**               |
+-----------------------------------------------+---------+-------------------+------------------------------+
| Output Ascii File / ``Output_Ascii_File``     | Boolean | Off               |                              |
+-----------------------------------------------+---------+-------------------+------------------------------+
| Output Folder / ``Output_Folder``             | N/A     |                   |                              |
+-----------------------------------------------+---------+-------------------+------------------------------+
| Output Filename / ``Output_Filename``         | String  | gmic_asciiart.txt |                              |
+-----------------------------------------------+---------+-------------------+------------------------------+
| Output Layer / ``Output_Layer``               | Choice  | Layer 0           | |                            |
|                                               |         |                   | | **Merged**                 |
|                                               |         |                   | | **Layer 0**                |
|                                               |         |                   | | **Layer -1**               |
|                                               |         |                   | | **Layer -2**               |
|                                               |         |                   | | **Layer -3**               |
|                                               |         |                   | | **Layer -4**               |
|                                               |         |                   | | **Layer -5**               |
|                                               |         |                   | | **Layer -6**               |
|                                               |         |                   | | **Layer -7**               |
|                                               |         |                   | | **Layer -8**               |
|                                               |         |                   | | **Layer -9**               |
+-----------------------------------------------+---------+-------------------+------------------------------+
| Resize Mode / ``Resize_Mode``                 | Choice  | Dynamic           | |                            |
|                                               |         |                   | | **Fixed (Inplace)**        |
|                                               |         |                   | | **Dynamic**                |
|                                               |         |                   | | **Downsample 1/2**         |
|                                               |         |                   | | **Downsample 1/4**         |
|                                               |         |                   | | **Downsample 1/8**         |
|                                               |         |                   | | **Downsample 1/16**        |
+-----------------------------------------------+---------+-------------------+------------------------------+
| Ignore Alpha / ``Ignore_Alpha``               | Boolean | Off               |                              |
+-----------------------------------------------+---------+-------------------+------------------------------+
| Preview/Draft Mode / ``PreviewDraft_Mode``    | Boolean | Off               |                              |
+-----------------------------------------------+---------+-------------------+------------------------------+
| Global Random Seed / ``Global_Random_Seed``   | Integer | 0                 |                              |
+-----------------------------------------------+---------+-------------------+------------------------------+
| Animate Random Seed / ``Animate_Random_Seed`` | Boolean | Off               |                              |
+-----------------------------------------------+---------+-------------------+------------------------------+
| Log Verbosity / ``Log_Verbosity``             | Choice  | Off               | |                            |
|                                               |         |                   | | **Off**                    |
|                                               |         |                   | | **Level 1**                |
|                                               |         |                   | | **Level 2**                |
|                                               |         |                   | | **Level 3**                |
+-----------------------------------------------+---------+-------------------+------------------------------+
