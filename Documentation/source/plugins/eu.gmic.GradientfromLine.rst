.. _eu.gmic.GradientfromLine:

G’MIC Gradient from Line node
=============================

*This documentation is for version 1.0 of G’MIC Gradient from Line (eu.gmic.GradientfromLine).*

Description
-----------

Note: Set length to 0 to release gradient length constraints.

Author: David Tschumperle. Latest Update: 2015/29/06.

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

+-----------------------------------------------+---------+------------+---------------------------+
| Parameter / script name                       | Type    | Default    | Function                  |
+===============================================+=========+============+===========================+
| Starting Point (%) / ``Starting_Point_``      | Double  | x: 0 y: 0  |                           |
+-----------------------------------------------+---------+------------+---------------------------+
| Ending Point (%) / ``Ending_Point_``          | Double  | x: 1 y: 1  |                           |
+-----------------------------------------------+---------+------------+---------------------------+
| Sampling / ``Sampling``                       | Double  | 100        |                           |
+-----------------------------------------------+---------+------------+---------------------------+
| Length / ``Length``                           | Integer | 0          |                           |
+-----------------------------------------------+---------+------------+---------------------------+
| Sort Colors / ``Sort_Colors``                 | Choice  | Don’t Sort | |                         |
|                                               |         |            | | **Don’t Sort**          |
|                                               |         |            | | **By Red Component**    |
|                                               |         |            | | **By Green Component**  |
|                                               |         |            | | **By Blue Component**   |
|                                               |         |            | | **By Luminance**        |
|                                               |         |            | | **By Blue Chrominance** |
|                                               |         |            | | **By Red Chrominance**  |
|                                               |         |            | | **By Lightness**        |
+-----------------------------------------------+---------+------------+---------------------------+
| Reverse Gradient / ``Reverse_Gradient``       | Boolean | Off        |                           |
+-----------------------------------------------+---------+------------+---------------------------+
| Preview Gradient / ``Preview_Gradient``       | Boolean | On         |                           |
+-----------------------------------------------+---------+------------+---------------------------+
| Save Gradient As / ``Save_Gradient_As``       | String  |            |                           |
+-----------------------------------------------+---------+------------+---------------------------+
| Output Layer / ``Output_Layer``               | Choice  | Layer 0    | |                         |
|                                               |         |            | | **Merged**              |
|                                               |         |            | | **Layer 0**             |
|                                               |         |            | | **Layer -1**            |
|                                               |         |            | | **Layer -2**            |
|                                               |         |            | | **Layer -3**            |
|                                               |         |            | | **Layer -4**            |
|                                               |         |            | | **Layer -5**            |
|                                               |         |            | | **Layer -6**            |
|                                               |         |            | | **Layer -7**            |
|                                               |         |            | | **Layer -8**            |
|                                               |         |            | | **Layer -9**            |
+-----------------------------------------------+---------+------------+---------------------------+
| Resize Mode / ``Resize_Mode``                 | Choice  | Dynamic    | |                         |
|                                               |         |            | | **Fixed (Inplace)**     |
|                                               |         |            | | **Dynamic**             |
|                                               |         |            | | **Downsample 1/2**      |
|                                               |         |            | | **Downsample 1/4**      |
|                                               |         |            | | **Downsample 1/8**      |
|                                               |         |            | | **Downsample 1/16**     |
+-----------------------------------------------+---------+------------+---------------------------+
| Ignore Alpha / ``Ignore_Alpha``               | Boolean | Off        |                           |
+-----------------------------------------------+---------+------------+---------------------------+
| Preview/Draft Mode / ``PreviewDraft_Mode``    | Boolean | Off        |                           |
+-----------------------------------------------+---------+------------+---------------------------+
| Global Random Seed / ``Global_Random_Seed``   | Integer | 0          |                           |
+-----------------------------------------------+---------+------------+---------------------------+
| Animate Random Seed / ``Animate_Random_Seed`` | Boolean | Off        |                           |
+-----------------------------------------------+---------+------------+---------------------------+
| Log Verbosity / ``Log_Verbosity``             | Choice  | Off        | |                         |
|                                               |         |            | | **Off**                 |
|                                               |         |            | | **Level 1**             |
|                                               |         |            | | **Level 2**             |
|                                               |         |            | | **Level 3**             |
+-----------------------------------------------+---------+------------+---------------------------+
