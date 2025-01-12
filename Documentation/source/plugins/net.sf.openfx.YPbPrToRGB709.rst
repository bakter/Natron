.. _net.sf.openfx.YPbPrToRGB709:

YPbPrToRGB709 node
==================

*This documentation is for version 1.0 of YPbPrToRGB709 (net.sf.openfx.YPbPrToRGB709).*

Description
-----------

Convert from YPbPr color model (ITU.BT-709) to RGB. RGB is gamma-decompressed using the Rec.709 Electro-Optical Transfer Function (EOTF) after conversion.

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
