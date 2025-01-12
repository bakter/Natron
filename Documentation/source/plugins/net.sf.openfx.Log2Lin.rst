.. _net.sf.openfx.Log2Lin:

Log2Lin node
============

*This documentation is for version 1.0 of Log2Lin (net.sf.openfx.Log2Lin).*

Description
-----------

Convert between the logarithmic encoding used in Cineon files and linear encoding.

This plugin may be used to customize the conversion between the linear and the logarithmic space, using different parameters than the Kodak-recommended settings.

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

+------------------------------+---------+----------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name      | Type    | Default              | Function                                                                                                                           |
+==============================+=========+======================+====================================================================================================================================+
| Operation / ``operation``    | Choice  | Log to Lin           | | The operation to perform.                                                                                                        |
|                              |         |                      | | **Log to Lin (log2lin)**: Convert the input from logarithmic to linear colorspace (usually after a Read node).                   |
|                              |         |                      | | **Lin to Log (lin2log)**: Convert the input from linear to logarithmic colorspace (usually before a Write node).                 |
+------------------------------+---------+----------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Black / ``black``            | Color   | r: 95 g: 95 b: 95    | Value in the Cineon file that corresponds to black.                                                                                |
+------------------------------+---------+----------------------+------------------------------------------------------------------------------------------------------------------------------------+
| White / ``white``            | Color   | r: 685 g: 685 b: 685 | Value in the Cineon file that corresponds to white.                                                                                |
+------------------------------+---------+----------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Gamma / ``gamma``            | Color   | r: 0.6 g: 0.6 b: 0.6 | The film response gamma value.                                                                                                     |
+------------------------------+---------+----------------------+------------------------------------------------------------------------------------------------------------------------------------+
| (Un)premult / ``premult``    | Boolean | Off                  | Divide the image by the alpha channel before processing, and re-multiply it afterwards. Use if the input images are premultiplied. |
+------------------------------+---------+----------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert`` | Boolean | Off                  | When checked, the effect is fully applied where the mask is 0.                                                                     |
+------------------------------+---------+----------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                | Double  | 1                    | Mix factor between the original and the transformed image.                                                                         |
+------------------------------+---------+----------------------+------------------------------------------------------------------------------------------------------------------------------------+
