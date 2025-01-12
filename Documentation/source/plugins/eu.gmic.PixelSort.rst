.. _eu.gmic.PixelSort:

G’MIC Pixel Sort node
=====================

*This documentation is for version 1.0 of G’MIC Pixel Sort (eu.gmic.PixelSort).*

Description
-----------

Sorting parameters:

Masking parameters:

Note: This filter implements one version of the algorithm described here :

http://satyarth.me/articles/pixel-sorting/

Author: David Tschumperle. Latest Update: 2016/05/09.

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

+--------------------------------------------------------+---------+------------+--------------------------+
| Parameter / script name                                | Type    | Default    | Function                 |
+========================================================+=========+============+==========================+
| Order / ``Order``                                      | Choice  | Increasing | |                        |
|                                                        |         |            | | **Decreasing**         |
|                                                        |         |            | | **Increasing**         |
+--------------------------------------------------------+---------+------------+--------------------------+
| Axis / ``Axis``                                        | Choice  | X-axis     | |                        |
|                                                        |         |            | | **X-axis**             |
|                                                        |         |            | | **Y-axis**             |
|                                                        |         |            | | **X-axis Then Y-axis** |
|                                                        |         |            | | **Y-axis Then X-axis** |
+--------------------------------------------------------+---------+------------+--------------------------+
| Sorting Criterion / ``Sorting_Criterion``              | Choice  | Red        | |                        |
|                                                        |         |            | | **Red**                |
|                                                        |         |            | | **Green**              |
|                                                        |         |            | | **Blue**               |
|                                                        |         |            | | **Intensity**          |
|                                                        |         |            | | **Luminance**          |
|                                                        |         |            | | **Lightness**          |
|                                                        |         |            | | **Hue**                |
|                                                        |         |            | | **Saturation**         |
|                                                        |         |            | | **Minimum**            |
|                                                        |         |            | | **Maximum**            |
|                                                        |         |            | | **Random**             |
+--------------------------------------------------------+---------+------------+--------------------------+
| Mask By / ``Mask_By``                                  | Choice  | Criterion  | |                        |
|                                                        |         |            | | **Bottom Layer**       |
|                                                        |         |            | | **Criterion**          |
|                                                        |         |            | | **Contours**           |
|                                                        |         |            | | **Random**             |
+--------------------------------------------------------+---------+------------+--------------------------+
| Lower Mask Threshold (%) / ``Lower_Mask_Threshold_``   | Double  | 0          |                          |
+--------------------------------------------------------+---------+------------+--------------------------+
| Higher Mask Threshold (%) / ``Higher_Mask_Threshold_`` | Double  | 100        |                          |
+--------------------------------------------------------+---------+------------+--------------------------+
| Mask Smoothness (%) / ``Mask_Smoothness_``             | Double  | 0          |                          |
+--------------------------------------------------------+---------+------------+--------------------------+
| Invert Mask / ``Invert_Mask``                          | Boolean | Off        |                          |
+--------------------------------------------------------+---------+------------+--------------------------+
| Preview Mask / ``Preview_Mask``                        | Boolean | Off        |                          |
+--------------------------------------------------------+---------+------------+--------------------------+
| Output Layer / ``Output_Layer``                        | Choice  | Layer 0    | |                        |
|                                                        |         |            | | **Merged**             |
|                                                        |         |            | | **Layer 0**            |
|                                                        |         |            | | **Layer -1**           |
|                                                        |         |            | | **Layer -2**           |
|                                                        |         |            | | **Layer -3**           |
|                                                        |         |            | | **Layer -4**           |
|                                                        |         |            | | **Layer -5**           |
|                                                        |         |            | | **Layer -6**           |
|                                                        |         |            | | **Layer -7**           |
|                                                        |         |            | | **Layer -8**           |
|                                                        |         |            | | **Layer -9**           |
+--------------------------------------------------------+---------+------------+--------------------------+
| Resize Mode / ``Resize_Mode``                          | Choice  | Dynamic    | |                        |
|                                                        |         |            | | **Fixed (Inplace)**    |
|                                                        |         |            | | **Dynamic**            |
|                                                        |         |            | | **Downsample 1/2**     |
|                                                        |         |            | | **Downsample 1/4**     |
|                                                        |         |            | | **Downsample 1/8**     |
|                                                        |         |            | | **Downsample 1/16**    |
+--------------------------------------------------------+---------+------------+--------------------------+
| Ignore Alpha / ``Ignore_Alpha``                        | Boolean | Off        |                          |
+--------------------------------------------------------+---------+------------+--------------------------+
| Preview/Draft Mode / ``PreviewDraft_Mode``             | Boolean | Off        |                          |
+--------------------------------------------------------+---------+------------+--------------------------+
| Global Random Seed / ``Global_Random_Seed``            | Integer | 0          |                          |
+--------------------------------------------------------+---------+------------+--------------------------+
| Animate Random Seed / ``Animate_Random_Seed``          | Boolean | Off        |                          |
+--------------------------------------------------------+---------+------------+--------------------------+
| Log Verbosity / ``Log_Verbosity``                      | Choice  | Off        | |                        |
|                                                        |         |            | | **Off**                |
|                                                        |         |            | | **Level 1**            |
|                                                        |         |            | | **Level 2**            |
|                                                        |         |            | | **Level 3**            |
+--------------------------------------------------------+---------+------------+--------------------------+
