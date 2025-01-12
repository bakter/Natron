.. _net.sf.openfx.RGBToYUV709:

RGBToYUV709 node
================

*This documentation is for version 1.0 of RGBToYUV709 (net.sf.openfx.RGBToYUV709).*

Description
-----------

Convert from RGB to YUV color model (ITU.BT-709). RGB is gamma-compressed using the Rec.709 Opto-Electronic Transfer Function (OETF) before conversion.

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
