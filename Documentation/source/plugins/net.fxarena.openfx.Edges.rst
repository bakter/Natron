.. _net.fxarena.openfx.Edges:

Edges node
==========

|pluginIcon| 

*This documentation is for version 2.0 of Edges (net.fxarena.openfx.Edges).*

Description
-----------

Edge extraction node.

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

+-----------------------------+---------+---------------+-------------------------------------------------------------------------------------------------------+
| Parameter / script name     | Type    | Default       | Function                                                                                              |
+=============================+=========+===============+=======================================================================================================+
| Width / ``width``           | Double  | 2             | Width of edges                                                                                        |
+-----------------------------+---------+---------------+-------------------------------------------------------------------------------------------------------+
| Brightness / ``brightness`` | Double  | 5             | Adjust edge brightness                                                                                |
+-----------------------------+---------+---------------+-------------------------------------------------------------------------------------------------------+
| Smoothing / ``smoothing``   | Double  | 1             | Adjust edge smoothing                                                                                 |
+-----------------------------+---------+---------------+-------------------------------------------------------------------------------------------------------+
| Grayscale / ``gray``        | Boolean | Off           | Convert to grayscale before effect                                                                    |
+-----------------------------+---------+---------------+-------------------------------------------------------------------------------------------------------+
| Kernel / ``kernel``         | Choice  | DiamondKernel | | Convolution Kernel                                                                                  |
|                             |         |               | | **BinomialKernel**                                                                                  |
|                             |         |               | | **LaplacianKernel**                                                                                 |
|                             |         |               | | **SobelKernel**                                                                                     |
|                             |         |               | | **FreiChenKernel**                                                                                  |
|                             |         |               | | **RobertsKernel**                                                                                   |
|                             |         |               | | **PrewittKernel**                                                                                   |
|                             |         |               | | **CompassKernel**                                                                                   |
|                             |         |               | | **KirschKernel**                                                                                    |
|                             |         |               | | **DiamondKernel**                                                                                   |
|                             |         |               | | **SquareKernel**                                                                                    |
|                             |         |               | | **RectangleKernel**                                                                                 |
|                             |         |               | | **OctagonKernel**                                                                                   |
|                             |         |               | | **DiskKernel**                                                                                      |
|                             |         |               | | **PlusKernel**                                                                                      |
|                             |         |               | | **CrossKernel**                                                                                     |
|                             |         |               | | **RingKernel**                                                                                      |
|                             |         |               | | **EdgesKernel**                                                                                     |
|                             |         |               | | **CornersKernel**                                                                                   |
|                             |         |               | | **DiagonalsKernel**                                                                                 |
|                             |         |               | | **LineEndsKernel**                                                                                  |
|                             |         |               | | **LineJunctionsKernel**                                                                             |
|                             |         |               | | **RidgesKernel**                                                                                    |
|                             |         |               | | **ConvexHullKernel**                                                                                |
|                             |         |               | | **ThinSEKernel**                                                                                    |
|                             |         |               | | **SkeletonKernel**                                                                                  |
|                             |         |               | | **ChebyshevKernel**                                                                                 |
|                             |         |               | | **ManhattanKernel**                                                                                 |
|                             |         |               | | **OctagonalKernel**                                                                                 |
|                             |         |               | | **EuclideanKernel**                                                                                 |
+-----------------------------+---------+---------------+-------------------------------------------------------------------------------------------------------+
| OpenMP / ``openmp``         | Boolean | Off           | Enable/Disable OpenMP support. This will enable the plugin to use as many threads as allowed by host. |
+-----------------------------+---------+---------------+-------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.fxarena.openfx.Edges.png
   :width: 10.0%
