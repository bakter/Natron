.. _net.sf.openfx.Clamp:

Clamp node
==========

|pluginIcon| 

*This documentation is for version 2.0 of Clamp (net.sf.openfx.Clamp).*

Description
-----------

Clamp the values of the selected channels.

A special use case for the Clamp plugin is to generate a binary mask image (i.e. each pixel is either 0 or 1) by thresholding an image. Let us say one wants all input pixels whose value is above or equal to some threshold value to become 1, and all values below this threshold to become 0. Set the “Minimum” value to the threshold, set the “Maximum” to any value strictly below the threshold (e.g. 0 if the threshold is positive), and check “Enable MinClampTo” and “Enable MaxClampTo” while keeping the default values for “MinClampTo” (0.0) and “MaxClampTop” (1.0). The result is a binary mask image. To create a non-binary mask, with softer edges, either blur the output of Clamp, or use the Grade plugin instead, setting the “Black Point” and “White Point” to values close to the threshold, and checking the “Clamp Black” and “Clamp White” options.

See also: http://opticalenquiry.com/nuke/index.php?title=Clamp

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

+------------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name                  | Type    | Default             | Function                                                                                                                                                                      |
+==========================================+=========+=====================+===============================================================================================================================================================================+
| Minimum / ``minimum``                    | Color   | r: 0 g: 0 b: 0 a: 0 | If enabled, all values that are lower than this number are set to this value, or to the minClampTo value if minClampTo is enabled.                                            |
+------------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Enable Minimum / ``minimumEnable``       | Boolean | On                  | Whether to clamp selected channels to a minimum value.                                                                                                                        |
+------------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Maximum / ``maximum``                    | Color   | r: 1 g: 1 b: 1 a: 1 | If enabled, all values that are higher than this number are set to this value, or to the maxClampTo value if maxClampTo is enabled.                                           |
+------------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Enable Maximum / ``maximumEnable``       | Boolean | On                  | Whether to clamp selected channels to a maximum value.                                                                                                                        |
+------------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| MinClampTo / ``minClampTo``              | Color   | r: 0 g: 0 b: 0 a: 0 | The value to which values below minimum are clamped when minClampTo is enabled. Setting this to a custom color helps visualizing the clamped areas or create graphic effects. |
+------------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Enable MinClampTo / ``minClampToEnable`` | Boolean | Off                 | | When enabled, all values below minimum are set to the minClampTo value.                                                                                                     |
|                                          |         |                     | | When disabled, all values below minimum are clamped to the minimum value.                                                                                                   |
+------------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| MaxClampTo / ``maxClampTo``              | Color   | r: 1 g: 1 b: 1 a: 1 | The value to which values above maximum are clamped when maxClampTo is enabled. Setting this to a custom color helps visualizing the clamped areas or create graphic effects. |
+------------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Enable MaxClampTo / ``maxClampToEnable`` | Boolean | Off                 | | When enabled, all values above maximum are set to the maxClampTo value.                                                                                                     |
|                                          |         |                     | | When disabled, all values above maximum are clamped to the maximum value.                                                                                                   |
+------------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| (Un)premult / ``premult``                | Boolean | Off                 | Divide the image by the alpha channel before processing, and re-multiply it afterwards. Use if the input images are premultiplied.                                            |
+------------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert``             | Boolean | Off                 | When checked, the effect is fully applied where the mask is 0.                                                                                                                |
+------------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                            | Double  | 1                   | Mix factor between the original and the transformed image.                                                                                                                    |
+------------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.openfx.Clamp.png
   :width: 10.0%
