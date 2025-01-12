.. _net.sf.openfx.Position:

Position node
=============

|pluginIcon| 

*This documentation is for version 1.0 of Position (net.sf.openfx.Position).*

Description
-----------

Translate an image by an integer number of pixels.

This plugin does not concatenate transforms.

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

+-------------------------------+---------+-----------+--------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name       | Type    | Default   | Function                                                                                                                 |
+===============================+=========+===========+==========================================================================================================================+
| Translate / ``translate``     | Double  | x: 0 y: 0 | New position of the bottom-left pixel. Rounded to the closest pixel.                                                     |
+-------------------------------+---------+-----------+--------------------------------------------------------------------------------------------------------------------------+
| Interactive / ``interactive`` | Boolean | Off       | When checked the image will be rendered whenever moving the overlay interact instead of when releasing the mouse button. |
+-------------------------------+---------+-----------+--------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.openfx.Position.png
   :width: 10.0%
