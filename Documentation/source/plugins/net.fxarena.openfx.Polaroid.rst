.. _net.fxarena.openfx.Polaroid:

Polaroid node
=============

|pluginIcon| 

*This documentation is for version 1.4 of Polaroid (net.fxarena.openfx.Polaroid).*

Description
-----------

Polaroid image effect node.

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

+-------------------------+---------+------------+-------------------------------------------------------------------------------------------------------+
| Parameter / script name | Type    | Default    | Function                                                                                              |
+=========================+=========+============+=======================================================================================================+
| Angle / ``angle``       | Double  | 5          | Adjust polaroid angle                                                                                 |
+-------------------------+---------+------------+-------------------------------------------------------------------------------------------------------+
| Caption / ``caption``   | String  | Enter text | Add caption to polaroid                                                                               |
+-------------------------+---------+------------+-------------------------------------------------------------------------------------------------------+
| Font family / ``font``  | Choice  |            | The name of the font to be used                                                                       |
+-------------------------+---------+------------+-------------------------------------------------------------------------------------------------------+
| Font size / ``size``    | Integer | 64         | The height of the characters to render in pixels                                                      |
+-------------------------+---------+------------+-------------------------------------------------------------------------------------------------------+
| OpenMP / ``openmp``     | Boolean | Off        | Enable/Disable OpenMP support. This will enable the plugin to use as many threads as allowed by host. |
+-------------------------+---------+------------+-------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.fxarena.openfx.Polaroid.png
   :width: 10.0%
