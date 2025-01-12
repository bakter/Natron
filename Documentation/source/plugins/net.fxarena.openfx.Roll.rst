.. _net.fxarena.openfx.Roll:

Roll node
=========

|pluginIcon| 

*This documentation is for version 2.9 of Roll (net.fxarena.openfx.Roll).*

Description
-----------

Roll effect using ImageMagick.

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

+----------------------------+---------+-------------+-------------------------------------------------------------------------------------------------------+
| Parameter / script name    | Type    | Default     | Function                                                                                              |
+============================+=========+=============+=======================================================================================================+
| OpenMP / ``openmp``        | Boolean | Off         | Enable/Disable OpenMP support. This will enable the plugin to use as many threads as allowed by host. |
+----------------------------+---------+-------------+-------------------------------------------------------------------------------------------------------+
| Matte / ``matte``          | Boolean | Off         | Merge Alpha before applying effect.                                                                   |
+----------------------------+---------+-------------+-------------------------------------------------------------------------------------------------------+
| Virtual Pixel / ``vpixel`` | Choice  | Transparent | | Virtual Pixel Method.                                                                               |
|                            |         |             | | **Undefined**                                                                                       |
|                            |         |             | | **Background**                                                                                      |
|                            |         |             | | **Black**                                                                                           |
|                            |         |             | | **CheckerTile**                                                                                     |
|                            |         |             | | **Dither**                                                                                          |
|                            |         |             | | **Edge**                                                                                            |
|                            |         |             | | **Gray**                                                                                            |
|                            |         |             | | **HorizontalTile**                                                                                  |
|                            |         |             | | **HorizontalTileEdge**                                                                              |
|                            |         |             | | **Mirror**                                                                                          |
|                            |         |             | | **Random**                                                                                          |
|                            |         |             | | **Tile**                                                                                            |
|                            |         |             | | **Transparent**                                                                                     |
|                            |         |             | | **VerticalTile**                                                                                    |
|                            |         |             | | **VerticalTileEdge**                                                                                |
|                            |         |             | | **White**                                                                                           |
+----------------------------+---------+-------------+-------------------------------------------------------------------------------------------------------+
| X / ``x``                  | Double  | 0           | Adjust roll X                                                                                         |
+----------------------------+---------+-------------+-------------------------------------------------------------------------------------------------------+
| Y / ``y``                  | Double  | 0           | Adjust roll Y                                                                                         |
+----------------------------+---------+-------------+-------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.fxarena.openfx.Roll.png
   :width: 10.0%
