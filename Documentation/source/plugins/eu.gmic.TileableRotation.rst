.. _eu.gmic.TileableRotation:

G’MIC Tileable Rotation node
============================

*This documentation is for version 1.0 of G’MIC Tileable Rotation (eu.gmic.TileableRotation).*

Description
-----------

Note: This filter implements the tileable rotation technique described by Peter Yu, at:

[Peter Yu] Create rotated tileable patterns: http://www.peteryu.ca/tutorials/gimp/rotate_tileable_patterns

Author: David Tschumperle. Latest Update: 2011/26/05.

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

+-----------------------------------------------+---------+---------+-----------------------+
| Parameter / script name                       | Type    | Default | Function              |
+===============================================+=========+=========+=======================+
| Angle / ``Angle``                             | Double  | 45      |                       |
+-----------------------------------------------+---------+---------+-----------------------+
| Maximum Size Factor / ``Maximum_Size_Factor`` | Integer | 8       |                       |
+-----------------------------------------------+---------+---------+-----------------------+
| Array Mode / ``Array_Mode``                   | Choice  | None    | |                     |
|                                               |         |         | | **None**            |
|                                               |         |         | | **x-axis**          |
|                                               |         |         | | **y-axis**          |
|                                               |         |         | | **xy-axes**         |
|                                               |         |         | | **2xy-axes**        |
+-----------------------------------------------+---------+---------+-----------------------+
| Output Layer / ``Output_Layer``               | Choice  | Layer 0 | |                     |
|                                               |         |         | | **Merged**          |
|                                               |         |         | | **Layer 0**         |
|                                               |         |         | | **Layer -1**        |
|                                               |         |         | | **Layer -2**        |
|                                               |         |         | | **Layer -3**        |
|                                               |         |         | | **Layer -4**        |
|                                               |         |         | | **Layer -5**        |
|                                               |         |         | | **Layer -6**        |
|                                               |         |         | | **Layer -7**        |
|                                               |         |         | | **Layer -8**        |
|                                               |         |         | | **Layer -9**        |
+-----------------------------------------------+---------+---------+-----------------------+
| Resize Mode / ``Resize_Mode``                 | Choice  | Dynamic | |                     |
|                                               |         |         | | **Fixed (Inplace)** |
|                                               |         |         | | **Dynamic**         |
|                                               |         |         | | **Downsample 1/2**  |
|                                               |         |         | | **Downsample 1/4**  |
|                                               |         |         | | **Downsample 1/8**  |
|                                               |         |         | | **Downsample 1/16** |
+-----------------------------------------------+---------+---------+-----------------------+
| Ignore Alpha / ``Ignore_Alpha``               | Boolean | Off     |                       |
+-----------------------------------------------+---------+---------+-----------------------+
| Preview/Draft Mode / ``PreviewDraft_Mode``    | Boolean | Off     |                       |
+-----------------------------------------------+---------+---------+-----------------------+
| Global Random Seed / ``Global_Random_Seed``   | Integer | 0       |                       |
+-----------------------------------------------+---------+---------+-----------------------+
| Animate Random Seed / ``Animate_Random_Seed`` | Boolean | Off     |                       |
+-----------------------------------------------+---------+---------+-----------------------+
| Log Verbosity / ``Log_Verbosity``             | Choice  | Off     | |                     |
|                                               |         |         | | **Off**             |
|                                               |         |         | | **Level 1**         |
|                                               |         |         | | **Level 2**         |
|                                               |         |         | | **Level 3**         |
+-----------------------------------------------+---------+---------+-----------------------+
