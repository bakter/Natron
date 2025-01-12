.. _eu.gmic.Ball:

G’MIC Ball node
===============

*This documentation is for version 1.0 of G’MIC Ball (eu.gmic.Ball).*

Description
-----------

Author: David Tschumperle. Latest Update: 2013/27/11.

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

+-----------------------------------------------+---------+---------------------+-----------------------+
| Parameter / script name                       | Type    | Default             | Function              |
+===============================================+=========+=====================+=======================+
| Radius / ``Radius``                           | Integer | 128                 |                       |
+-----------------------------------------------+---------+---------------------+-----------------------+
| Specular Light / ``Specular_Light``           | Double  | 0.8                 |                       |
+-----------------------------------------------+---------+---------------------+-----------------------+
| Specular Size / ``Specular_Size``             | Double  | 1                   |                       |
+-----------------------------------------------+---------+---------------------+-----------------------+
| Shadow / ``Shadow``                           | Double  | 1.5                 |                       |
+-----------------------------------------------+---------+---------------------+-----------------------+
| Color / ``Color``                             | Color   | r: 1 g: 0 b: 1 a: 1 |                       |
+-----------------------------------------------+---------+---------------------+-----------------------+
| Output Layer / ``Output_Layer``               | Choice  | Layer 0             | |                     |
|                                               |         |                     | | **Merged**          |
|                                               |         |                     | | **Layer 0**         |
|                                               |         |                     | | **Layer -1**        |
|                                               |         |                     | | **Layer -2**        |
|                                               |         |                     | | **Layer -3**        |
|                                               |         |                     | | **Layer -4**        |
|                                               |         |                     | | **Layer -5**        |
|                                               |         |                     | | **Layer -6**        |
|                                               |         |                     | | **Layer -7**        |
|                                               |         |                     | | **Layer -8**        |
|                                               |         |                     | | **Layer -9**        |
+-----------------------------------------------+---------+---------------------+-----------------------+
| Resize Mode / ``Resize_Mode``                 | Choice  | Dynamic             | |                     |
|                                               |         |                     | | **Fixed (Inplace)** |
|                                               |         |                     | | **Dynamic**         |
|                                               |         |                     | | **Downsample 1/2**  |
|                                               |         |                     | | **Downsample 1/4**  |
|                                               |         |                     | | **Downsample 1/8**  |
|                                               |         |                     | | **Downsample 1/16** |
+-----------------------------------------------+---------+---------------------+-----------------------+
| Ignore Alpha / ``Ignore_Alpha``               | Boolean | Off                 |                       |
+-----------------------------------------------+---------+---------------------+-----------------------+
| Preview/Draft Mode / ``PreviewDraft_Mode``    | Boolean | Off                 |                       |
+-----------------------------------------------+---------+---------------------+-----------------------+
| Global Random Seed / ``Global_Random_Seed``   | Integer | 0                   |                       |
+-----------------------------------------------+---------+---------------------+-----------------------+
| Animate Random Seed / ``Animate_Random_Seed`` | Boolean | Off                 |                       |
+-----------------------------------------------+---------+---------------------+-----------------------+
| Log Verbosity / ``Log_Verbosity``             | Choice  | Off                 | |                     |
|                                               |         |                     | | **Off**             |
|                                               |         |                     | | **Level 1**         |
|                                               |         |                     | | **Level 2**         |
|                                               |         |                     | | **Level 3**         |
+-----------------------------------------------+---------+---------------------+-----------------------+
