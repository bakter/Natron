.. _fr.inria.openfx.OCIOCDLTransform:

OCIOCDLTransform node
=====================

|pluginIcon| 

*This documentation is for version 1.0 of OCIOCDLTransform (fr.inria.openfx.OCIOCDLTransform).*

Description
-----------

Use OpenColorIO to apply an ASC Color Decision List (CDL) grade.

The formula applied for each channel is:

out = (in \* slope + offset)^power.

The saturation is then applied to all channel using the standard rec709 saturation coefficients:

luma = 0.2126 \* inR + 0.7152 \* inG + 0.0722 \* inB

outR = Clamp( luma + sat \* (inR - luma) )

outG = Clamp( luma + sat \* (inG - luma) )

outB = Clamp( luma + sat \* (inB - luma) ).

The grade can be loaded from an ASC .ccc (Color Correction Collection) or .cc (Color Correction) file.

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

+-----------------------------------+---------+----------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name           | Type    | Default        | Function                                                                                                                                                                            |
+===================================+=========+================+=====================================================================================================================================================================================+
| Slope / ``slope``                 | Color   | r: 1 g: 1 b: 1 | ASC CDL slope                                                                                                                                                                       |
+-----------------------------------+---------+----------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Offset / ``offset``               | Color   | r: 0 g: 0 b: 0 | ASC CDL offset                                                                                                                                                                      |
+-----------------------------------+---------+----------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Power / ``power``                 | Color   | r: 1 g: 1 b: 1 | ASC CDL power                                                                                                                                                                       |
+-----------------------------------+---------+----------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Saturation / ``saturation``       | Double  | 1              | ASC CDL saturation                                                                                                                                                                  |
+-----------------------------------+---------+----------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Direction / ``direction``         | Choice  | Forward        | | Transform direction.                                                                                                                                                              |
|                                   |         |                | | **Forward (forward)**                                                                                                                                                             |
|                                   |         |                | | **Inverse (inverse)**                                                                                                                                                             |
+-----------------------------------+---------+----------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Read from file / ``readFromFile`` | Boolean | Off            | Load color correction information from the .cc or .ccc file.                                                                                                                        |
+-----------------------------------+---------+----------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| File / ``file``                   | N/A     |                | Specify the src ASC CDL file, on disk, to use for this transform. This can be either a .cc or .ccc file. If .ccc is specified, the cccid is required.                               |
+-----------------------------------+---------+----------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Reload / ``reload``               | Button  |                | Reloads specified files                                                                                                                                                             |
+-----------------------------------+---------+----------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| CCC Id / ``cccId``                | String  |                | If the source file is an ASC CDL CCC (color correction collection), this specifies the id to lookup. OpenColorIO::Contexts (envvars) are obeyed.                                    |
+-----------------------------------+---------+----------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Export / ``export``               | N/A     |                | Export this grade as a ColorCorrection XML file (.cc), which can be loaded with the OCIOFileTransform, or using a FileTransform in an OCIO config. The file must not already exist. |
+-----------------------------------+---------+----------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Enable GPU Render / ``enableGPU`` | Boolean | Off            | | Enable GPU-based OpenGL render.                                                                                                                                                   |
|                                   |         |                | | Note that GPU render is not as accurate as CPU render, so this should be enabled with care.                                                                                       |
|                                   |         |                | | If the checkbox is checked but is not enabled (i.e. it cannot be unchecked), GPU render can not be enabled or disabled from the plugin and is probably part of the host options.  |
|                                   |         |                | | If the checkbox is not checked and is not enabled (i.e. it cannot be checked), GPU render is not available on this host.                                                          |
+-----------------------------------+---------+----------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| (Un)premult / ``premult``         | Boolean | Off            | Divide the image by the alpha channel before processing, and re-multiply it afterwards. Use if the input images are premultiplied.                                                  |
+-----------------------------------+---------+----------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert``      | Boolean | Off            | When checked, the effect is fully applied where the mask is 0.                                                                                                                      |
+-----------------------------------+---------+----------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                     | Double  | 1              | Mix factor between the original and the transformed image.                                                                                                                          |
+-----------------------------------+---------+----------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: fr.inria.openfx.OCIOCDLTransform.png
   :width: 10.0%
