.. _fr.inria.openfx.OCIODisplay:

OCIODisplay node
================

|pluginIcon| 

*This documentation is for version 1.0 of OCIODisplay (fr.inria.openfx.OCIODisplay).*

Description
-----------

Uses the OpenColorIO library to apply a colorspace conversion to an image sequence, so that it can be accurately represented on a specific display device.

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

+--------------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name                    | Type    | Default | Function                                                                                                                                                                           |
+============================================+=========+=========+====================================================================================================================================================================================+
| OCIO Config File / ``ocioConfigFile``      | N/A     |         | OpenColorIO configuration file                                                                                                                                                     |
+--------------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Input Colorspace / ``ocioInputSpaceIndex`` | Choice  |         | Input data is taken to be in this colorspace.                                                                                                                                      |
+--------------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Display Device / ``displayIndex``          | Choice  |         | Specifies the display device that will be used to view the sequence.                                                                                                               |
+--------------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| View Transform / ``viewIndex``             | Choice  |         | Specifies the display transform to apply to the scene or image.                                                                                                                    |
+--------------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Gain / ``gain``                            | Double  | 1       | Exposure adjustment, in scene-linear, prior to the display transform.                                                                                                              |
+--------------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Gamma / ``gamma``                          | Double  | 1       | Gamma correction applied after the display transform.                                                                                                                              |
+--------------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Channel View / ``channelSelector``         | Choice  | RGB     | | Specify which channels to view (prior to the display transform).                                                                                                                 |
|                                            |         |         | | **RGB (rgb)**: Color.                                                                                                                                                            |
|                                            |         |         | | **R (r)**: Red.                                                                                                                                                                  |
|                                            |         |         | | **G (g)**: Green.                                                                                                                                                                |
|                                            |         |         | | **B (b)**: Blue.                                                                                                                                                                 |
|                                            |         |         | | **A (a)**: Alpha.                                                                                                                                                                |
|                                            |         |         | | **Luminance (l)**: Luma                                                                                                                                                          |
+--------------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Enable GPU Render / ``enableGPU``          | Boolean | Off     | | Enable GPU-based OpenGL render.                                                                                                                                                  |
|                                            |         |         | | Note that GPU render is not as accurate as CPU render, so this should be enabled with care.                                                                                      |
|                                            |         |         | | If the checkbox is checked but is not enabled (i.e. it cannot be unchecked), GPU render can not be enabled or disabled from the plugin and is probably part of the host options. |
|                                            |         |         | | If the checkbox is not checked and is not enabled (i.e. it cannot be checked), GPU render is not available on this host.                                                         |
+--------------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| key1 / ``key1``                            | String  |         | | OCIO Contexts allow you to apply specific LUTs or grades to different shots.                                                                                                     |
|                                            |         |         | | Here you can specify the context name (key) and its corresponding value.                                                                                                         |
|                                            |         |         | | Full details of how to set up contexts and add them to your config can be found in the OpenColorIO documentation:                                                                |
|                                            |         |         | | http://opencolorio.org/userguide/contexts.html                                                                                                                                   |
+--------------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| value1 / ``value1``                        | String  |         | | OCIO Contexts allow you to apply specific LUTs or grades to different shots.                                                                                                     |
|                                            |         |         | | Here you can specify the context name (key) and its corresponding value.                                                                                                         |
|                                            |         |         | | Full details of how to set up contexts and add them to your config can be found in the OpenColorIO documentation:                                                                |
|                                            |         |         | | http://opencolorio.org/userguide/contexts.html                                                                                                                                   |
+--------------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| key2 / ``key2``                            | String  |         | | OCIO Contexts allow you to apply specific LUTs or grades to different shots.                                                                                                     |
|                                            |         |         | | Here you can specify the context name (key) and its corresponding value.                                                                                                         |
|                                            |         |         | | Full details of how to set up contexts and add them to your config can be found in the OpenColorIO documentation:                                                                |
|                                            |         |         | | http://opencolorio.org/userguide/contexts.html                                                                                                                                   |
+--------------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| value2 / ``value2``                        | String  |         | | OCIO Contexts allow you to apply specific LUTs or grades to different shots.                                                                                                     |
|                                            |         |         | | Here you can specify the context name (key) and its corresponding value.                                                                                                         |
|                                            |         |         | | Full details of how to set up contexts and add them to your config can be found in the OpenColorIO documentation:                                                                |
|                                            |         |         | | http://opencolorio.org/userguide/contexts.html                                                                                                                                   |
+--------------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| key3 / ``key3``                            | String  |         | | OCIO Contexts allow you to apply specific LUTs or grades to different shots.                                                                                                     |
|                                            |         |         | | Here you can specify the context name (key) and its corresponding value.                                                                                                         |
|                                            |         |         | | Full details of how to set up contexts and add them to your config can be found in the OpenColorIO documentation:                                                                |
|                                            |         |         | | http://opencolorio.org/userguide/contexts.html                                                                                                                                   |
+--------------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| value3 / ``value3``                        | String  |         | | OCIO Contexts allow you to apply specific LUTs or grades to different shots.                                                                                                     |
|                                            |         |         | | Here you can specify the context name (key) and its corresponding value.                                                                                                         |
|                                            |         |         | | Full details of how to set up contexts and add them to your config can be found in the OpenColorIO documentation:                                                                |
|                                            |         |         | | http://opencolorio.org/userguide/contexts.html                                                                                                                                   |
+--------------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| key4 / ``key4``                            | String  |         | | OCIO Contexts allow you to apply specific LUTs or grades to different shots.                                                                                                     |
|                                            |         |         | | Here you can specify the context name (key) and its corresponding value.                                                                                                         |
|                                            |         |         | | Full details of how to set up contexts and add them to your config can be found in the OpenColorIO documentation:                                                                |
|                                            |         |         | | http://opencolorio.org/userguide/contexts.html                                                                                                                                   |
+--------------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| value4 / ``value4``                        | String  |         | | OCIO Contexts allow you to apply specific LUTs or grades to different shots.                                                                                                     |
|                                            |         |         | | Here you can specify the context name (key) and its corresponding value.                                                                                                         |
|                                            |         |         | | Full details of how to set up contexts and add them to your config can be found in the OpenColorIO documentation:                                                                |
|                                            |         |         | | http://opencolorio.org/userguide/contexts.html                                                                                                                                   |
+--------------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| OCIO config help... / ``ocioHelpDisplays`` | Button  |         | Help about the OpenColorIO configuration.                                                                                                                                          |
+--------------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| (Un)premult / ``premult``                  | Boolean | Off     | Divide the image by the alpha channel before processing, and re-multiply it afterwards. Use if the input images are premultiplied.                                                 |
+--------------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: fr.inria.openfx.OCIODisplay.png
   :width: 10.0%
