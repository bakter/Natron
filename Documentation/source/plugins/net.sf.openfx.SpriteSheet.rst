.. _net.sf.openfx.SpriteSheet:

SpriteSheet node
================

*This documentation is for version 1.0 of SpriteSheet (net.sf.openfx.SpriteSheet).*

Description
-----------

Read individual frames from a sprite sheet. A sprite sheet is a series of images (usually animation frames) combined into a larger image (or images). For example, an animation consisting of eight 100x100 images could be combined into a single 400x200 sprite sheet (4 frames across by 2 high). The sprite with index 0 is at the top-left of the source image, and sprites are ordered left-to-right and top-to-bottom. The output is an animated sprite that repeats the sprites given in the sprite range. The ContactSheet effect can be used to make a spritesheet from a series of images or a video.

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

+--------------------------------+---------+------------------+---------------------------------------------------------------------------------------+
| Parameter / script name        | Type    | Default          | Function                                                                              |
+================================+=========+==================+=======================================================================================+
| Sprite Size / ``spriteSize``   | Integer | x: 64 y: 64      | Size in pixels of an individual sprite.                                               |
+--------------------------------+---------+------------------+---------------------------------------------------------------------------------------+
| Sprite Range / ``spriteRange`` | Integer | first: 0 last: 0 | Index of the first and last sprite in the animation. The sprite index starts at zero. |
+--------------------------------+---------+------------------+---------------------------------------------------------------------------------------+
| Frame Offset / ``frameOffset`` | Integer | 1                | Output frame number for the first sprite.                                             |
+--------------------------------+---------+------------------+---------------------------------------------------------------------------------------+
