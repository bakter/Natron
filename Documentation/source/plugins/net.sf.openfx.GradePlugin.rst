.. _net.sf.openfx.GradePlugin:

Grade node
==========

|pluginIcon| 

*This documentation is for version 2.0 of Grade (net.sf.openfx.GradePlugin).*

Description
-----------

Modify the tonal spread of an image from the white and black points.

This node can also be used to match colors of 2 images: The darkest and lightest points of the target image are converted to black and white using the blackpoint and whitepoint values. These 2 values are then moved to new values using the black(for dark point) and white(for white point). You can also apply multiply/offset/gamma for other color fixing you may need.

Here is the formula used:

A = multiply \* (white - black) / (whitepoint - blackpoint)

B = offset + black - A \* blackpoint

output = pow(A \* input + B, 1 / gamma).

A special use for Grade is to generate a mask image with soft edges by thresholding an input image. Set the “Black Point” and “White Point” to values just below and just above the threshold, and check the “Clamp Black” and “Clamp White” options. If a binary mask containing only 0 and 1 is preferred, the Clamp plugin can be used instead.

See also: http://opticalenquiry.com/nuke/index.php?title=Grade and http://opticalenquiry.com/nuke/index.php?title=Integration#Matching_color

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

+------------------------------+---------+---------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name      | Type    | Default             | Function                                                                                                                                                   |
+==============================+=========+=====================+============================================================================================================================================================+
| Black Point / ``blackPoint`` | Color   | r: 0 g: 0 b: 0 a: 0 | Set the color of the darkest pixels in the image.                                                                                                          |
+------------------------------+---------+---------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| White Point / ``whitePoint`` | Color   | r: 1 g: 1 b: 1 a: 1 | Set the color of the brightest pixels in the image.                                                                                                        |
+------------------------------+---------+---------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Black / ``black``            | Color   | r: 0 g: 0 b: 0 a: 0 | Colors corresponding to the blackpoint are set to this value.                                                                                              |
+------------------------------+---------+---------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| White / ``white``            | Color   | r: 1 g: 1 b: 1 a: 1 | Colors corresponding to the whitepoint are set to this value.                                                                                              |
+------------------------------+---------+---------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Multiply / ``multiply``      | Color   | r: 1 g: 1 b: 1 a: 1 | Multiplies the result by this value.                                                                                                                       |
+------------------------------+---------+---------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Offset / ``offset``          | Color   | r: 0 g: 0 b: 0 a: 0 | Adds this value to the result (this applies to black and white).                                                                                           |
+------------------------------+---------+---------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Gamma / ``gamma``            | Color   | r: 1 g: 1 b: 1 a: 1 | Final gamma correction. Negative values are not affected by gamma.                                                                                         |
+------------------------------+---------+---------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Normalize / ``normalize``    | Button  |                     | Normalize the image by setting the white point and black point from the minimum and maximum values of the input.                                           |
+------------------------------+---------+---------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Reverse / ``reverse``        | Boolean | Off                 | Apply the inverse correction. Useful to apply the inverse of a Grade downstream: copy-and-paste or clone the upstream node, and invert the downstream one. |
+------------------------------+---------+---------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Clamp Black / ``clampBlack`` | Boolean | On                  | All colors below 0 on output are set to 0.                                                                                                                 |
+------------------------------+---------+---------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Clamp White / ``clampWhite`` | Boolean | Off                 | All colors above 1 on output are set to 1.                                                                                                                 |
+------------------------------+---------+---------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| (Un)premult / ``premult``    | Boolean | Off                 | Divide the image by the alpha channel before processing, and re-multiply it afterwards. Use if the input images are premultiplied.                         |
+------------------------------+---------+---------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert`` | Boolean | Off                 | When checked, the effect is fully applied where the mask is 0.                                                                                             |
+------------------------------+---------+---------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                | Double  | 1                   | Mix factor between the original and the transformed image.                                                                                                 |
+------------------------------+---------+---------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.openfx.GradePlugin.png
   :width: 10.0%
