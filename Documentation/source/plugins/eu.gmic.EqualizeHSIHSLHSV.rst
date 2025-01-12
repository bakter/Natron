.. _eu.gmic.EqualizeHSIHSLHSV:

G’MIC Equalize HSI-HSL-HSV node
===============================

*This documentation is for version 1.0 of G’MIC Equalize HSI-HSL-HSV (eu.gmic.EqualizeHSIHSLHSV).*

Description
-----------

Black:

Near black:

Dark grey:

Mi-dark grey:

Middle grey:

Mid-light grey:

Light grey:

Highlights:

White:

Authors: David Tschumperle and David Revoy. Latest Update: 2018/01/19.

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

+-----------------------------------------------+---------+---------------+----------------------------+
| Parameter / script name                       | Type    | Default       | Function                   |
+===============================================+=========+===============+============================+
| Colorspace / ``Colorspace``                   | Choice  | HSL           | |                          |
|                                               |         |               | | **HSI**                  |
|                                               |         |               | | **HSL**                  |
|                                               |         |               | | **HSV**                  |
+-----------------------------------------------+---------+---------------+----------------------------+
| Opacity (%) / ``Opacity_``                    | Double  | 100           |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Value Blending / ``Value_Blending``           | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Color Blending / ``Color_Blending``           | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Preview Mapping / ``Preview_Mapping``         | Choice  | None          | |                          |
|                                               |         |               | | **None**                 |
|                                               |         |               | | **Grey**                 |
|                                               |         |               | | **Color**                |
+-----------------------------------------------+---------+---------------+----------------------------+
| Hue Offset / ``Hue_Offset``                   | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Saturation Offset / ``Saturation_Offset``     | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Value Offset / ``Value_Offset``               | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Hue Offset_2 / ``Hue_Offset_2``               | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Saturation Offset_2 / ``Saturation_Offset_2`` | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Value Offset_2 / ``Value_Offset_2``           | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Hue Offset_3 / ``Hue_Offset_3``               | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Saturation Offset_3 / ``Saturation_Offset_3`` | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Value Offset_3 / ``Value_Offset_3``           | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Hue Offset_4 / ``Hue_Offset_4``               | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Saturation Offset_4 / ``Saturation_Offset_4`` | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Value Offset_4 / ``Value_Offset_4``           | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Hue Offset_5 / ``Hue_Offset_5``               | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Saturation Offset_5 / ``Saturation_Offset_5`` | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Value Offset_5 / ``Value_Offset_5``           | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Hue Offset_6 / ``Hue_Offset_6``               | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Saturation Offset_6 / ``Saturation_Offset_6`` | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Value Offset_6 / ``Value_Offset_6``           | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Hue Offset_7 / ``Hue_Offset_7``               | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Saturation Offset_7 / ``Saturation_Offset_7`` | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Value Offset_7 / ``Value_Offset_7``           | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Hue Offset_8 / ``Hue_Offset_8``               | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Saturation Offset_8 / ``Saturation_Offset_8`` | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Value Offset_8 / ``Value_Offset_8``           | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Hue Offset_9 / ``Hue_Offset_9``               | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Saturation Offset_9 / ``Saturation_Offset_9`` | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Value Offset_9 / ``Value_Offset_9``           | Double  | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Preview Type / ``Preview_Type``               | Choice  | Full          | |                          |
|                                               |         |               | | **Full**                 |
|                                               |         |               | | **Forward Horizontal**   |
|                                               |         |               | | **Forward Vertical**     |
|                                               |         |               | | **Backward Horizontal**  |
|                                               |         |               | | **Backward Vertical**    |
|                                               |         |               | | **Duplicate Top**        |
|                                               |         |               | | **Duplicate Left**       |
|                                               |         |               | | **Duplicate Bottom**     |
|                                               |         |               | | **Duplicate Right**      |
|                                               |         |               | | **Duplicate Horizontal** |
|                                               |         |               | | **Duplicate Vertical**   |
|                                               |         |               | | **Checkered**            |
|                                               |         |               | | **Checkered Inverse**    |
+-----------------------------------------------+---------+---------------+----------------------------+
| Preview Split / ``Preview_Split``             | Double  | x: 0.5 y: 0.5 |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Output Layer / ``Output_Layer``               | Choice  | Layer 0       | |                          |
|                                               |         |               | | **Merged**               |
|                                               |         |               | | **Layer 0**              |
|                                               |         |               | | **Layer -1**             |
|                                               |         |               | | **Layer -2**             |
|                                               |         |               | | **Layer -3**             |
|                                               |         |               | | **Layer -4**             |
|                                               |         |               | | **Layer -5**             |
|                                               |         |               | | **Layer -6**             |
|                                               |         |               | | **Layer -7**             |
|                                               |         |               | | **Layer -8**             |
|                                               |         |               | | **Layer -9**             |
+-----------------------------------------------+---------+---------------+----------------------------+
| Resize Mode / ``Resize_Mode``                 | Choice  | Dynamic       | |                          |
|                                               |         |               | | **Fixed (Inplace)**      |
|                                               |         |               | | **Dynamic**              |
|                                               |         |               | | **Downsample 1/2**       |
|                                               |         |               | | **Downsample 1/4**       |
|                                               |         |               | | **Downsample 1/8**       |
|                                               |         |               | | **Downsample 1/16**      |
+-----------------------------------------------+---------+---------------+----------------------------+
| Ignore Alpha / ``Ignore_Alpha``               | Boolean | Off           |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Preview/Draft Mode / ``PreviewDraft_Mode``    | Boolean | Off           |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Global Random Seed / ``Global_Random_Seed``   | Integer | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Animate Random Seed / ``Animate_Random_Seed`` | Boolean | Off           |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Log Verbosity / ``Log_Verbosity``             | Choice  | Off           | |                          |
|                                               |         |               | | **Off**                  |
|                                               |         |               | | **Level 1**              |
|                                               |         |               | | **Level 2**              |
|                                               |         |               | | **Level 3**              |
+-----------------------------------------------+---------+---------------+----------------------------+
