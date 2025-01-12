.. _eu.gmic.InkWash:

G’MIC Ink Wash node
===================

*This documentation is for version 1.0 of G’MIC Ink Wash (eu.gmic.InkWash).*

Description
-----------

Ink wash controls

Check if you wish visual control on this step

UNcheck to reactivate the other controls

To activate the sliders below chose ’Manual Controls

Author: PhotoComiX. Latest Update: 2011/05/04.

Forum thread about the filter discussion": : http://gimpchat.com/viewtopic.php?f=10&t=914

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

+--------------------------------------------------------------+---------+---------+---------------------------------+
| Parameter / script name                                      | Type    | Default | Function                        |
+==============================================================+=========+=========+=================================+
| Size / ``Size``                                              | Double  | 0.14    |                                 |
+--------------------------------------------------------------+---------+---------+---------------------------------+
| Amplitude / ``Amplitude``                                    | Double  | 23      |                                 |
+--------------------------------------------------------------+---------+---------+---------------------------------+
| Skip All Other Steps / ``Skip_All_Other_Steps``              | Boolean | Off     |                                 |
+--------------------------------------------------------------+---------+---------+---------------------------------+
| Smoother Sharpness / ``Smoother_Sharpness``                  | Double  | 0.5     |                                 |
+--------------------------------------------------------------+---------+---------+---------------------------------+
| Smoother Edge Protection / ``Smoother_Edge_Protection``      | Double  | 0.54    |                                 |
+--------------------------------------------------------------+---------+---------+---------------------------------+
| Smoother Softness / ``Smoother_Softness``                    | Double  | 2.25    |                                 |
+--------------------------------------------------------------+---------+---------+---------------------------------+
| Stretch Contrast / ``Stretch_Contrast``                      | Choice  | None    | |                               |
|                                                              |         |         | | **None**                      |
|                                                              |         |         | | **Automatic**                 |
|                                                              |         |         | | **Automatic & Contrast Mask** |
|                                                              |         |         | | **Manual Controls**           |
+--------------------------------------------------------------+---------+---------+---------------------------------+
| LN Amplitude / ``LN_Amplitude``                              | Double  | 2       |                                 |
+--------------------------------------------------------------+---------+---------+---------------------------------+
| LN Size / ``LN_Size``                                        | Double  | 6       |                                 |
+--------------------------------------------------------------+---------+---------+---------------------------------+
| LN Neightborhood-Smoothness / ``LN_NeightborhoodSmoothness`` | Double  | 5       |                                 |
+--------------------------------------------------------------+---------+---------+---------------------------------+
| LN Average-Smoothness / ``LN_AverageSmoothness``             | Double  | 20      |                                 |
+--------------------------------------------------------------+---------+---------+---------------------------------+
| Output Layer / ``Output_Layer``                              | Choice  | Layer 0 | |                               |
|                                                              |         |         | | **Merged**                    |
|                                                              |         |         | | **Layer 0**                   |
|                                                              |         |         | | **Layer -1**                  |
|                                                              |         |         | | **Layer -2**                  |
|                                                              |         |         | | **Layer -3**                  |
|                                                              |         |         | | **Layer -4**                  |
|                                                              |         |         | | **Layer -5**                  |
|                                                              |         |         | | **Layer -6**                  |
|                                                              |         |         | | **Layer -7**                  |
|                                                              |         |         | | **Layer -8**                  |
|                                                              |         |         | | **Layer -9**                  |
+--------------------------------------------------------------+---------+---------+---------------------------------+
| Resize Mode / ``Resize_Mode``                                | Choice  | Dynamic | |                               |
|                                                              |         |         | | **Fixed (Inplace)**           |
|                                                              |         |         | | **Dynamic**                   |
|                                                              |         |         | | **Downsample 1/2**            |
|                                                              |         |         | | **Downsample 1/4**            |
|                                                              |         |         | | **Downsample 1/8**            |
|                                                              |         |         | | **Downsample 1/16**           |
+--------------------------------------------------------------+---------+---------+---------------------------------+
| Ignore Alpha / ``Ignore_Alpha``                              | Boolean | Off     |                                 |
+--------------------------------------------------------------+---------+---------+---------------------------------+
| Global Random Seed / ``Global_Random_Seed``                  | Integer | 0       |                                 |
+--------------------------------------------------------------+---------+---------+---------------------------------+
| Animate Random Seed / ``Animate_Random_Seed``                | Boolean | Off     |                                 |
+--------------------------------------------------------------+---------+---------+---------------------------------+
| Log Verbosity / ``Log_Verbosity``                            | Choice  | Off     | |                               |
|                                                              |         |         | | **Off**                       |
|                                                              |         |         | | **Level 1**                   |
|                                                              |         |         | | **Level 2**                   |
|                                                              |         |         | | **Level 3**                   |
+--------------------------------------------------------------+---------+---------+---------------------------------+
