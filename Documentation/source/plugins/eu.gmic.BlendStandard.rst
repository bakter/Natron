.. _eu.gmic.BlendStandard:

G’MIC Blend Standard node
=========================

*This documentation is for version 1.0 of G’MIC Blend Standard (eu.gmic.BlendStandard).*

Description
-----------

Note: In custom formulas, a and b respectively stand for the values of the base layer and the blend layer, and are defined in value range [0,1].

Note: This filter needs at least two layers to work properly. Do not forget to set the Input layers option below to handle multiple input layers.

Reference page for G’MIC blending modes: https://github.com/dtschump/gmic-community/wiki/Blending-modes

Author: David Tschumperle. Latest Update: 2017/03/08.

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

+-----------------------------------------------+---------+-------------------------------------+------------------------------------------------------+
| Parameter / script name                       | Type    | Default                             | Function                                             |
+===============================================+=========+=====================================+======================================================+
| Mode / ``Mode``                               | Choice  | Custom formula                      | |                                                    |
|                                               |         |                                     | | **Add**                                            |
|                                               |         |                                     | | **Alpha**                                          |
|                                               |         |                                     | | **And**                                            |
|                                               |         |                                     | | **Average**                                        |
|                                               |         |                                     | | **Blue**                                           |
|                                               |         |                                     | | **Burn**                                           |
|                                               |         |                                     | | **Custom formula**                                 |
|                                               |         |                                     | | **Darken**                                         |
|                                               |         |                                     | | **Difference**                                     |
|                                               |         |                                     | | **Divide**                                         |
|                                               |         |                                     | | **Dodge**                                          |
|                                               |         |                                     | | **Edges**                                          |
|                                               |         |                                     | | **Exclusion**                                      |
|                                               |         |                                     | | **Freeze**                                         |
|                                               |         |                                     | | **Grain Extract**                                  |
|                                               |         |                                     | | **Grain Merge**                                    |
|                                               |         |                                     | | **Green**                                          |
|                                               |         |                                     | | **Hard Light**                                     |
|                                               |         |                                     | | **Hard Mix**                                       |
|                                               |         |                                     | | **Hue**                                            |
|                                               |         |                                     | | **Interpolation**                                  |
|                                               |         |                                     | | **Lighten**                                        |
|                                               |         |                                     | | **Lightness**                                      |
|                                               |         |                                     | | **Linear Burn**                                    |
|                                               |         |                                     | | **Linear Light**                                   |
|                                               |         |                                     | | **Luminance**                                      |
|                                               |         |                                     | | **Multiply**                                       |
|                                               |         |                                     | | **Negation**                                       |
|                                               |         |                                     | | **Or**                                             |
|                                               |         |                                     | | **Overlay**                                        |
|                                               |         |                                     | | **Pin Light**                                      |
|                                               |         |                                     | | **Red**                                            |
|                                               |         |                                     | | **Reflect**                                        |
|                                               |         |                                     | | **Saturation**                                     |
|                                               |         |                                     | | **Shape Area Max**                                 |
|                                               |         |                                     | | **Shape Area Max0**                                |
|                                               |         |                                     | | **Shape Area Min**                                 |
|                                               |         |                                     | | **Shape Area Min0**                                |
|                                               |         |                                     | | **Shape Average**                                  |
|                                               |         |                                     | | **Shape Average0**                                 |
|                                               |         |                                     | | **Shape Median**                                   |
|                                               |         |                                     | | **Shape Median0**                                  |
|                                               |         |                                     | | **Shape Min**                                      |
|                                               |         |                                     | | **Shape Min0**                                     |
|                                               |         |                                     | | **Shape Max**                                      |
|                                               |         |                                     | | **Shape Max0**                                     |
|                                               |         |                                     | | **Soft Burn**                                      |
|                                               |         |                                     | | **Soft Dodge**                                     |
|                                               |         |                                     | | **Soft Light**                                     |
|                                               |         |                                     | | **Screen**                                         |
|                                               |         |                                     | | **Stamp**                                          |
|                                               |         |                                     | | **Subtract**                                       |
|                                               |         |                                     | | **Value**                                          |
|                                               |         |                                     | | **Vivid Light**                                    |
|                                               |         |                                     | | **Xor**                                            |
+-----------------------------------------------+---------+-------------------------------------+------------------------------------------------------+
| Process As / ``Process_As``                   | Choice  | Two-by-Two                          | |                                                    |
|                                               |         |                                     | | **Two-by-Two**                                     |
|                                               |         |                                     | | **Upper Layer is the Top Layer for All Blends**    |
|                                               |         |                                     | | **Lower Layer is the Bottom Layer for All Blends** |
+-----------------------------------------------+---------+-------------------------------------+------------------------------------------------------+
| Opacity (%) / ``Opacity_``                    | Double  | 100                                 |                                                      |
+-----------------------------------------------+---------+-------------------------------------+------------------------------------------------------+
| Preview All Outputs / ``Preview_All_Outputs`` | Boolean | On                                  |                                                      |
+-----------------------------------------------+---------+-------------------------------------+------------------------------------------------------+
| Custom Formula / ``Custom_Formula``           | String  | 1/2 - 1/4*cos(pi*a) - 1/4*cos(pi*b) |                                                      |
+-----------------------------------------------+---------+-------------------------------------+------------------------------------------------------+
| Output Layer / ``Output_Layer``               | Choice  | Layer 0                             | |                                                    |
|                                               |         |                                     | | **Merged**                                         |
|                                               |         |                                     | | **Layer 0**                                        |
|                                               |         |                                     | | **Layer -1**                                       |
|                                               |         |                                     | | **Layer -2**                                       |
|                                               |         |                                     | | **Layer -3**                                       |
|                                               |         |                                     | | **Layer -4**                                       |
|                                               |         |                                     | | **Layer -5**                                       |
|                                               |         |                                     | | **Layer -6**                                       |
|                                               |         |                                     | | **Layer -7**                                       |
|                                               |         |                                     | | **Layer -8**                                       |
|                                               |         |                                     | | **Layer -9**                                       |
+-----------------------------------------------+---------+-------------------------------------+------------------------------------------------------+
| Resize Mode / ``Resize_Mode``                 | Choice  | Dynamic                             | |                                                    |
|                                               |         |                                     | | **Fixed (Inplace)**                                |
|                                               |         |                                     | | **Dynamic**                                        |
|                                               |         |                                     | | **Downsample 1/2**                                 |
|                                               |         |                                     | | **Downsample 1/4**                                 |
|                                               |         |                                     | | **Downsample 1/8**                                 |
|                                               |         |                                     | | **Downsample 1/16**                                |
+-----------------------------------------------+---------+-------------------------------------+------------------------------------------------------+
| Ignore Alpha / ``Ignore_Alpha``               | Boolean | Off                                 |                                                      |
+-----------------------------------------------+---------+-------------------------------------+------------------------------------------------------+
| Preview/Draft Mode / ``PreviewDraft_Mode``    | Boolean | Off                                 |                                                      |
+-----------------------------------------------+---------+-------------------------------------+------------------------------------------------------+
| Global Random Seed / ``Global_Random_Seed``   | Integer | 0                                   |                                                      |
+-----------------------------------------------+---------+-------------------------------------+------------------------------------------------------+
| Animate Random Seed / ``Animate_Random_Seed`` | Boolean | Off                                 |                                                      |
+-----------------------------------------------+---------+-------------------------------------+------------------------------------------------------+
| Log Verbosity / ``Log_Verbosity``             | Choice  | Off                                 | |                                                    |
|                                               |         |                                     | | **Off**                                            |
|                                               |         |                                     | | **Level 1**                                        |
|                                               |         |                                     | | **Level 2**                                        |
|                                               |         |                                     | | **Level 3**                                        |
+-----------------------------------------------+---------+-------------------------------------+------------------------------------------------------+
