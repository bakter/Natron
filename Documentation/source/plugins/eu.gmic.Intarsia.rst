.. _eu.gmic.Intarsia:

G’MIC Intarsia node
===================

*This documentation is for version 1.0 of G’MIC Intarsia (eu.gmic.Intarsia).*

Description
-----------

Note: Intarsia is a method of Crochet/Knitting with a number of colours, in which a separate ball of yarn is used for each area of colour. This filter creates a HTML version of a graph chart which is solely used for this purpose

Author: David Tschumperle. Latest Update: 2015/09/07.

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

+---------------------------------------------------------------------+---------+---------------+------------------------+
| Parameter / script name                                             | Type    | Default       | Function               |
+=====================================================================+=========+===============+========================+
| Output Directory / ``Output_Directory``                             | N/A     |               |                        |
+---------------------------------------------------------------------+---------+---------------+------------------------+
| Output HTML File / ``Output_HTML_File``                             | String  | intarsia.html |                        |
+---------------------------------------------------------------------+---------+---------------+------------------------+
| Maximum Image Size / ``Maximum_Image_Size``                         | Integer | 512           |                        |
+---------------------------------------------------------------------+---------+---------------+------------------------+
| Maximum Number of Image Colors / ``Maximum_Number_of_Image_Colors`` | Integer | 12            |                        |
+---------------------------------------------------------------------+---------+---------------+------------------------+
| Starting Point / ``Starting_Point``                                 | Choice  | Top Right     | |                      |
|                                                                     |         |               | | **Top Left**         |
|                                                                     |         |               | | **Top Right**        |
|                                                                     |         |               | | **Bottom Left**      |
|                                                                     |         |               | | **Bottom Right**     |
+---------------------------------------------------------------------+---------+---------------+------------------------+
| Loop Method / ``Loop_Method``                                       | Choice  | Row by Row    | |                      |
|                                                                     |         |               | | **Row by Row**       |
|                                                                     |         |               | | **Column by Column** |
+---------------------------------------------------------------------+---------+---------------+------------------------+
| Add Comment Area in HTML Page / ``Add_Comment_Area_in_HTML_Page``   | Boolean | On            |                        |
+---------------------------------------------------------------------+---------+---------------+------------------------+
| Preview Progress (%) / ``Preview_Progress_``                        | Double  | 100           |                        |
+---------------------------------------------------------------------+---------+---------------+------------------------+
| Output Layer / ``Output_Layer``                                     | Choice  | Layer 0       | |                      |
|                                                                     |         |               | | **Merged**           |
|                                                                     |         |               | | **Layer 0**          |
|                                                                     |         |               | | **Layer -1**         |
|                                                                     |         |               | | **Layer -2**         |
|                                                                     |         |               | | **Layer -3**         |
|                                                                     |         |               | | **Layer -4**         |
|                                                                     |         |               | | **Layer -5**         |
|                                                                     |         |               | | **Layer -6**         |
|                                                                     |         |               | | **Layer -7**         |
|                                                                     |         |               | | **Layer -8**         |
|                                                                     |         |               | | **Layer -9**         |
+---------------------------------------------------------------------+---------+---------------+------------------------+
| Resize Mode / ``Resize_Mode``                                       | Choice  | Dynamic       | |                      |
|                                                                     |         |               | | **Fixed (Inplace)**  |
|                                                                     |         |               | | **Dynamic**          |
|                                                                     |         |               | | **Downsample 1/2**   |
|                                                                     |         |               | | **Downsample 1/4**   |
|                                                                     |         |               | | **Downsample 1/8**   |
|                                                                     |         |               | | **Downsample 1/16**  |
+---------------------------------------------------------------------+---------+---------------+------------------------+
| Ignore Alpha / ``Ignore_Alpha``                                     | Boolean | Off           |                        |
+---------------------------------------------------------------------+---------+---------------+------------------------+
| Preview/Draft Mode / ``PreviewDraft_Mode``                          | Boolean | Off           |                        |
+---------------------------------------------------------------------+---------+---------------+------------------------+
| Global Random Seed / ``Global_Random_Seed``                         | Integer | 0             |                        |
+---------------------------------------------------------------------+---------+---------------+------------------------+
| Animate Random Seed / ``Animate_Random_Seed``                       | Boolean | Off           |                        |
+---------------------------------------------------------------------+---------+---------------+------------------------+
| Log Verbosity / ``Log_Verbosity``                                   | Choice  | Off           | |                      |
|                                                                     |         |               | | **Off**              |
|                                                                     |         |               | | **Level 1**          |
|                                                                     |         |               | | **Level 2**          |
|                                                                     |         |               | | **Level 3**          |
+---------------------------------------------------------------------+---------+---------------+------------------------+
