.. _eu.gmic.SplitDetailsWavelets:

G’MIC Split Details Wavelets node
=================================

*This documentation is for version 1.0 of G’MIC Split Details Wavelets (eu.gmic.SplitDetailsWavelets).*

Description
-----------

Note: This filter decomposes an image into several detail scales, using wavelet atrous. It should provide similar results to the Wavelet Decompose Plug-in (by Marco Rossini).

Author: David Tschumperle. Latest Update: 2016/23/03.

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

+-------------------------------------------------------------------------------------------+---------+---------+-----------------------+
| Parameter / script name                                                                   | Type    | Default | Function              |
+===========================================================================================+=========+=========+=======================+
| Number of Scales / ``Number_of_Scales``                                                   | Integer | 6       |                       |
+-------------------------------------------------------------------------------------------+---------+---------+-----------------------+
| Add Alpha Channels to Detail Scale Layers / ``Add_Alpha_Channels_to_Detail_Scale_Layers`` | Boolean | Off     |                       |
+-------------------------------------------------------------------------------------------+---------+---------+-----------------------+
| Sharpen Details in Preview / ``Sharpen_Details_in_Preview``                               | Boolean | Off     |                       |
+-------------------------------------------------------------------------------------------+---------+---------+-----------------------+
| Output Layer / ``Output_Layer``                                                           | Choice  | Layer 0 | |                     |
|                                                                                           |         |         | | **Merged**          |
|                                                                                           |         |         | | **Layer 0**         |
|                                                                                           |         |         | | **Layer -1**        |
|                                                                                           |         |         | | **Layer -2**        |
|                                                                                           |         |         | | **Layer -3**        |
|                                                                                           |         |         | | **Layer -4**        |
|                                                                                           |         |         | | **Layer -5**        |
|                                                                                           |         |         | | **Layer -6**        |
|                                                                                           |         |         | | **Layer -7**        |
|                                                                                           |         |         | | **Layer -8**        |
|                                                                                           |         |         | | **Layer -9**        |
+-------------------------------------------------------------------------------------------+---------+---------+-----------------------+
| Resize Mode / ``Resize_Mode``                                                             | Choice  | Dynamic | |                     |
|                                                                                           |         |         | | **Fixed (Inplace)** |
|                                                                                           |         |         | | **Dynamic**         |
|                                                                                           |         |         | | **Downsample 1/2**  |
|                                                                                           |         |         | | **Downsample 1/4**  |
|                                                                                           |         |         | | **Downsample 1/8**  |
|                                                                                           |         |         | | **Downsample 1/16** |
+-------------------------------------------------------------------------------------------+---------+---------+-----------------------+
| Ignore Alpha / ``Ignore_Alpha``                                                           | Boolean | Off     |                       |
+-------------------------------------------------------------------------------------------+---------+---------+-----------------------+
| Preview/Draft Mode / ``PreviewDraft_Mode``                                                | Boolean | Off     |                       |
+-------------------------------------------------------------------------------------------+---------+---------+-----------------------+
| Global Random Seed / ``Global_Random_Seed``                                               | Integer | 0       |                       |
+-------------------------------------------------------------------------------------------+---------+---------+-----------------------+
| Animate Random Seed / ``Animate_Random_Seed``                                             | Boolean | Off     |                       |
+-------------------------------------------------------------------------------------------+---------+---------+-----------------------+
| Log Verbosity / ``Log_Verbosity``                                                         | Choice  | Off     | |                     |
|                                                                                           |         |         | | **Off**             |
|                                                                                           |         |         | | **Level 1**         |
|                                                                                           |         |         | | **Level 2**         |
|                                                                                           |         |         | | **Level 3**         |
+-------------------------------------------------------------------------------------------+---------+---------+-----------------------+
