.. _net.sf.openfx.AdjustRoDPlugin:

AdjustRoD node
==============

|pluginIcon| 

*This documentation is for version 1.1 of AdjustRoD (net.sf.openfx.AdjustRoDPlugin).*

Description
-----------

Enlarges the input image by a given amount of black and transparent pixels.

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

+----------------------------------+--------+-----------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name          | Type   | Default   | Function                                                                                                                                                                                                                                                                                                              |
+==================================+========+===========+=======================================================================================================================================================================================================================================================================================================================+
| Add Pixels / ``addPixels``       | Double | w: 0 h: 0 | How many pixels to add on each side for both dimensions (width/height)                                                                                                                                                                                                                                                |
+----------------------------------+--------+-----------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Border Conditions / ``boundary`` | Choice | Nearest   | | Specifies how pixel values are computed out of the image domain. This mostly affects values at the boundary of the image. If the image represents intensities, Nearest (Neumann) conditions should be used. If the image represents gradients or derivatives, Black (Dirichlet) boundary conditions should be used. |
|                                  |        |           | | **Black (black)**: Dirichlet boundary condition: pixel values out of the image domain are zero.                                                                                                                                                                                                                     |
|                                  |        |           | | **Nearest (nearest)**: Neumann boundary condition: pixel values out of the image domain are those of the closest pixel location in the image domain.                                                                                                                                                                |
+----------------------------------+--------+-----------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.openfx.AdjustRoDPlugin.png
   :width: 10.0%
