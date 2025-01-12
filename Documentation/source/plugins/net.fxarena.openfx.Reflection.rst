.. _net.fxarena.openfx.Reflection:

Reflection node
===============

|pluginIcon| 

*This documentation is for version 3.2 of Reflection (net.fxarena.openfx.Reflection).*

Description
-----------

Mirror/Reflection tranform node.

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

+----------------------------------+---------+-----------+-------------------------------------------------------------------------------------------------------+
| Parameter / script name          | Type    | Default   | Function                                                                                              |
+==================================+=========+===========+=======================================================================================================+
| Reflection offset / ``offset``   | Integer | 0         | Reflection offset                                                                                     |
+----------------------------------+---------+-----------+-------------------------------------------------------------------------------------------------------+
| Reflection spacing / ``spacing`` | Integer | 0         | Space between image and reflection                                                                    |
+----------------------------------+---------+-----------+-------------------------------------------------------------------------------------------------------+
| Reflection / ``reflection``      | Boolean | On        | Apply reflection                                                                                      |
+----------------------------------+---------+-----------+-------------------------------------------------------------------------------------------------------+
| Matte / ``matte``                | Boolean | Off       | Merge Alpha before applying effect                                                                    |
+----------------------------------+---------+-----------+-------------------------------------------------------------------------------------------------------+
| Mirror / ``mirror``              | Choice  | Undefined | | Select mirror type                                                                                  |
|                                  |         |           | | **Undefined**                                                                                       |
|                                  |         |           | | **North**                                                                                           |
|                                  |         |           | | **South**                                                                                           |
|                                  |         |           | | **East**                                                                                            |
|                                  |         |           | | **West**                                                                                            |
|                                  |         |           | | **NorthWest**                                                                                       |
|                                  |         |           | | **NorthEast**                                                                                       |
|                                  |         |           | | **SouthWest**                                                                                       |
|                                  |         |           | | **SouthEast**                                                                                       |
|                                  |         |           | | **Flip**                                                                                            |
|                                  |         |           | | **Flop**                                                                                            |
|                                  |         |           | | **Flip+Flop**                                                                                       |
+----------------------------------+---------+-----------+-------------------------------------------------------------------------------------------------------+
| OpenMP / ``openmp``              | Boolean | Off       | Enable/Disable OpenMP support. This will enable the plugin to use as many threads as allowed by host. |
+----------------------------------+---------+-----------+-------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.fxarena.openfx.Reflection.png
   :width: 10.0%
