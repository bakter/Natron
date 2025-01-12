.. _eu.gmic.ColorizeLineartPropagation:

G’MIC Colorize Lineart Propagation node
=======================================

*This documentation is for version 1.0 of G’MIC Colorize Lineart Propagation (eu.gmic.ColorizeLineartPropagation).*

Description
-----------

Layers ordering:

Note: You probably need to select All for the Input layers option on the left.

Color Spots = your layer with color indications.

Lineart = your layer with line-art (b&w or transparent).

Extrapolated Colors = the G’MIC generated layer with flat colors.

Warnings:

- Do not rely too much on the preview, it is probably not accurate !

- Activate option Extrapolate color as one layer per single color/region only if you have a lot of available memory !

Click here for a detailed description of this filter.: http://www.gimpchat.com/viewtopic.php?f=28&t=7567

Authors: David Tschumperle, Timothee Giet and David Revoy. Latest Update: 2013/19/06.

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

+---------------------------------------------------+---------+-------------------------------+---------------------------------------------------+
| Parameter / script name                           | Type    | Default                       | Function                                          |
+===================================================+=========+===============================+===================================================+
| Input Layers / ``Input_Layers``                   | Choice  | Color Spots + Lineart         | |                                                 |
|                                                   |         |                               | | **Color Spots + Lineart**                       |
|                                                   |         |                               | | **Lineart + Color Spots**                       |
|                                                   |         |                               | | **Color Spots + Extrapolated Colors + Lineart** |
|                                                   |         |                               | | **Lineart + Color Spots + Extrapolated Colors** |
+---------------------------------------------------+---------+-------------------------------+---------------------------------------------------+
| Output Layers / ``Output_Layers``                 | Choice  | Extrapolated Colors + Lineart | |                                                 |
|                                                   |         |                               | | **Single (Merged)**                             |
|                                                   |         |                               | | **Extrapolated Colors + Lineart**               |
|                                                   |         |                               | | **Lineart + Extrapolated Colors**               |
|                                                   |         |                               | | **Color Spots + Extrapolated Colors + Lineart** |
|                                                   |         |                               | | **Lineart + Color Spots + Extrapolated Colors** |
+---------------------------------------------------+---------+-------------------------------+---------------------------------------------------+
| Extrapolate Colors As / ``Extrapolate_Colors_As`` | Choice  | One Layer                     | |                                                 |
|                                                   |         |                               | | **One Layer**                                   |
|                                                   |         |                               | | **Two Layers**                                  |
|                                                   |         |                               | | **Three Layers**                                |
|                                                   |         |                               | | **Four Layers**                                 |
|                                                   |         |                               | | **Five Layers**                                 |
|                                                   |         |                               | | **Six Layers**                                  |
|                                                   |         |                               | | **Seven Layers**                                |
|                                                   |         |                               | | **Eight Layers**                                |
|                                                   |         |                               | | **Nine Layers**                                 |
|                                                   |         |                               | | **Ten Layers**                                  |
|                                                   |         |                               | | **One Layer per Single Color**                  |
|                                                   |         |                               | | **One Layer per Single Region**                 |
+---------------------------------------------------+---------+-------------------------------+---------------------------------------------------+
| Smoothness / ``Smoothness``                       | Double  | 0.05                          |                                                   |
+---------------------------------------------------+---------+-------------------------------+---------------------------------------------------+
| Output Layer / ``Output_Layer``                   | Choice  | Layer 0                       | |                                                 |
|                                                   |         |                               | | **Merged**                                      |
|                                                   |         |                               | | **Layer 0**                                     |
|                                                   |         |                               | | **Layer -1**                                    |
|                                                   |         |                               | | **Layer -2**                                    |
|                                                   |         |                               | | **Layer -3**                                    |
|                                                   |         |                               | | **Layer -4**                                    |
|                                                   |         |                               | | **Layer -5**                                    |
|                                                   |         |                               | | **Layer -6**                                    |
|                                                   |         |                               | | **Layer -7**                                    |
|                                                   |         |                               | | **Layer -8**                                    |
|                                                   |         |                               | | **Layer -9**                                    |
+---------------------------------------------------+---------+-------------------------------+---------------------------------------------------+
| Resize Mode / ``Resize_Mode``                     | Choice  | Dynamic                       | |                                                 |
|                                                   |         |                               | | **Fixed (Inplace)**                             |
|                                                   |         |                               | | **Dynamic**                                     |
|                                                   |         |                               | | **Downsample 1/2**                              |
|                                                   |         |                               | | **Downsample 1/4**                              |
|                                                   |         |                               | | **Downsample 1/8**                              |
|                                                   |         |                               | | **Downsample 1/16**                             |
+---------------------------------------------------+---------+-------------------------------+---------------------------------------------------+
| Ignore Alpha / ``Ignore_Alpha``                   | Boolean | Off                           |                                                   |
+---------------------------------------------------+---------+-------------------------------+---------------------------------------------------+
| Preview/Draft Mode / ``PreviewDraft_Mode``        | Boolean | Off                           |                                                   |
+---------------------------------------------------+---------+-------------------------------+---------------------------------------------------+
| Global Random Seed / ``Global_Random_Seed``       | Integer | 0                             |                                                   |
+---------------------------------------------------+---------+-------------------------------+---------------------------------------------------+
| Animate Random Seed / ``Animate_Random_Seed``     | Boolean | Off                           |                                                   |
+---------------------------------------------------+---------+-------------------------------+---------------------------------------------------+
| Log Verbosity / ``Log_Verbosity``                 | Choice  | Off                           | |                                                 |
|                                                   |         |                               | | **Off**                                         |
|                                                   |         |                               | | **Level 1**                                     |
|                                                   |         |                               | | **Level 2**                                     |
|                                                   |         |                               | | **Level 3**                                     |
+---------------------------------------------------+---------+-------------------------------+---------------------------------------------------+
