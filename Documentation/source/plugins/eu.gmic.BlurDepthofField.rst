.. _eu.gmic.BlurDepthofField:

G’MIC Blur Depth-of-Field node
==============================

*This documentation is for version 1.0 of G’MIC Blur Depth-of-Field (eu.gmic.BlurDepthofField).*

Description
-----------

Gaussian depth-of-field:

User-defined depth-of-field:

You can specify your own depth-of-field image, as a bottom layer image whose luminance encodes the depth for each pixel. Don’t forget to modify the Input layers combo-box to make this layer active for the filter.

Author: David Tschumperle. Latest Update: 2014/25/02.

Wrapper for the G’MIC framework (http://gmic.eu) written by Tobias Fleischer (http://www.reduxfx.com) and Frederic Devernay.

Inputs
------

+----------+-------------+----------+
| Input    | Description | Optional |
+==========+=============+==========+
| Source   |             | No       |
+----------+-------------+----------+
| Layer -1 |             | Yes      |
+----------+-------------+----------+
| Layer -2 |             | Yes      |
+----------+-------------+----------+
| Layer -3 |             | Yes      |
+----------+-------------+----------+

Controls
--------

.. tabularcolumns:: |>{\raggedright}p{0.2\columnwidth}|>{\raggedright}p{0.06\columnwidth}|>{\raggedright}p{0.07\columnwidth}|p{0.63\columnwidth}|

.. cssclass:: longtable

+-----------------------------------------------+---------+---------------+-----------------------------------+
| Parameter / script name                       | Type    | Default       | Function                          |
+===============================================+=========+===============+===================================+
| Blur Amplitude / ``Blur_Amplitude``           | Double  | 3             |                                   |
+-----------------------------------------------+---------+---------------+-----------------------------------+
| Blur Precision / ``Blur_Precision``           | Integer | 16            |                                   |
+-----------------------------------------------+---------+---------------+-----------------------------------+
| Depth-of-Field Type / ``DepthofField_Type``   | Choice  | Gaussian      | |                                 |
|                                               |         |               | | **Gaussian**                    |
|                                               |         |               | | **User-Defined (Bottom Layer)** |
+-----------------------------------------------+---------+---------------+-----------------------------------+
| Invert Blur / ``Invert_Blur``                 | Boolean | Off           |                                   |
+-----------------------------------------------+---------+---------------+-----------------------------------+
| Center (%) / ``Center_``                      | Double  | x: 0.5 y: 0.5 |                                   |
+-----------------------------------------------+---------+---------------+-----------------------------------+
| First Radius / ``First_Radius``               | Double  | 30            |                                   |
+-----------------------------------------------+---------+---------------+-----------------------------------+
| Second Radius / ``Second_Radius``             | Double  | 30            |                                   |
+-----------------------------------------------+---------+---------------+-----------------------------------+
| Angle / ``Angle``                             | Double  | 0             |                                   |
+-----------------------------------------------+---------+---------------+-----------------------------------+
| Sharpness / ``Sharpness``                     | Double  | 1             |                                   |
+-----------------------------------------------+---------+---------------+-----------------------------------+
| Preview Guides / ``Preview_Guides``           | Boolean | On            |                                   |
+-----------------------------------------------+---------+---------------+-----------------------------------+
| Gamma / ``Gamma``                             | Double  | 0             |                                   |
+-----------------------------------------------+---------+---------------+-----------------------------------+
| Output Layer / ``Output_Layer``               | Choice  | Layer 0       | |                                 |
|                                               |         |               | | **Merged**                      |
|                                               |         |               | | **Layer 0**                     |
|                                               |         |               | | **Layer -1**                    |
|                                               |         |               | | **Layer -2**                    |
|                                               |         |               | | **Layer -3**                    |
|                                               |         |               | | **Layer -4**                    |
|                                               |         |               | | **Layer -5**                    |
|                                               |         |               | | **Layer -6**                    |
|                                               |         |               | | **Layer -7**                    |
|                                               |         |               | | **Layer -8**                    |
|                                               |         |               | | **Layer -9**                    |
+-----------------------------------------------+---------+---------------+-----------------------------------+
| Resize Mode / ``Resize_Mode``                 | Choice  | Dynamic       | |                                 |
|                                               |         |               | | **Fixed (Inplace)**             |
|                                               |         |               | | **Dynamic**                     |
|                                               |         |               | | **Downsample 1/2**              |
|                                               |         |               | | **Downsample 1/4**              |
|                                               |         |               | | **Downsample 1/8**              |
|                                               |         |               | | **Downsample 1/16**             |
+-----------------------------------------------+---------+---------------+-----------------------------------+
| Ignore Alpha / ``Ignore_Alpha``               | Boolean | Off           |                                   |
+-----------------------------------------------+---------+---------------+-----------------------------------+
| Preview/Draft Mode / ``PreviewDraft_Mode``    | Boolean | Off           |                                   |
+-----------------------------------------------+---------+---------------+-----------------------------------+
| Global Random Seed / ``Global_Random_Seed``   | Integer | 0             |                                   |
+-----------------------------------------------+---------+---------------+-----------------------------------+
| Animate Random Seed / ``Animate_Random_Seed`` | Boolean | Off           |                                   |
+-----------------------------------------------+---------+---------------+-----------------------------------+
| Log Verbosity / ``Log_Verbosity``             | Choice  | Off           | |                                 |
|                                               |         |               | | **Off**                         |
|                                               |         |               | | **Level 1**                     |
|                                               |         |               | | **Level 2**                     |
|                                               |         |               | | **Level 3**                     |
+-----------------------------------------------+---------+---------------+-----------------------------------+
