.. _eu.gmic.PolygonizeEnergy:

G’MIC Polygonize Energy node
============================

*This documentation is for version 1.0 of G’MIC Polygonize Energy (eu.gmic.PolygonizeEnergy).*

Description
-----------

Click here for a detailed description of this filter.: http://www.gimpchat.com/viewtopic.php?f=28&t=9174

Author: David Tschumperle. Latest Update: 2013/02/12.

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

+-----------------------------------------------+---------+---------------------+----------------------------+
| Parameter / script name                       | Type    | Default             | Function                   |
+===============================================+=========+=====================+============================+
| Amplitude / ``Amplitude``                     | Integer | 300                 |                            |
+-----------------------------------------------+---------+---------------------+----------------------------+
| Smoothness / ``Smoothness``                   | Double  | 10                  |                            |
+-----------------------------------------------+---------+---------------------+----------------------------+
| Minimal Area / ``Minimal_Area``               | Double  | 10                  |                            |
+-----------------------------------------------+---------+---------------------+----------------------------+
| X-Resolution / ``XResolution``                | Double  | 10                  |                            |
+-----------------------------------------------+---------+---------------------+----------------------------+
| Y-Resolution / ``YResolution``                | Double  | 10                  |                            |
+-----------------------------------------------+---------+---------------------+----------------------------+
| Outline Color / ``Outline_Color``             | Color   | r: 0 g: 0 b: 0 a: 0 |                            |
+-----------------------------------------------+---------+---------------------+----------------------------+
| Preview Type / ``Preview_Type``               | Choice  | Full                | |                          |
|                                               |         |                     | | **Full**                 |
|                                               |         |                     | | **Forward Horizontal**   |
|                                               |         |                     | | **Forward Vertical**     |
|                                               |         |                     | | **Backward Horizontal**  |
|                                               |         |                     | | **Backward Vertical**    |
|                                               |         |                     | | **Duplicate Top**        |
|                                               |         |                     | | **Duplicate Left**       |
|                                               |         |                     | | **Duplicate Bottom**     |
|                                               |         |                     | | **Duplicate Right**      |
|                                               |         |                     | | **Duplicate Horizontal** |
|                                               |         |                     | | **Duplicate Vertical**   |
|                                               |         |                     | | **Checkered**            |
|                                               |         |                     | | **Checkered Inverse**    |
+-----------------------------------------------+---------+---------------------+----------------------------+
| Preview Split / ``Preview_Split``             | Double  | x: 0.5 y: 0.5       |                            |
+-----------------------------------------------+---------+---------------------+----------------------------+
| Output Layer / ``Output_Layer``               | Choice  | Layer 0             | |                          |
|                                               |         |                     | | **Merged**               |
|                                               |         |                     | | **Layer 0**              |
|                                               |         |                     | | **Layer -1**             |
|                                               |         |                     | | **Layer -2**             |
|                                               |         |                     | | **Layer -3**             |
|                                               |         |                     | | **Layer -4**             |
|                                               |         |                     | | **Layer -5**             |
|                                               |         |                     | | **Layer -6**             |
|                                               |         |                     | | **Layer -7**             |
|                                               |         |                     | | **Layer -8**             |
|                                               |         |                     | | **Layer -9**             |
+-----------------------------------------------+---------+---------------------+----------------------------+
| Resize Mode / ``Resize_Mode``                 | Choice  | Dynamic             | |                          |
|                                               |         |                     | | **Fixed (Inplace)**      |
|                                               |         |                     | | **Dynamic**              |
|                                               |         |                     | | **Downsample 1/2**       |
|                                               |         |                     | | **Downsample 1/4**       |
|                                               |         |                     | | **Downsample 1/8**       |
|                                               |         |                     | | **Downsample 1/16**      |
+-----------------------------------------------+---------+---------------------+----------------------------+
| Ignore Alpha / ``Ignore_Alpha``               | Boolean | Off                 |                            |
+-----------------------------------------------+---------+---------------------+----------------------------+
| Preview/Draft Mode / ``PreviewDraft_Mode``    | Boolean | Off                 |                            |
+-----------------------------------------------+---------+---------------------+----------------------------+
| Global Random Seed / ``Global_Random_Seed``   | Integer | 0                   |                            |
+-----------------------------------------------+---------+---------------------+----------------------------+
| Animate Random Seed / ``Animate_Random_Seed`` | Boolean | Off                 |                            |
+-----------------------------------------------+---------+---------------------+----------------------------+
| Log Verbosity / ``Log_Verbosity``             | Choice  | Off                 | |                          |
|                                               |         |                     | | **Off**                  |
|                                               |         |                     | | **Level 1**              |
|                                               |         |                     | | **Level 2**              |
|                                               |         |                     | | **Level 3**              |
+-----------------------------------------------+---------+---------------------+----------------------------+
