.. _eu.gmic.MorphologicalFilter:

G’MIC Morphological Filter node
===============================

*This documentation is for version 1.0 of G’MIC Morphological Filter (eu.gmic.MorphologicalFilter).*

Description
-----------

Parameter Size is inactive for Custom kernel.

Author: David Tschumperle. Latest Update: 2016/22/06.

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

+-------------------------------------------------+---------+---------------------+----------------------------------------+
| Parameter / script name                         | Type    | Default             | Function                               |
+=================================================+=========+=====================+========================================+
| Action / ``Action``                             | Choice  | Erosion             | |                                      |
|                                                 |         |                     | | **Erosion**                          |
|                                                 |         |                     | | **Dilation**                         |
|                                                 |         |                     | | **Opening**                          |
|                                                 |         |                     | | **Closing**                          |
|                                                 |         |                     | | **Original - Erosion**               |
|                                                 |         |                     | | **Dilation - Original**              |
|                                                 |         |                     | | **Original - Opening**               |
|                                                 |         |                     | | **Closing - Original**               |
|                                                 |         |                     | | **Original - (Opening + Closing)/2** |
|                                                 |         |                     | | **Closing - Opening**                |
+-------------------------------------------------+---------+---------------------+----------------------------------------+
| Kernel / ``Kernel``                             | Choice  | Square              | |                                      |
|                                                 |         |                     | | **Square**                           |
|                                                 |         |                     | | **Octagonal**                        |
|                                                 |         |                     | | **Circular**                         |
|                                                 |         |                     | | **Custom**                           |
+-------------------------------------------------+---------+---------------------+----------------------------------------+
| Size / ``Size``                                 | Integer | 5                   |                                        |
+-------------------------------------------------+---------+---------------------+----------------------------------------+
| Custom Kernel / ``Custom_Kernel``               | String  | 1,0,1; 0,1,0; 1,0,1 |                                        |
+-------------------------------------------------+---------+---------------------+----------------------------------------+
| Negative / ``Negative``                         | Boolean | Off                 |                                        |
+-------------------------------------------------+---------+---------------------+----------------------------------------+
| Process Transparency / ``Process_Transparency`` | Boolean | Off                 |                                        |
+-------------------------------------------------+---------+---------------------+----------------------------------------+
| Channel(s) / ``Channels``                       | Choice  | All                 | |                                      |
|                                                 |         |                     | | **All**                              |
|                                                 |         |                     | | **RGBA [All]**                       |
|                                                 |         |                     | | **RGB [All]**                        |
|                                                 |         |                     | | **RGB [Red]**                        |
|                                                 |         |                     | | **RGB [Green]**                      |
|                                                 |         |                     | | **RGB [Blue]**                       |
|                                                 |         |                     | | **RGBA [Alpha]**                     |
|                                                 |         |                     | | **Linear RGB [All]**                 |
|                                                 |         |                     | | **Linear RGB [Red]**                 |
|                                                 |         |                     | | **Linear RGB [Green]**               |
|                                                 |         |                     | | **Linear RGB [Blue]**                |
|                                                 |         |                     | | **YCbCr [Luminance]**                |
|                                                 |         |                     | | **YCbCr [Blue-Red Chrominances]**    |
|                                                 |         |                     | | **YCbCr [Blue Chrominance]**         |
|                                                 |         |                     | | **YCbCr [Red Chrominance]**          |
|                                                 |         |                     | | **YCbCr [Green Chrominance]**        |
|                                                 |         |                     | | **Lab [Lightness]**                  |
|                                                 |         |                     | | **Lab [ab-Chrominances]**            |
|                                                 |         |                     | | **Lab [a-Chrominance]**              |
|                                                 |         |                     | | **Lab [b-Chrominance]**              |
|                                                 |         |                     | | **Lch [ch-Chrominances]**            |
|                                                 |         |                     | | **Lch [c-Chrominance]**              |
|                                                 |         |                     | | **Lch [h-Chrominance]**              |
|                                                 |         |                     | | **HSV [Hue]**                        |
|                                                 |         |                     | | **HSV [Saturation]**                 |
|                                                 |         |                     | | **HSV [Value]**                      |
|                                                 |         |                     | | **HSI [Intensity]**                  |
|                                                 |         |                     | | **HSL [Lightness]**                  |
|                                                 |         |                     | | **CMYK [Cyan]**                      |
|                                                 |         |                     | | **CMYK [Magenta]**                   |
|                                                 |         |                     | | **CMYK [Yellow]**                    |
|                                                 |         |                     | | **CMYK [Key]**                       |
|                                                 |         |                     | | **YIQ [Luma]**                       |
|                                                 |         |                     | | **YIQ [Chromas]**                    |
|                                                 |         |                     | | **RYB [All]**                        |
|                                                 |         |                     | | **RYB [Red]**                        |
|                                                 |         |                     | | **RYB [Yellow]**                     |
|                                                 |         |                     | | **RYB [Blue]**                       |
+-------------------------------------------------+---------+---------------------+----------------------------------------+
| Value Action / ``Value_Action``                 | Choice  | None                | |                                      |
|                                                 |         |                     | | **None**                             |
|                                                 |         |                     | | **Cut**                              |
|                                                 |         |                     | | **Stretch**                          |
+-------------------------------------------------+---------+---------------------+----------------------------------------+
| Preview Type / ``Preview_Type``                 | Choice  | Full                | |                                      |
|                                                 |         |                     | | **Full**                             |
|                                                 |         |                     | | **Forward Horizontal**               |
|                                                 |         |                     | | **Forward Vertical**                 |
|                                                 |         |                     | | **Backward Horizontal**              |
|                                                 |         |                     | | **Backward Vertical**                |
|                                                 |         |                     | | **Duplicate Top**                    |
|                                                 |         |                     | | **Duplicate Left**                   |
|                                                 |         |                     | | **Duplicate Bottom**                 |
|                                                 |         |                     | | **Duplicate Right**                  |
|                                                 |         |                     | | **Duplicate Horizontal**             |
|                                                 |         |                     | | **Duplicate Vertical**               |
|                                                 |         |                     | | **Checkered**                        |
|                                                 |         |                     | | **Checkered Inverse**                |
+-------------------------------------------------+---------+---------------------+----------------------------------------+
| Preview Split / ``Preview_Split``               | Double  | x: 0.5 y: 0.5       |                                        |
+-------------------------------------------------+---------+---------------------+----------------------------------------+
| Output Layer / ``Output_Layer``                 | Choice  | Layer 0             | |                                      |
|                                                 |         |                     | | **Merged**                           |
|                                                 |         |                     | | **Layer 0**                          |
|                                                 |         |                     | | **Layer -1**                         |
|                                                 |         |                     | | **Layer -2**                         |
|                                                 |         |                     | | **Layer -3**                         |
|                                                 |         |                     | | **Layer -4**                         |
|                                                 |         |                     | | **Layer -5**                         |
|                                                 |         |                     | | **Layer -6**                         |
|                                                 |         |                     | | **Layer -7**                         |
|                                                 |         |                     | | **Layer -8**                         |
|                                                 |         |                     | | **Layer -9**                         |
+-------------------------------------------------+---------+---------------------+----------------------------------------+
| Resize Mode / ``Resize_Mode``                   | Choice  | Dynamic             | |                                      |
|                                                 |         |                     | | **Fixed (Inplace)**                  |
|                                                 |         |                     | | **Dynamic**                          |
|                                                 |         |                     | | **Downsample 1/2**                   |
|                                                 |         |                     | | **Downsample 1/4**                   |
|                                                 |         |                     | | **Downsample 1/8**                   |
|                                                 |         |                     | | **Downsample 1/16**                  |
+-------------------------------------------------+---------+---------------------+----------------------------------------+
| Ignore Alpha / ``Ignore_Alpha``                 | Boolean | Off                 |                                        |
+-------------------------------------------------+---------+---------------------+----------------------------------------+
| Preview/Draft Mode / ``PreviewDraft_Mode``      | Boolean | Off                 |                                        |
+-------------------------------------------------+---------+---------------------+----------------------------------------+
| Global Random Seed / ``Global_Random_Seed``     | Integer | 0                   |                                        |
+-------------------------------------------------+---------+---------------------+----------------------------------------+
| Animate Random Seed / ``Animate_Random_Seed``   | Boolean | Off                 |                                        |
+-------------------------------------------------+---------+---------------------+----------------------------------------+
| Log Verbosity / ``Log_Verbosity``               | Choice  | Off                 | |                                      |
|                                                 |         |                     | | **Off**                              |
|                                                 |         |                     | | **Level 1**                          |
|                                                 |         |                     | | **Level 2**                          |
|                                                 |         |                     | | **Level 3**                          |
+-------------------------------------------------+---------+---------------------+----------------------------------------+
