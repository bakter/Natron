.. _eu.gmic.EquationPlotYfX:

G’MIC Equation Plot Y=f(X) node
===============================

*This documentation is for version 1.0 of G’MIC Equation Plot Y=f(X) (eu.gmic.EquationPlotYfX).*

Description
-----------

Note : Use variable X instead of x in the above equation to take care of the X-min/max settings. Variable c refers to the current channel number. Variable u refers to a uniformly distributed random value in [0,1]. Reduce resolution to be able to view separate graph vertices.

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

+-----------------------------------------------+---------+-------------------+-----------------------+
| Parameter / script name                       | Type    | Default           | Function              |
+===============================================+=========+===================+=======================+
| F(X) / ``FX``                                 | String  | X*c+10*cos(X+c+u) |                       |
+-----------------------------------------------+---------+-------------------+-----------------------+
| X-Min / ``XMin``                              | Double  | -10               |                       |
+-----------------------------------------------+---------+-------------------+-----------------------+
| X-Max / ``XMax``                              | Double  | 10                |                       |
+-----------------------------------------------+---------+-------------------+-----------------------+
| Resolution / ``Resolution``                   | Integer | 100               |                       |
+-----------------------------------------------+---------+-------------------+-----------------------+
| Channels / ``Channels``                       | Integer | 3                 |                       |
+-----------------------------------------------+---------+-------------------+-----------------------+
| Plot Type / ``Plot_Type``                     | Choice  | Splines           | |                     |
|                                               |         |                   | | **None**            |
|                                               |         |                   | | **Lines**           |
|                                               |         |                   | | **Splines**         |
|                                               |         |                   | | **Bars**            |
+-----------------------------------------------+---------+-------------------+-----------------------+
| Vertex Type / ``Vertex_Type``                 | Choice  | None              | |                     |
|                                               |         |                   | | **None**            |
|                                               |         |                   | | **Points**          |
|                                               |         |                   | | **Crosses 1**       |
|                                               |         |                   | | **Crosses 2**       |
|                                               |         |                   | | **Circles 1**       |
|                                               |         |                   | | **Circles 2**       |
|                                               |         |                   | | **Square 1**        |
|                                               |         |                   | | **Square 2**        |
+-----------------------------------------------+---------+-------------------+-----------------------+
| Output Layer / ``Output_Layer``               | Choice  | Layer 0           | |                     |
|                                               |         |                   | | **Merged**          |
|                                               |         |                   | | **Layer 0**         |
|                                               |         |                   | | **Layer -1**        |
|                                               |         |                   | | **Layer -2**        |
|                                               |         |                   | | **Layer -3**        |
|                                               |         |                   | | **Layer -4**        |
|                                               |         |                   | | **Layer -5**        |
|                                               |         |                   | | **Layer -6**        |
|                                               |         |                   | | **Layer -7**        |
|                                               |         |                   | | **Layer -8**        |
|                                               |         |                   | | **Layer -9**        |
+-----------------------------------------------+---------+-------------------+-----------------------+
| Resize Mode / ``Resize_Mode``                 | Choice  | Dynamic           | |                     |
|                                               |         |                   | | **Fixed (Inplace)** |
|                                               |         |                   | | **Dynamic**         |
|                                               |         |                   | | **Downsample 1/2**  |
|                                               |         |                   | | **Downsample 1/4**  |
|                                               |         |                   | | **Downsample 1/8**  |
|                                               |         |                   | | **Downsample 1/16** |
+-----------------------------------------------+---------+-------------------+-----------------------+
| Ignore Alpha / ``Ignore_Alpha``               | Boolean | Off               |                       |
+-----------------------------------------------+---------+-------------------+-----------------------+
| Global Random Seed / ``Global_Random_Seed``   | Integer | 0                 |                       |
+-----------------------------------------------+---------+-------------------+-----------------------+
| Animate Random Seed / ``Animate_Random_Seed`` | Boolean | Off               |                       |
+-----------------------------------------------+---------+-------------------+-----------------------+
| Log Verbosity / ``Log_Verbosity``             | Choice  | Off               | |                     |
|                                               |         |                   | | **Off**             |
|                                               |         |                   | | **Level 1**         |
|                                               |         |                   | | **Level 2**         |
|                                               |         |                   | | **Level 3**         |
+-----------------------------------------------+---------+-------------------+-----------------------+
