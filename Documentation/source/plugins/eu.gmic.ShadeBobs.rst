.. _eu.gmic.ShadeBobs:

G’MIC Shade Bobs node
=====================

*This documentation is for version 1.0 of G’MIC Shade Bobs (eu.gmic.ShadeBobs).*

Description
-----------

Bobs parameters :

Curve parameters :

Author: David Tschumperle. Latest Update: 2012/18/04.

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
| Density / ``Density``                         | Integer | 50      |                       |
+-----------------------------------------------+---------+---------+-----------------------+
| Radius / ``Radius``                           | Integer | 5       |                       |
+-----------------------------------------------+---------+---------+-----------------------+
| Duration / ``Duration``                       | Integer | 200     |                       |
+-----------------------------------------------+---------+---------+-----------------------+
| Velocity / ``Velocity``                       | Double  | 1       |                       |
+-----------------------------------------------+---------+---------+-----------------------+
| Rx / ``Rx``                                   | Double  | -1      |                       |
+-----------------------------------------------+---------+---------+-----------------------+
| Ry / ``Ry``                                   | Double  | 2       |                       |
+-----------------------------------------------+---------+---------+-----------------------+
| Rz / ``Rz``                                   | Double  | 1       |                       |
+-----------------------------------------------+---------+---------+-----------------------+
| Rt / ``Rt``                                   | Double  | 0.8     |                       |
+-----------------------------------------------+---------+---------+-----------------------+
| Rcx / ``Rcx``                                 | Double  | 0       |                       |
+-----------------------------------------------+---------+---------+-----------------------+
| Colormap / ``Colormap``                       | Choice  | Cube    | |                     |
|                                               |         |         | | **Grayscale**       |
|                                               |         |         | | **Standard**        |
|                                               |         |         | | **HSV**             |
|                                               |         |         | | **Lines**           |
|                                               |         |         | | **Hot**             |
|                                               |         |         | | **Cool**            |
|                                               |         |         | | **Jet**             |
|                                               |         |         | | **Flag**            |
|                                               |         |         | | **Cube**            |
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
