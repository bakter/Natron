.. _eu.gmic.SelectReplaceColor:

G’MIC Select-Replace Color node
===============================

*This documentation is for version 1.0 of G’MIC Select-Replace Color (eu.gmic.SelectReplaceColor).*

Description
-----------

Author: David Tschumperle. Latest Update: 2010/29/12.

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

+-----------------------------------------------+---------+---------------------+-------------------------------+
| Parameter / script name                       | Type    | Default             | Function                      |
+===============================================+=========+=====================+===============================+
| Similarity Space / ``Similarity_Space``       | Choice  | RGB[A]              | |                             |
|                                               |         |                     | | **RGB[A]**                  |
|                                               |         |                     | | **RGB**                     |
|                                               |         |                     | | **YCbCr**                   |
|                                               |         |                     | | **Red**                     |
|                                               |         |                     | | **Green**                   |
|                                               |         |                     | | **Blue**                    |
|                                               |         |                     | | **Opacity**                 |
|                                               |         |                     | | **Luminance**               |
|                                               |         |                     | | **Blue & Red Chrominances** |
|                                               |         |                     | | **Hue**                     |
|                                               |         |                     | | **Saturation**              |
+-----------------------------------------------+---------+---------------------+-------------------------------+
| Tolerance / ``Tolerance``                     | Double  | 20                  |                               |
+-----------------------------------------------+---------+---------------------+-------------------------------+
| Smoothness / ``Smoothness``                   | Double  | 0                   |                               |
+-----------------------------------------------+---------+---------------------+-------------------------------+
| Fill Holes / ``Fill_Holes``                   | Integer | 0                   |                               |
+-----------------------------------------------+---------+---------------------+-------------------------------+
| Selected Color / ``Selected_Color``           | Color   | r: 1 g: 1 b: 1 a: 1 |                               |
+-----------------------------------------------+---------+---------------------+-------------------------------+
| Output As / ``Output_As``                     | Choice  | Selected Colors     | |                             |
|                                               |         |                     | | **Selected Colors**         |
|                                               |         |                     | | **Selected Mask**           |
|                                               |         |                     | | **Rejected Colors**         |
|                                               |         |                     | | **Rejected Mask**           |
|                                               |         |                     | | **Replaced Color**          |
+-----------------------------------------------+---------+---------------------+-------------------------------+
| Replacement Color / ``Replacement_Color``     | Color   | r: 1 g: 0 b: 0 a: 0 |                               |
+-----------------------------------------------+---------+---------------------+-------------------------------+
| Preview Type / ``Preview_Type``               | Choice  | Full                | |                             |
|                                               |         |                     | | **Full**                    |
|                                               |         |                     | | **Forward Horizontal**      |
|                                               |         |                     | | **Forward Vertical**        |
|                                               |         |                     | | **Backward Horizontal**     |
|                                               |         |                     | | **Backward Vertical**       |
|                                               |         |                     | | **Duplicate Top**           |
|                                               |         |                     | | **Duplicate Left**          |
|                                               |         |                     | | **Duplicate Bottom**        |
|                                               |         |                     | | **Duplicate Right**         |
|                                               |         |                     | | **Duplicate Horizontal**    |
|                                               |         |                     | | **Duplicate Vertical**      |
|                                               |         |                     | | **Checkered**               |
|                                               |         |                     | | **Checkered Inverse**       |
+-----------------------------------------------+---------+---------------------+-------------------------------+
| Preview Split / ``Preview_Split``             | Double  | x: 0.5 y: 0.5       |                               |
+-----------------------------------------------+---------+---------------------+-------------------------------+
| Output Layer / ``Output_Layer``               | Choice  | Layer 0             | |                             |
|                                               |         |                     | | **Merged**                  |
|                                               |         |                     | | **Layer 0**                 |
|                                               |         |                     | | **Layer -1**                |
|                                               |         |                     | | **Layer -2**                |
|                                               |         |                     | | **Layer -3**                |
|                                               |         |                     | | **Layer -4**                |
|                                               |         |                     | | **Layer -5**                |
|                                               |         |                     | | **Layer -6**                |
|                                               |         |                     | | **Layer -7**                |
|                                               |         |                     | | **Layer -8**                |
|                                               |         |                     | | **Layer -9**                |
+-----------------------------------------------+---------+---------------------+-------------------------------+
| Resize Mode / ``Resize_Mode``                 | Choice  | Dynamic             | |                             |
|                                               |         |                     | | **Fixed (Inplace)**         |
|                                               |         |                     | | **Dynamic**                 |
|                                               |         |                     | | **Downsample 1/2**          |
|                                               |         |                     | | **Downsample 1/4**          |
|                                               |         |                     | | **Downsample 1/8**          |
|                                               |         |                     | | **Downsample 1/16**         |
+-----------------------------------------------+---------+---------------------+-------------------------------+
| Ignore Alpha / ``Ignore_Alpha``               | Boolean | Off                 |                               |
+-----------------------------------------------+---------+---------------------+-------------------------------+
| Preview/Draft Mode / ``PreviewDraft_Mode``    | Boolean | Off                 |                               |
+-----------------------------------------------+---------+---------------------+-------------------------------+
| Global Random Seed / ``Global_Random_Seed``   | Integer | 0                   |                               |
+-----------------------------------------------+---------+---------------------+-------------------------------+
| Animate Random Seed / ``Animate_Random_Seed`` | Boolean | Off                 |                               |
+-----------------------------------------------+---------+---------------------+-------------------------------+
| Log Verbosity / ``Log_Verbosity``             | Choice  | Off                 | |                             |
|                                               |         |                     | | **Off**                     |
|                                               |         |                     | | **Level 1**                 |
|                                               |         |                     | | **Level 2**                 |
|                                               |         |                     | | **Level 3**                 |
+-----------------------------------------------+---------+---------------------+-------------------------------+
