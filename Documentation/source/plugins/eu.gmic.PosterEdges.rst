.. _eu.gmic.PosterEdges:

G’MIC Poster Edges node
=======================

*This documentation is for version 1.0 of G’MIC Poster Edges (eu.gmic.PosterEdges).*

Description
-----------

Click here for a detailed description of this filter.: http://www.davidrevoy.com/article147/gmic-new-filter-poster-edges

Authors: David Tschumperle and David Revoy. Latest Update: 2012/30/11.

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

+-------------------------------------------------------------+---------+---------------+----------------------------+
| Parameter / script name                                     | Type    | Default       | Function                   |
+=============================================================+=========+===============+============================+
| Image Smoothness / ``Image_Smoothness``                     | Double  | 20            |                            |
+-------------------------------------------------------------+---------+---------------+----------------------------+
| Edge Threshold / ``Edge_Threshold``                         | Double  | 60            |                            |
+-------------------------------------------------------------+---------+---------------+----------------------------+
| Edge Shade / ``Edge_Shade``                                 | Double  | 5             |                            |
+-------------------------------------------------------------+---------+---------------+----------------------------+
| Edge Thickness / ``Edge_Thickness``                         | Double  | 0             |                            |
+-------------------------------------------------------------+---------+---------------+----------------------------+
| Edge Antialiasing / ``Edge_Antialiasing``                   | Double  | 10            |                            |
+-------------------------------------------------------------+---------+---------------+----------------------------+
| Posterization Level / ``Posterization_Level``               | Integer | 0             |                            |
+-------------------------------------------------------------+---------+---------------+----------------------------+
| Posterization Antialiasing / ``Posterization_Antialiasing`` | Double  | 0             |                            |
+-------------------------------------------------------------+---------+---------------+----------------------------+
| Preview Type / ``Preview_Type``                             | Choice  | Full          | |                          |
|                                                             |         |               | | **Full**                 |
|                                                             |         |               | | **Forward Horizontal**   |
|                                                             |         |               | | **Forward Vertical**     |
|                                                             |         |               | | **Backward Horizontal**  |
|                                                             |         |               | | **Backward Vertical**    |
|                                                             |         |               | | **Duplicate Top**        |
|                                                             |         |               | | **Duplicate Left**       |
|                                                             |         |               | | **Duplicate Bottom**     |
|                                                             |         |               | | **Duplicate Right**      |
|                                                             |         |               | | **Duplicate Horizontal** |
|                                                             |         |               | | **Duplicate Vertical**   |
|                                                             |         |               | | **Checkered**            |
|                                                             |         |               | | **Checkered Inverse**    |
+-------------------------------------------------------------+---------+---------------+----------------------------+
| Preview Split / ``Preview_Split``                           | Double  | x: 0.5 y: 0.5 |                            |
+-------------------------------------------------------------+---------+---------------+----------------------------+
| Output Layer / ``Output_Layer``                             | Choice  | Layer 0       | |                          |
|                                                             |         |               | | **Merged**               |
|                                                             |         |               | | **Layer 0**              |
|                                                             |         |               | | **Layer -1**             |
|                                                             |         |               | | **Layer -2**             |
|                                                             |         |               | | **Layer -3**             |
|                                                             |         |               | | **Layer -4**             |
|                                                             |         |               | | **Layer -5**             |
|                                                             |         |               | | **Layer -6**             |
|                                                             |         |               | | **Layer -7**             |
|                                                             |         |               | | **Layer -8**             |
|                                                             |         |               | | **Layer -9**             |
+-------------------------------------------------------------+---------+---------------+----------------------------+
| Resize Mode / ``Resize_Mode``                               | Choice  | Dynamic       | |                          |
|                                                             |         |               | | **Fixed (Inplace)**      |
|                                                             |         |               | | **Dynamic**              |
|                                                             |         |               | | **Downsample 1/2**       |
|                                                             |         |               | | **Downsample 1/4**       |
|                                                             |         |               | | **Downsample 1/8**       |
|                                                             |         |               | | **Downsample 1/16**      |
+-------------------------------------------------------------+---------+---------------+----------------------------+
| Ignore Alpha / ``Ignore_Alpha``                             | Boolean | Off           |                            |
+-------------------------------------------------------------+---------+---------------+----------------------------+
| Preview/Draft Mode / ``PreviewDraft_Mode``                  | Boolean | Off           |                            |
+-------------------------------------------------------------+---------+---------------+----------------------------+
| Global Random Seed / ``Global_Random_Seed``                 | Integer | 0             |                            |
+-------------------------------------------------------------+---------+---------------+----------------------------+
| Animate Random Seed / ``Animate_Random_Seed``               | Boolean | Off           |                            |
+-------------------------------------------------------------+---------+---------------+----------------------------+
| Log Verbosity / ``Log_Verbosity``                           | Choice  | Off           | |                          |
|                                                             |         |               | | **Off**                  |
|                                                             |         |               | | **Level 1**              |
|                                                             |         |               | | **Level 2**              |
|                                                             |         |               | | **Level 3**              |
+-------------------------------------------------------------+---------+---------------+----------------------------+
