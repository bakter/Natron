.. _net.sf.openfx.RGBToHSV:

RGBToHSV node
=============

|pluginIcon| 

*This documentation is for version 1.0 of RGBToHSV (net.sf.openfx.RGBToHSV).*

Description
-----------

Convert from linear RGB to HSV color model (hue, saturation, value, as defined by A. R. Smith in 1978). H is in degrees, S and V are in the same units as RGB. No gamma correction is applied to RGB before conversion.

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

.. |pluginIcon| image:: net.sf.openfx.RGBToHSV.png
   :width: 10.0%
