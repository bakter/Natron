.. _eu.gmic.CustomCodeGlobal:

G’MIC Custom Code Global node
=============================

*This documentation is for version 1.0 of G’MIC Custom Code Global (eu.gmic.CustomCodeGlobal).*

Description
-----------

Note: This filter can execute any set of instructions understood by the G’MIC language interpreter. Here, you can then test some commands before creating your own G’MIC custom commands and plug-in menu entries.

Please look at the documentation reference web page :

https://gmic.eu/reference.shtml

to learn more about available G’MIC commands.

Author: David Tschumperle. Latest Update: 2016/03/10.

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

+-------------------------------------------------------------------+---------+----------------------------+-------------------------------------+
| Parameter / script name                                           | Type    | Default                    | Function                            |
+===================================================================+=========+============================+=====================================+
| Code / ``Code``                                                   | String  | | repeat :math:`\! l\[`>]  |                                     |
|                                                                   |         | |                          |                                     |
|                                                                   |         | | to_rgb                   |                                     |
|                                                                   |         | | +deform 20               |                                     |
|                                                                   |         | | blend_edges 3            |                                     |
|                                                                   |         | |                          |                                     |
|                                                                   |         | | -endl done               |                                     |
+-------------------------------------------------------------------+---------+----------------------------+-------------------------------------+
| Channel(s) / ``Channels``                                         | Choice  | None (Allows Multi-layers) | |                                   |
|                                                                   |         |                            | | **None (Allows Multi-layers)**    |
|                                                                   |         |                            | | **All**                           |
|                                                                   |         |                            | | **RGBA [All]**                    |
|                                                                   |         |                            | | **RGB [All]**                     |
|                                                                   |         |                            | | **RGB [Red]**                     |
|                                                                   |         |                            | | **RGB [Green]**                   |
|                                                                   |         |                            | | **RGB [Blue]**                    |
|                                                                   |         |                            | | **RGBA [Alpha]**                  |
|                                                                   |         |                            | | **Linear RGB [All]**              |
|                                                                   |         |                            | | **Linear RGB [Red]**              |
|                                                                   |         |                            | | **Linear RGB [Green]**            |
|                                                                   |         |                            | | **Linear RGB [Blue]**             |
|                                                                   |         |                            | | **YCbCr [Luminance]**             |
|                                                                   |         |                            | | **YCbCr [Blue-Red Chrominances]** |
|                                                                   |         |                            | | **YCbCr [Blue Chrominance]**      |
|                                                                   |         |                            | | **YCbCr [Red Chrominance]**       |
|                                                                   |         |                            | | **YCbCr [Green Chrominance]**     |
|                                                                   |         |                            | | **Lab [Lightness]**               |
|                                                                   |         |                            | | **Lab [ab-Chrominances]**         |
|                                                                   |         |                            | | **Lab [a-Chrominance]**           |
|                                                                   |         |                            | | **Lab [b-Chrominance]**           |
|                                                                   |         |                            | | **Lch [ch-Chrominances]**         |
|                                                                   |         |                            | | **Lch [c-Chrominance]**           |
|                                                                   |         |                            | | **Lch [h-Chrominance]**           |
|                                                                   |         |                            | | **HSV [Hue]**                     |
|                                                                   |         |                            | | **HSV [Saturation]**              |
|                                                                   |         |                            | | **HSV [Value]**                   |
|                                                                   |         |                            | | **HSI [Intensity]**               |
|                                                                   |         |                            | | **HSL [Lightness]**               |
|                                                                   |         |                            | | **CMYK [Cyan]**                   |
|                                                                   |         |                            | | **CMYK [Magenta]**                |
|                                                                   |         |                            | | **CMYK [Yellow]**                 |
|                                                                   |         |                            | | **CMYK [Key]**                    |
|                                                                   |         |                            | | **YIQ [Luma]**                    |
|                                                                   |         |                            | | **YIQ [Chromas]**                 |
+-------------------------------------------------------------------+---------+----------------------------+-------------------------------------+
| Value Action / ``Value_Action``                                   | Choice  | None                       | |                                   |
|                                                                   |         |                            | | **None**                          |
|                                                                   |         |                            | | **Cut**                           |
|                                                                   |         |                            | | **Normalize**                     |
+-------------------------------------------------------------------+---------+----------------------------+-------------------------------------+
| Display Debug Info on Preview / ``Display_Debug_Info_on_Preview`` | Boolean | Off                        |                                     |
+-------------------------------------------------------------------+---------+----------------------------+-------------------------------------+
| Debug Font Size / ``Debug_Font_Size``                             | Choice  | Normal                     | |                                   |
|                                                                   |         |                            | | **Tiny**                          |
|                                                                   |         |                            | | **Small**                         |
|                                                                   |         |                            | | **Normal**                        |
|                                                                   |         |                            | | **Large**                         |
+-------------------------------------------------------------------+---------+----------------------------+-------------------------------------+
| Preview Type / ``Preview_Type``                                   | Choice  | Full (Allows Multi-Layers) | |                                   |
|                                                                   |         |                            | | **Full (Allows Multi-Layers)**    |
|                                                                   |         |                            | | **Forward Horizontal**            |
|                                                                   |         |                            | | **Forward Vertical**              |
|                                                                   |         |                            | | **Backward Horizontal**           |
|                                                                   |         |                            | | **Backward Vertical**             |
|                                                                   |         |                            | | **Duplicate Top**                 |
|                                                                   |         |                            | | **Duplicate Left**                |
|                                                                   |         |                            | | **Duplicate Bottom**              |
|                                                                   |         |                            | | **Duplicate Right**               |
|                                                                   |         |                            | | **Duplicate Horizontal**          |
|                                                                   |         |                            | | **Duplicate Vertical**            |
|                                                                   |         |                            | | **Checkered**                     |
|                                                                   |         |                            | | **Checkered Inverse**             |
+-------------------------------------------------------------------+---------+----------------------------+-------------------------------------+
| Preview Split / ``Preview_Split``                                 | Double  | x: 0.5 y: 0.5              |                                     |
+-------------------------------------------------------------------+---------+----------------------------+-------------------------------------+
| Output Layer / ``Output_Layer``                                   | Choice  | Layer 0                    | |                                   |
|                                                                   |         |                            | | **Merged**                        |
|                                                                   |         |                            | | **Layer 0**                       |
|                                                                   |         |                            | | **Layer -1**                      |
|                                                                   |         |                            | | **Layer -2**                      |
|                                                                   |         |                            | | **Layer -3**                      |
|                                                                   |         |                            | | **Layer -4**                      |
|                                                                   |         |                            | | **Layer -5**                      |
|                                                                   |         |                            | | **Layer -6**                      |
|                                                                   |         |                            | | **Layer -7**                      |
|                                                                   |         |                            | | **Layer -8**                      |
|                                                                   |         |                            | | **Layer -9**                      |
+-------------------------------------------------------------------+---------+----------------------------+-------------------------------------+
| Resize Mode / ``Resize_Mode``                                     | Choice  | Dynamic                    | |                                   |
|                                                                   |         |                            | | **Fixed (Inplace)**               |
|                                                                   |         |                            | | **Dynamic**                       |
|                                                                   |         |                            | | **Downsample 1/2**                |
|                                                                   |         |                            | | **Downsample 1/4**                |
|                                                                   |         |                            | | **Downsample 1/8**                |
|                                                                   |         |                            | | **Downsample 1/16**               |
+-------------------------------------------------------------------+---------+----------------------------+-------------------------------------+
| Ignore Alpha / ``Ignore_Alpha``                                   | Boolean | Off                        |                                     |
+-------------------------------------------------------------------+---------+----------------------------+-------------------------------------+
| Preview/Draft Mode / ``PreviewDraft_Mode``                        | Boolean | Off                        |                                     |
+-------------------------------------------------------------------+---------+----------------------------+-------------------------------------+
| Global Random Seed / ``Global_Random_Seed``                       | Integer | 0                          |                                     |
+-------------------------------------------------------------------+---------+----------------------------+-------------------------------------+
| Animate Random Seed / ``Animate_Random_Seed``                     | Boolean | Off                        |                                     |
+-------------------------------------------------------------------+---------+----------------------------+-------------------------------------+
| Log Verbosity / ``Log_Verbosity``                                 | Choice  | Off                        | |                                   |
|                                                                   |         |                            | | **Off**                           |
|                                                                   |         |                            | | **Level 1**                       |
|                                                                   |         |                            | | **Level 2**                       |
|                                                                   |         |                            | | **Level 3**                       |
+-------------------------------------------------------------------+---------+----------------------------+-------------------------------------+
