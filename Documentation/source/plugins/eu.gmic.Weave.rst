.. _eu.gmic.Weave:

G’MIC Weave node
================

*This documentation is for version 1.0 of G’MIC Weave (eu.gmic.Weave).*

Description
-----------

Author: David Tschumperle. Latest Update: 2013/18/01.

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
| Density / ``Density``                         | Integer | 6       |                       |
+-----------------------------------------------+---------+---------+-----------------------+
| Thickness / ``Thickness``                     | Double  | 65      |                       |
+-----------------------------------------------+---------+---------+-----------------------+
| Shadow / ``Shadow``                           | Double  | 0       |                       |
+-----------------------------------------------+---------+---------+-----------------------+
| Shading / ``Shading``                         | Double  | 0.5     |                       |
+-----------------------------------------------+---------+---------+-----------------------+
| Fibers Amplitude / ``Fibers_Amplitude``       | Double  | 0       |                       |
+-----------------------------------------------+---------+---------+-----------------------+
| Fibers Smoothness / ``Fibers_Smoothness``     | Double  | 0       |                       |
+-----------------------------------------------+---------+---------+-----------------------+
| Angle / ``Angle``                             | Choice  | 0 deg.  | |                     |
|                                               |         |         | | **0 deg.**          |
|                                               |         |         | | **22.5 deg.**       |
|                                               |         |         | | **45 deg.**         |
|                                               |         |         | | **67.5 deg.**       |
+-----------------------------------------------+---------+---------+-----------------------+
| X-Curvature / ``XCurvature``                  | Double  | 0       |                       |
+-----------------------------------------------+---------+---------+-----------------------+
| Y-Curvature / ``YCurvature``                  | Double  | 0       |                       |
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
