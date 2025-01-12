.. _net.sf.openfx.Despill:

Despill node
============

|pluginIcon| 

*This documentation is for version 1.0 of Despill (net.sf.openfx.Despill).*

Description
-----------

Remove the unwanted color contamination of the foreground (spill) caused by the reflected color of the bluescreen/greenscreen.

While a despill operation often only removes green (for greenscreens) this despill also enables adding red and blue to the spill area. A lot of Keyers already have implemented their own despill methods. However, in a lot of cases it is useful to seperate the keying process in 2 tasks to get more control over the final result. Normally these tasks are the generation of the alpha mask and the spill correction. The generated alpha Mask (Key) is then used to merge the despilled forground over the new background.

This effect is based on the unspill operations described in section 4.5 of “Digital Compositing for Film and Video” by Steve Wright (Focal Press).

Inputs
------

+--------+-------------+----------+
| Input  | Description | Optional |
+========+=============+==========+
| Source |             | No       |
+--------+-------------+----------+
| Mask   |             | Yes      |
+--------+-------------+----------+

Controls
--------

.. tabularcolumns:: |>{\raggedright}p{0.2\columnwidth}|>{\raggedright}p{0.06\columnwidth}|>{\raggedright}p{0.07\columnwidth}|p{0.63\columnwidth}|

.. cssclass:: longtable

+----------------------------------------+---------+-------------+------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name                | Type    | Default     | Function                                                                                                                           |
+========================================+=========+=============+====================================================================================================================================+
| Screen Type / ``screenType``           | Choice  | Greenscreen | | Select the screen type according to your footage                                                                                 |
|                                        |         |             | | **Greenscreen (green)**: The background screen has a green tint.                                                                 |
|                                        |         |             | | **Bluescreen (blue)**: The background screen has a blue tint.                                                                    |
+----------------------------------------+---------+-------------+------------------------------------------------------------------------------------------------------------------------------------+
| Spillmap Mix / ``spillmapMix``         | Double  | 0.5         | | This value controls the generation of the spillmap.                                                                              |
|                                        |         |             | | The spillmap decides in which areas the spill will be removed.                                                                   |
|                                        |         |             | | To calculate this map the two none screen colors are combined according to this value and then subtracted from the screen color. |
|                                        |         |             | | Greenscreen:                                                                                                                     |
|                                        |         |             | | 0: limit green by blue                                                                                                           |
|                                        |         |             | | 0,5: limit green by the average of red and blue                                                                                  |
|                                        |         |             | | 1: limit green by red                                                                                                            |
|                                        |         |             | | Bluescreen:                                                                                                                      |
|                                        |         |             | | 0: limit blue by green                                                                                                           |
|                                        |         |             | | 0,5: limit blue by the average of red and green                                                                                  |
|                                        |         |             | | 1: limit blue by red                                                                                                             |
+----------------------------------------+---------+-------------+------------------------------------------------------------------------------------------------------------------------------------+
| Expand Spillmap / ``expandSpillmap``   | Double  | 0           | | This will expand the spillmap to get rid of still remaining spill.                                                               |
|                                        |         |             | | It works by lowering the values that will be subtracted from green or blue.                                                      |
+----------------------------------------+---------+-------------+------------------------------------------------------------------------------------------------------------------------------------+
| Spillmap to Alpha / ``outputSpillMap`` | Boolean | Off         | If checked, this will output the spillmap in the alpha channel.                                                                    |
+----------------------------------------+---------+-------------+------------------------------------------------------------------------------------------------------------------------------------+
| Red Scale / ``scaleRed``               | Double  | 0           | Controls the amount of Red in the spill area                                                                                       |
+----------------------------------------+---------+-------------+------------------------------------------------------------------------------------------------------------------------------------+
| Green Scale / ``scaleGreen``           | Double  | -1          | | Controls the amount of Green in the spill area.                                                                                  |
|                                        |         |             | | This value should be negative for greenscreen footage.                                                                           |
+----------------------------------------+---------+-------------+------------------------------------------------------------------------------------------------------------------------------------+
| Blue Scale / ``scaleBlue``             | Double  | 0           | | Controls the amount of Blue in the spill area.                                                                                   |
|                                        |         |             | | This value should be negative for bluescreen footage.                                                                            |
+----------------------------------------+---------+-------------+------------------------------------------------------------------------------------------------------------------------------------+
| Brightness / ``brightness``            | Double  | 0           | Controls the brightness of the spill while trying to preserve the colors.                                                          |
+----------------------------------------+---------+-------------+------------------------------------------------------------------------------------------------------------------------------------+
| Clamp Black / ``clampBlack``           | Boolean | On          | All colors below 0 on output are set to 0.                                                                                         |
+----------------------------------------+---------+-------------+------------------------------------------------------------------------------------------------------------------------------------+
| Clamp White / ``clampWhite``           | Boolean | Off         | All colors above 1 on output are set to 1.                                                                                         |
+----------------------------------------+---------+-------------+------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert``           | Boolean | Off         | When checked, the effect is fully applied where the mask is 0.                                                                     |
+----------------------------------------+---------+-------------+------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                          | Double  | 1           | Mix factor between the original and the transformed image.                                                                         |
+----------------------------------------+---------+-------------+------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.openfx.Despill.png
   :width: 10.0%
