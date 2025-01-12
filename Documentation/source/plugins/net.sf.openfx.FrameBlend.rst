.. _net.sf.openfx.FrameBlend:

FrameBlend node
===============

|pluginIcon| 

*This documentation is for version 2.0 of FrameBlend (net.sf.openfx.FrameBlend).*

Description
-----------

Blend frames of the input clip.

If a foreground matte is connected, only pixels with a negative or zero foreground value are taken into account, so that the foreground is not mixed with the background.

The number of values used to compute each pixel can be output to the alpha channel.

Inputs
------

+--------+-------------+----------+
| Input  | Description | Optional |
+========+=============+==========+
| Source |             | No       |
+--------+-------------+----------+
| Mask   |             | Yes      |
+--------+-------------+----------+
| FgM    |             | Yes      |
+--------+-------------+----------+

Controls
--------

.. tabularcolumns:: |>{\raggedright}p{0.2\columnwidth}|>{\raggedright}p{0.06\columnwidth}|>{\raggedright}p{0.07\columnwidth}|p{0.63\columnwidth}|

.. cssclass:: longtable

+-----------------------------------------+---------+-------------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name                 | Type    | Default           | Function                                                                                                                                                                                                            |
+=========================================+=========+===================+=====================================================================================================================================================================================================================+
| Frame Range / ``frameRange``            | Integer | first: -5 last: 0 | Range of frames which are to be blended together. Frame range is absolute if “absolute” is checked, else relative. The last frame is always included, and then one frame out of frameInterval within this interval. |
+-----------------------------------------+---------+-------------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Absolute / ``absolute``                 | Boolean | Off               | Use an absolute frame range. If the frame range is not animated or is not an expression, then all output images will be the same.                                                                                   |
+-----------------------------------------+---------+-------------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Input Range / ``inputRange``            | Button  |                   | Set the frame range to the input range. This can be used, combined with a foreground matte, to produce a clean background plate.                                                                                    |
+-----------------------------------------+---------+-------------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Frame Interval / ``frameInterval``      | Integer | 1                 | Interval (in frames) between frames to process. 1 means to process every frame in the range. The first frame processed is the lower bound of the range. Can be used to reduce processing time or memory usage.      |
+-----------------------------------------+---------+-------------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Operation / ``operation``               | Choice  | Average           | | The operation used to compute the output image.                                                                                                                                                                   |
|                                         |         |                   | | **Average (average)**: Output is the average of selected frames.                                                                                                                                                  |
|                                         |         |                   | | **Min (min)**: Output is the minimum of selected frames.                                                                                                                                                          |
|                                         |         |                   | | **Max (max)**: Output is the maximum of selected frames.                                                                                                                                                          |
|                                         |         |                   | | **Sum (sum)**: Output is the sum/addition of selected frames.                                                                                                                                                     |
|                                         |         |                   | | **Product (product)**: Output is the product/multiplication of selected frames.                                                                                                                                   |
|                                         |         |                   | | **Over (over)**: Output is the ‘over’ composition of selected frames.                                                                                                                                             |
+-----------------------------------------+---------+-------------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Decay / ``decay``                       | Double  | 0                 | Before applying the blending operation, frame t is multiplied by (1-decay)^(last-t).                                                                                                                                |
+-----------------------------------------+---------+-------------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Output Count to Alpha / ``outputCount`` | Boolean | Off               | Output image count at each pixel to alpha (input must have an alpha channel).                                                                                                                                       |
+-----------------------------------------+---------+-------------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert``            | Boolean | Off               | When checked, the effect is fully applied where the mask is 0.                                                                                                                                                      |
+-----------------------------------------+---------+-------------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                           | Double  | 1                 | Mix factor between the original and the transformed image.                                                                                                                                                          |
+-----------------------------------------+---------+-------------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.openfx.FrameBlend.png
   :width: 10.0%
