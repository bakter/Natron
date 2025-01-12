.. _eu.gmic.BlackWhite:

G’MIC Black & White node
========================

*This documentation is for version 1.0 of G’MIC Black & White (eu.gmic.BlackWhite).*

Description
-----------

Author: David Tschumperle. Latest Update: 2013/20/02.

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

+--------------------------------------------------+---------+---------------+----------------------------+
| Parameter / script name                          | Type    | Default       | Function                   |
+==================================================+=========+===============+============================+
| Red Level / ``Red_Level``                        | Double  | 0.299         |                            |
+--------------------------------------------------+---------+---------------+----------------------------+
| Red Smoothness / ``Red_Smoothness``              | Double  | 0             |                            |
+--------------------------------------------------+---------+---------------+----------------------------+
| Green Level / ``Green_Level``                    | Double  | 0.587         |                            |
+--------------------------------------------------+---------+---------------+----------------------------+
| Green Smoothness / ``Green_Smoothness``          | Double  | 0             |                            |
+--------------------------------------------------+---------+---------------+----------------------------+
| Blue Level / ``Blue_Level``                      | Double  | 0.114         |                            |
+--------------------------------------------------+---------+---------------+----------------------------+
| Blue Smoothness / ``Blue_Smoothness``            | Double  | 0             |                            |
+--------------------------------------------------+---------+---------------+----------------------------+
| Brightness (%) / ``Brightness_``                 | Double  | 0             |                            |
+--------------------------------------------------+---------+---------------+----------------------------+
| Contrast (%) / ``Contrast_``                     | Double  | 0             |                            |
+--------------------------------------------------+---------+---------------+----------------------------+
| Gamma (%) / ``Gamma_``                           | Double  | 0             |                            |
+--------------------------------------------------+---------+---------------+----------------------------+
| Hue (%) / ``Hue_``                               | Double  | 0             |                            |
+--------------------------------------------------+---------+---------------+----------------------------+
| Saturation (%) / ``Saturation_``                 | Double  | 0             |                            |
+--------------------------------------------------+---------+---------------+----------------------------+
| Grain (Shadows) / ``Grain_Shadows``              | Double  | 0             |                            |
+--------------------------------------------------+---------+---------------+----------------------------+
| Grain (Midtones) / ``Grain_Midtones``            | Double  | 0             |                            |
+--------------------------------------------------+---------+---------------+----------------------------+
| Grain (Highlights) / ``Grain_Highlights``        | Double  | 0             |                            |
+--------------------------------------------------+---------+---------------+----------------------------+
| Grain Tone Fading / ``Grain_Tone_Fading``        | Double  | 2             |                            |
+--------------------------------------------------+---------+---------------+----------------------------+
| Grain Scale / ``Grain_Scale``                    | Double  | 0             |                            |
+--------------------------------------------------+---------+---------------+----------------------------+
| Grain Type / ``Grain_Type``                      | Choice  | Gaussian      | |                          |
|                                                  |         |               | | **Gaussian**             |
|                                                  |         |               | | **Uniform**              |
|                                                  |         |               | | **Salt and Pepper**      |
|                                                  |         |               | | **Poisson**              |
+--------------------------------------------------+---------+---------------+----------------------------+
| Local Contrast / ``Local_Contrast``              | Double  | 0             |                            |
+--------------------------------------------------+---------+---------------+----------------------------+
| Radius / ``Radius``                              | Integer | 16            |                            |
+--------------------------------------------------+---------+---------------+----------------------------+
| Contrast Smoothness / ``Contrast_Smoothness``    | Double  | 4             |                            |
+--------------------------------------------------+---------+---------------+----------------------------+
| Pseudo-Gray Dithering / ``PseudoGray_Dithering`` | Integer | 0             |                            |
+--------------------------------------------------+---------+---------------+----------------------------+
| Use Maximum Tones / ``Use_Maximum_Tones``        | Boolean | Off           |                            |
+--------------------------------------------------+---------+---------------+----------------------------+
| Preview Type / ``Preview_Type``                  | Choice  | Full          | |                          |
|                                                  |         |               | | **Full**                 |
|                                                  |         |               | | **Forward Horizontal**   |
|                                                  |         |               | | **Forward Vertical**     |
|                                                  |         |               | | **Backward Horizontal**  |
|                                                  |         |               | | **Backward Vertical**    |
|                                                  |         |               | | **Duplicate Top**        |
|                                                  |         |               | | **Duplicate Left**       |
|                                                  |         |               | | **Duplicate Bottom**     |
|                                                  |         |               | | **Duplicate Right**      |
|                                                  |         |               | | **Duplicate Horizontal** |
|                                                  |         |               | | **Duplicate Vertical**   |
|                                                  |         |               | | **Checkered**            |
|                                                  |         |               | | **Checkered Inverse**    |
+--------------------------------------------------+---------+---------------+----------------------------+
| Preview Split / ``Preview_Split``                | Double  | x: 0.5 y: 0.5 |                            |
+--------------------------------------------------+---------+---------------+----------------------------+
| Output Layer / ``Output_Layer``                  | Choice  | Layer 0       | |                          |
|                                                  |         |               | | **Merged**               |
|                                                  |         |               | | **Layer 0**              |
|                                                  |         |               | | **Layer -1**             |
|                                                  |         |               | | **Layer -2**             |
|                                                  |         |               | | **Layer -3**             |
|                                                  |         |               | | **Layer -4**             |
|                                                  |         |               | | **Layer -5**             |
|                                                  |         |               | | **Layer -6**             |
|                                                  |         |               | | **Layer -7**             |
|                                                  |         |               | | **Layer -8**             |
|                                                  |         |               | | **Layer -9**             |
+--------------------------------------------------+---------+---------------+----------------------------+
| Resize Mode / ``Resize_Mode``                    | Choice  | Dynamic       | |                          |
|                                                  |         |               | | **Fixed (Inplace)**      |
|                                                  |         |               | | **Dynamic**              |
|                                                  |         |               | | **Downsample 1/2**       |
|                                                  |         |               | | **Downsample 1/4**       |
|                                                  |         |               | | **Downsample 1/8**       |
|                                                  |         |               | | **Downsample 1/16**      |
+--------------------------------------------------+---------+---------------+----------------------------+
| Ignore Alpha / ``Ignore_Alpha``                  | Boolean | Off           |                            |
+--------------------------------------------------+---------+---------------+----------------------------+
| Preview/Draft Mode / ``PreviewDraft_Mode``       | Boolean | Off           |                            |
+--------------------------------------------------+---------+---------------+----------------------------+
| Global Random Seed / ``Global_Random_Seed``      | Integer | 0             |                            |
+--------------------------------------------------+---------+---------------+----------------------------+
| Animate Random Seed / ``Animate_Random_Seed``    | Boolean | Off           |                            |
+--------------------------------------------------+---------+---------------+----------------------------+
| Log Verbosity / ``Log_Verbosity``                | Choice  | Off           | |                          |
|                                                  |         |               | | **Off**                  |
|                                                  |         |               | | **Level 1**              |
|                                                  |         |               | | **Level 2**              |
|                                                  |         |               | | **Level 3**              |
+--------------------------------------------------+---------+---------------+----------------------------+
