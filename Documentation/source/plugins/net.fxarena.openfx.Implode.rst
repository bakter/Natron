.. _net.fxarena.openfx.Implode:

Implode node
============

|pluginIcon| 

*This documentation is for version 2.3 of Implode (net.fxarena.openfx.Implode).*

Description
-----------

Implode transform node.

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
| Factor / ``factor``     | Double  | 0.5     | Implode image by factor                                                                               |
+-------------------------+---------+---------+-------------------------------------------------------------------------------------------------------+
| Swirl / ``swirl``       | Double  | 0       | Swirl image by degree                                                                                 |
+-------------------------+---------+---------+-------------------------------------------------------------------------------------------------------+
| Matte / ``matte``       | Boolean | Off     | Merge Alpha before applying effect                                                                    |
+-------------------------+---------+---------+-------------------------------------------------------------------------------------------------------+
| OpenMP / ``openmp``     | Boolean | Off     | Enable/Disable OpenMP support. This will enable the plugin to use as many threads as allowed by host. |
+-------------------------+---------+---------+-------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.fxarena.openfx.Implode.png
   :width: 10.0%
