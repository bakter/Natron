.. _net.sf.openfx.RGB709ToLab:

RGB709ToLab node
================

|pluginIcon| 

*This documentation is for version 1.0 of RGB709ToLab (net.sf.openfx.RGB709ToLab).*

Description
-----------

Convert from RGB (Rec.709 with D65 illuminant) to L*a*b color model. L*a*b coordinates are divided by 100 for better visualization.

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

.. |pluginIcon| image:: net.sf.openfx.RGB709ToLab.png
   :width: 10.0%
