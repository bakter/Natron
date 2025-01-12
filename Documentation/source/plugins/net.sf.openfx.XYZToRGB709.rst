.. _net.sf.openfx.XYZToRGB709:

XYZToRGB709 node
================

|pluginIcon| 

*This documentation is for version 1.0 of XYZToRGB709 (net.sf.openfx.XYZToRGB709).*

Description
-----------

Convert from XYZ color model to RGB (Rec.709 with D65 illuminant). X, Y and Z are in the same units as RGB.

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

+-------------------------+---------+---------+---------------------------------------------------------------------------------------------------+
| Parameter / script name | Type    | Default | Function                                                                                          |
+=========================+=========+=========+===================================================================================================+
| Premult / ``premult``   | Boolean | Off     | Multiply the image by the alpha channel after processing. Use to get premultiplied output images. |
+-------------------------+---------+---------+---------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.openfx.XYZToRGB709.png
   :width: 10.0%
