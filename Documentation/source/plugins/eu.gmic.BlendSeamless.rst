.. _eu.gmic.BlendSeamless:

G’MIC Blend Seamless node
=========================

*This documentation is for version 1.0 of G’MIC Blend Seamless (eu.gmic.BlendSeamless).*

Description
-----------

Note: This filter needs at least two layers to work properly. Set the Input layers option to handle multiple input layers.

Click here for a detailed description of this filter.: http://gimpchat.com/viewtopic.php?f=28&t=10204

+ Video tutorial 1: http://www.youtube.com/watch?v=Nu-S1HmOCgE

+ Video tutorial 2: http://www.youtube.com/watch?v=zsHgQY6025I

+ Video tutorial 3: http://www.youtube.com/watch?v=2e6FikWMkaQ

Author: David Tschumperle. Latest Update: 2014/04/05.

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

+-----------------------------------------------------------+---------+---------+-----------------------+
| Parameter / script name                                   | Type    | Default | Function              |
+===========================================================+=========+=========+=======================+
| Mixed Mode / ``Mixed_Mode``                               | Boolean | Off     |                       |
+-----------------------------------------------------------+---------+---------+-----------------------+
| Inner Fading / ``Inner_Fading``                           | Double  | 0       |                       |
+-----------------------------------------------------------+---------+---------+-----------------------+
| Outer Fading / ``Outer_Fading``                           | Double  | 25      |                       |
+-----------------------------------------------------------+---------+---------+-----------------------+
| Colorspace / ``Colorspace``                               | Choice  | sRGB    | |                     |
|                                                           |         |         | | **sRGB**            |
|                                                           |         |         | | **Linear RGB**      |
|                                                           |         |         | | **Lab**             |
+-----------------------------------------------------------+---------+---------+-----------------------+
| Output as Separate Layers / ``Output_as_Separate_Layers`` | Boolean | Off     |                       |
+-----------------------------------------------------------+---------+---------+-----------------------+
| Output Layer / ``Output_Layer``                           | Choice  | Layer 0 | |                     |
|                                                           |         |         | | **Merged**          |
|                                                           |         |         | | **Layer 0**         |
|                                                           |         |         | | **Layer -1**        |
|                                                           |         |         | | **Layer -2**        |
|                                                           |         |         | | **Layer -3**        |
|                                                           |         |         | | **Layer -4**        |
|                                                           |         |         | | **Layer -5**        |
|                                                           |         |         | | **Layer -6**        |
|                                                           |         |         | | **Layer -7**        |
|                                                           |         |         | | **Layer -8**        |
|                                                           |         |         | | **Layer -9**        |
+-----------------------------------------------------------+---------+---------+-----------------------+
| Resize Mode / ``Resize_Mode``                             | Choice  | Dynamic | |                     |
|                                                           |         |         | | **Fixed (Inplace)** |
|                                                           |         |         | | **Dynamic**         |
|                                                           |         |         | | **Downsample 1/2**  |
|                                                           |         |         | | **Downsample 1/4**  |
|                                                           |         |         | | **Downsample 1/8**  |
|                                                           |         |         | | **Downsample 1/16** |
+-----------------------------------------------------------+---------+---------+-----------------------+
| Ignore Alpha / ``Ignore_Alpha``                           | Boolean | Off     |                       |
+-----------------------------------------------------------+---------+---------+-----------------------+
| Preview/Draft Mode / ``PreviewDraft_Mode``                | Boolean | Off     |                       |
+-----------------------------------------------------------+---------+---------+-----------------------+
| Global Random Seed / ``Global_Random_Seed``               | Integer | 0       |                       |
+-----------------------------------------------------------+---------+---------+-----------------------+
| Animate Random Seed / ``Animate_Random_Seed``             | Boolean | Off     |                       |
+-----------------------------------------------------------+---------+---------+-----------------------+
| Log Verbosity / ``Log_Verbosity``                         | Choice  | Off     | |                     |
|                                                           |         |         | | **Off**             |
|                                                           |         |         | | **Level 1**         |
|                                                           |         |         | | **Level 2**         |
|                                                           |         |         | | **Level 3**         |
+-----------------------------------------------------------+---------+---------+-----------------------+
