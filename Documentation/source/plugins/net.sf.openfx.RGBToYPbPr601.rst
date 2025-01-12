.. _net.sf.openfx.RGBToYPbPr601:

RGBToYPbPr601 node
==================

*This documentation is for version 1.0 of RGBToYPbPr601 (net.sf.openfx.RGBToYPbPr601).*

Description
-----------

Convert from RGB to YPbPr color model (ITU.BT-601). RGB is gamma-compressed using the sRGB Opto-Electronic Transfer Function (OETF) before conversion.

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

+-------------------------+---------+---------+-----------------------------------------------------------------------------------------------------+
| Parameter / script name | Type    | Default | Function                                                                                            |
+=========================+=========+=========+=====================================================================================================+
| Unpremult / ``premult`` | Boolean | Off     | Divide the image by the alpha channel before processing. Use if the input images are premultiplied. |
+-------------------------+---------+---------+-----------------------------------------------------------------------------------------------------+
