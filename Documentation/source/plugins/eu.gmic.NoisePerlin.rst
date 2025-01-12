.. _eu.gmic.NoisePerlin:

G’MIC Noise Perlin node
=======================

*This documentation is for version 1.0 of G’MIC Noise Perlin (eu.gmic.NoisePerlin).*

Description
-----------

1st scale:

2nd scale:

3rd scale:

4th scale:

Author: David Tschumperle. Latest Update: 2019/01/24.

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

+-----------------------------------------------+---------+---------------+-------------------------------------+
| Parameter / script name                       | Type    | Default       | Function                            |
+===============================================+=========+===============+=====================================+
| Random Seed / ``Random_Seed``                 | Integer | 0             |                                     |
+-----------------------------------------------+---------+---------------+-------------------------------------+
| Amplitude / ``Amplitude``                     | Double  | 100           |                                     |
+-----------------------------------------------+---------+---------------+-------------------------------------+
| Scale (%) / ``Scale_``                        | Double  | 8             |                                     |
+-----------------------------------------------+---------+---------------+-------------------------------------+
| X/Y-Ratio / ``XYRatio``                       | Double  | 0             |                                     |
+-----------------------------------------------+---------+---------------+-------------------------------------+
| Amplitude_2 / ``Amplitude_2``                 | Double  | 0             |                                     |
+-----------------------------------------------+---------+---------------+-------------------------------------+
| Scale (%)_2 / ``Scale__2``                    | Double  | 4             |                                     |
+-----------------------------------------------+---------+---------------+-------------------------------------+
| X/Y-Ratio_2 / ``XYRatio_2``                   | Double  | 0             |                                     |
+-----------------------------------------------+---------+---------------+-------------------------------------+
| Amplitude_3 / ``Amplitude_3``                 | Double  | 0             |                                     |
+-----------------------------------------------+---------+---------------+-------------------------------------+
| Scale (%)_3 / ``Scale__3``                    | Double  | 2             |                                     |
+-----------------------------------------------+---------+---------------+-------------------------------------+
| X/Y-Ratio_3 / ``XYRatio_3``                   | Double  | 0             |                                     |
+-----------------------------------------------+---------+---------------+-------------------------------------+
| Amplitude_4 / ``Amplitude_4``                 | Double  | 0             |                                     |
+-----------------------------------------------+---------+---------------+-------------------------------------+
| Scale (%)_4 / ``Scale__4``                    | Double  | 1             |                                     |
+-----------------------------------------------+---------+---------------+-------------------------------------+
| X/Y-Ratio_4 / ``XYRatio_4``                   | Double  | 0             |                                     |
+-----------------------------------------------+---------+---------------+-------------------------------------+
| Channel(s) / ``Channels``                     | Choice  | RGB [All]     | |                                   |
|                                               |         |               | | **All**                           |
|                                               |         |               | | **RGBA [All]**                    |
|                                               |         |               | | **RGB [All]**                     |
|                                               |         |               | | **RGB [Red]**                     |
|                                               |         |               | | **RGB [Green]**                   |
|                                               |         |               | | **RGB [Blue]**                    |
|                                               |         |               | | **RGBA [Alpha]**                  |
|                                               |         |               | | **Linear RGB [All]**              |
|                                               |         |               | | **Linear RGB [Red]**              |
|                                               |         |               | | **Linear RGB [Green]**            |
|                                               |         |               | | **Linear RGB [Blue]**             |
|                                               |         |               | | **YCbCr [Luminance]**             |
|                                               |         |               | | **YCbCr [Blue-Red Chrominances]** |
|                                               |         |               | | **YCbCr [Blue Chrominance]**      |
|                                               |         |               | | **YCbCr [Red Chrominance]**       |
|                                               |         |               | | **YCbCr [Green chrominance]**     |
|                                               |         |               | | **Lab [Lightness]**               |
|                                               |         |               | | **Lab [ab-Chrominances]**         |
|                                               |         |               | | **Lab [a-Chrominance]**           |
|                                               |         |               | | **Lab [b-Chrominance]**           |
|                                               |         |               | | **Lch [ch-Chrominances]**         |
|                                               |         |               | | **Lch [c-Chrominance]**           |
|                                               |         |               | | **Lch [h-Chrominance]**           |
|                                               |         |               | | **HSV [Hue]**                     |
|                                               |         |               | | **HSV [Saturation]**              |
|                                               |         |               | | **HSV [Value]**                   |
|                                               |         |               | | **HSI [Intensity]**               |
|                                               |         |               | | **HSL [Lightness]**               |
|                                               |         |               | | **CMYK [Cyan]**                   |
|                                               |         |               | | **CMYK [Magenta]**                |
|                                               |         |               | | **CMYK [Yellow]**                 |
|                                               |         |               | | **CMYK [Key]**                    |
|                                               |         |               | | **YIQ [Luma]**                    |
|                                               |         |               | | **YIQ [Chromas]**                 |
+-----------------------------------------------+---------+---------------+-------------------------------------+
| Preview Type / ``Preview_Type``               | Choice  | Full          | |                                   |
|                                               |         |               | | **Full**                          |
|                                               |         |               | | **Forward Horizontal**            |
|                                               |         |               | | **Forward Vertical**              |
|                                               |         |               | | **Backward Horizontal**           |
|                                               |         |               | | **Backward Vertical**             |
|                                               |         |               | | **Duplicate Top**                 |
|                                               |         |               | | **Duplicate Left**                |
|                                               |         |               | | **Duplicate Bottom**              |
|                                               |         |               | | **Duplicate Right**               |
|                                               |         |               | | **Duplicate Horizontal**          |
|                                               |         |               | | **Duplicate Vertical**            |
|                                               |         |               | | **Checkered**                     |
|                                               |         |               | | **Checkered Inverse**             |
+-----------------------------------------------+---------+---------------+-------------------------------------+
| Preview Split / ``Preview_Split``             | Double  | x: 0.5 y: 0.5 |                                     |
+-----------------------------------------------+---------+---------------+-------------------------------------+
| Output Layer / ``Output_Layer``               | Choice  | Layer 0       | |                                   |
|                                               |         |               | | **Merged**                        |
|                                               |         |               | | **Layer 0**                       |
|                                               |         |               | | **Layer -1**                      |
|                                               |         |               | | **Layer -2**                      |
|                                               |         |               | | **Layer -3**                      |
|                                               |         |               | | **Layer -4**                      |
|                                               |         |               | | **Layer -5**                      |
|                                               |         |               | | **Layer -6**                      |
|                                               |         |               | | **Layer -7**                      |
|                                               |         |               | | **Layer -8**                      |
|                                               |         |               | | **Layer -9**                      |
+-----------------------------------------------+---------+---------------+-------------------------------------+
| Resize Mode / ``Resize_Mode``                 | Choice  | Dynamic       | |                                   |
|                                               |         |               | | **Fixed (Inplace)**               |
|                                               |         |               | | **Dynamic**                       |
|                                               |         |               | | **Downsample 1/2**                |
|                                               |         |               | | **Downsample 1/4**                |
|                                               |         |               | | **Downsample 1/8**                |
|                                               |         |               | | **Downsample 1/16**               |
+-----------------------------------------------+---------+---------------+-------------------------------------+
| Ignore Alpha / ``Ignore_Alpha``               | Boolean | Off           |                                     |
+-----------------------------------------------+---------+---------------+-------------------------------------+
| Preview/Draft Mode / ``PreviewDraft_Mode``    | Boolean | Off           |                                     |
+-----------------------------------------------+---------+---------------+-------------------------------------+
| Global Random Seed / ``Global_Random_Seed``   | Integer | 0             |                                     |
+-----------------------------------------------+---------+---------------+-------------------------------------+
| Animate Random Seed / ``Animate_Random_Seed`` | Boolean | Off           |                                     |
+-----------------------------------------------+---------+---------------+-------------------------------------+
| Log Verbosity / ``Log_Verbosity``             | Choice  | Off           | |                                   |
|                                               |         |               | | **Off**                           |
|                                               |         |               | | **Level 1**                       |
|                                               |         |               | | **Level 2**                       |
|                                               |         |               | | **Level 3**                       |
+-----------------------------------------------+---------+---------------+-------------------------------------+
