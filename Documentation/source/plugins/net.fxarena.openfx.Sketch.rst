.. _net.fxarena.openfx.Sketch:

Sketch node
===========

|pluginIcon| 

*This documentation is for version 2.2 of Sketch (net.fxarena.openfx.Sketch).*

Description
-----------

Sketch effect node.

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

+-------------------------+---------+---------+-------------------------------------------------------------------------------------------------------+
| Parameter / script name | Type    | Default | Function                                                                                              |
+=========================+=========+=========+=======================================================================================================+
| Radius / ``radius``     | Double  | 1       | Adjust radius                                                                                         |
+-------------------------+---------+---------+-------------------------------------------------------------------------------------------------------+
| Sigma / ``sigma``       | Double  | 0       | Adjust sigma                                                                                          |
+-------------------------+---------+---------+-------------------------------------------------------------------------------------------------------+
| Angle / ``angle``       | Double  | 0       | Adjust angle                                                                                          |
+-------------------------+---------+---------+-------------------------------------------------------------------------------------------------------+
| OpenMP / ``openmp``     | Boolean | Off     | Enable/Disable OpenMP support. This will enable the plugin to use as many threads as allowed by host. |
+-------------------------+---------+---------+-------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.fxarena.openfx.Sketch.png
   :width: 10.0%
