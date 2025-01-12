.. _fr.inria.openfx.OCIOFileTransform:

OCIOFileTransform node
======================

|pluginIcon| 

*This documentation is for version 1.0 of OCIOFileTransform (fr.inria.openfx.OCIOFileTransform).*

Description
-----------

Use OpenColorIO to apply a transform loaded from the given file.

This is usually a 1D or 3D LUT file, but can be other file-based transform, for example an ASC ColorCorrection XML file.

Note that the file’s transform is applied with no special input/output colorspace handling - so if the file expects log-encoded pixels, but you apply the node to a linear image, you will get incorrect results.

Supported formats:

.3dl (flame)

.3dl (lustre)

.ccc (ColorCorrectionCollection)

.cdl (ColorDecisionList)

.cc (ColorCorrection)

.csp (cinespace)

.lut (houdini)

.itx (iridas_itx)

.cube (iridas_cube)

.look (iridas_look)

.mga (pandora_mga)

.m3d (pandora_m3d)

.spi1d (spi1d)

.spi3d (spi3d)

.spimtx (spimtx)

.cub (truelight)

.vf (nukevf)

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

+-----------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name           | Type    | Default | Function                                                                                                                                                                           |
+===================================+=========+=========+====================================================================================================================================================================================+
| File / ``file``                   | N/A     |         | | File containing the transform.                                                                                                                                                   |
|                                   |         |         | |                                                                                                                                                                                  |
|                                   |         |         | | Supported formats:                                                                                                                                                               |
|                                   |         |         | |                                                                                                                                                                                  |
|                                   |         |         | | .3dl (flame)                                                                                                                                                                     |
|                                   |         |         | | .3dl (lustre)                                                                                                                                                                    |
|                                   |         |         | | .ccc (ColorCorrectionCollection)                                                                                                                                                 |
|                                   |         |         | | .cdl (ColorDecisionList)                                                                                                                                                         |
|                                   |         |         | | .cc (ColorCorrection)                                                                                                                                                            |
|                                   |         |         | | .csp (cinespace)                                                                                                                                                                 |
|                                   |         |         | | .lut (houdini)                                                                                                                                                                   |
|                                   |         |         | | .itx (iridas_itx)                                                                                                                                                                |
|                                   |         |         | | .cube (iridas_cube)                                                                                                                                                              |
|                                   |         |         | | .look (iridas_look)                                                                                                                                                              |
|                                   |         |         | | .mga (pandora_mga)                                                                                                                                                               |
|                                   |         |         | | .m3d (pandora_m3d)                                                                                                                                                               |
|                                   |         |         | | .spi1d (spi1d)                                                                                                                                                                   |
|                                   |         |         | | .spi3d (spi3d)                                                                                                                                                                   |
|                                   |         |         | | .spimtx (spimtx)                                                                                                                                                                 |
|                                   |         |         | | .cub (truelight)                                                                                                                                                                 |
|                                   |         |         | | .vf (nukevf)                                                                                                                                                                     |
+-----------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Reload / ``reload``               | Button  |         | Reloads specified files                                                                                                                                                            |
+-----------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Direction / ``direction``         | Choice  | Forward | | Transform direction.                                                                                                                                                             |
|                                   |         |         | | **Forward (forward)**                                                                                                                                                            |
|                                   |         |         | | **Inverse (inverse)**                                                                                                                                                            |
+-----------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Interpolation / ``interpolation`` | Choice  | Linear  | | Interpolation method. For files that are not LUTs (mtx, etc) this is ignored.                                                                                                    |
|                                   |         |         | | **Nearest (nearest)**                                                                                                                                                            |
|                                   |         |         | | **Linear (linear)**                                                                                                                                                              |
|                                   |         |         | | **Tetrahedral (tetrahedral)**                                                                                                                                                    |
|                                   |         |         | | **Best (best)**                                                                                                                                                                  |
+-----------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Enable GPU Render / ``enableGPU`` | Boolean | Off     | | Enable GPU-based OpenGL render.                                                                                                                                                  |
|                                   |         |         | | Note that GPU render is not as accurate as CPU render, so this should be enabled with care.                                                                                      |
|                                   |         |         | | If the checkbox is checked but is not enabled (i.e. it cannot be unchecked), GPU render can not be enabled or disabled from the plugin and is probably part of the host options. |
|                                   |         |         | | If the checkbox is not checked and is not enabled (i.e. it cannot be checked), GPU render is not available on this host.                                                         |
+-----------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| (Un)premult / ``premult``         | Boolean | Off     | Divide the image by the alpha channel before processing, and re-multiply it afterwards. Use if the input images are premultiplied.                                                 |
+-----------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert``      | Boolean | Off     | When checked, the effect is fully applied where the mask is 0.                                                                                                                     |
+-----------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                     | Double  | 1       | Mix factor between the original and the transformed image.                                                                                                                         |
+-----------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: fr.inria.openfx.OCIOFileTransform.png
   :width: 10.0%
