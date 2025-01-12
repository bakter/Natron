.. _net.sf.openfx.NoOpPlugin:

NoOp node
=========

|pluginIcon| 

*This documentation is for version 2.0 of NoOp (net.sf.openfx.NoOpPlugin).*

Description
-----------

Copies the input to the ouput.

This effect does not modify the actual content of the image, but can be used to modify the metadata associated with the clip (premultiplication, field order, format, pixel aspect ratio, frame rate).

This plugin concatenates transforms.

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

+--------------------------------------------------------+---------+---------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name                                | Type    | Default       | Function                                                                                                                                                   |
+========================================================+=========+===============+============================================================================================================================================================+
| Force Copy / ``forceCopy``                             | Boolean | Off           | Force copy from input to output                                                                                                                            |
+--------------------------------------------------------+---------+---------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Supports Tiles / ``supportsTiles``                     | Boolean | On            | Does the plugin support image tiling, i.e. rendering only a subset of the full region of definition? Only supported on OpenFX 1.4 hosts.                   |
+--------------------------------------------------------+---------+---------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Set Premultiplication / ``setPremult``                 | Boolean | Off           | Set the premultiplication state of the output clip, without modifying the raw content. Use the Premult or UnPremult plu-gins to affect the content.        |
+--------------------------------------------------------+---------+---------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Output Premultiplication / ``outputPremult``           | Choice  | PreMultiplied | | Premultiplication state of the output clip.                                                                                                              |
|                                                        |         |               | | **Opaque**                                                                                                                                               |
|                                                        |         |               | | **PreMultiplied**                                                                                                                                        |
|                                                        |         |               | | **UnPreMultiplied**                                                                                                                                      |
+--------------------------------------------------------+---------+---------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Set Format / ``setFormat``                             | Boolean | Off           | Set the format of the output clip, without modifying the raw content.                                                                                      |
+--------------------------------------------------------+---------+---------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Extent / ``extent``                                    | Choice  | Format        | | Extent (size and offset) of the output.                                                                                                                  |
|                                                        |         |               | | **Format (format)**: Use a pre-defined image format.                                                                                                     |
|                                                        |         |               | | **Size (size)**: Use a specific extent (size and offset).                                                                                                |
|                                                        |         |               | | **Project (project)**: Use the project extent (size and offset).                                                                                         |
+--------------------------------------------------------+---------+---------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Center / ``recenter``                                  | Button  |               | Centers the region of definition to the input region of definition. If there is no input, then the region of definition is centered to the project window. |
+--------------------------------------------------------+---------+---------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Format / ``NatronParamFormatChoice``                   | Choice  | HD 1920x1080  | | The output format                                                                                                                                        |
|                                                        |         |               | | **PC_Video 640x480 (PC_Video)**                                                                                                                          |
|                                                        |         |               | | **NTSC 720x486 0.91 (NTSC)**                                                                                                                             |
|                                                        |         |               | | **PAL 720x576 1.09 (PAL)**                                                                                                                               |
|                                                        |         |               | | **NTSC_16:9 720x486 1.21 (NTSC_16:9)**                                                                                                                   |
|                                                        |         |               | | **PAL_16:9 720x576 1.46 (PAL_16:9)**                                                                                                                     |
|                                                        |         |               | | **HD_720 1280x720 (HD_720)**                                                                                                                             |
|                                                        |         |               | | **HD 1920x1080 (HD)**                                                                                                                                    |
|                                                        |         |               | | **UHD_4K 3840x2160 (UHD_4K)**                                                                                                                            |
|                                                        |         |               | | **1K_Super_35(full-ap) 1024x778 (1K_Super_35(full-ap))**                                                                                                 |
|                                                        |         |               | | **1K_Cinemascope 914x778 2.00 (1K_Cinemascope)**                                                                                                         |
|                                                        |         |               | | **2K_Super_35(full-ap) 2048x1556 (2K_Super_35(full-ap))**                                                                                                |
|                                                        |         |               | | **2K_Cinemascope 1828x1556 2.00 (2K_Cinemascope)**                                                                                                       |
|                                                        |         |               | | **2K_DCP 2048x1080 (2K_DCP)**                                                                                                                            |
|                                                        |         |               | | **4K_Super_35(full-ap) 4096x3112 (4K_Super_35(full-ap))**                                                                                                |
|                                                        |         |               | | **4K_Cinemascope 3656x3112 2.00 (4K_Cinemascope)**                                                                                                       |
|                                                        |         |               | | **4K_DCP 4096x2160 (4K_DCP)**                                                                                                                            |
|                                                        |         |               | | **square_256 256x256 (square_256)**                                                                                                                      |
|                                                        |         |               | | **square_512 512x512 (square_512)**                                                                                                                      |
|                                                        |         |               | | **square_1K 1024x1024 (square_1K)**                                                                                                                      |
|                                                        |         |               | | **square_2K 2048x2048 (square_2K)**                                                                                                                      |
+--------------------------------------------------------+---------+---------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Bottom Left / ``bottomLeft``                           | Double  | x: 0 y: 0     | Coordinates of the bottom left corner of the size rectangle.                                                                                               |
+--------------------------------------------------------+---------+---------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Size / ``size``                                        | Double  | w: 1 h: 1     | Width and height of the size rectangle.                                                                                                                    |
+--------------------------------------------------------+---------+---------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Set Pixel Aspect Ratio / ``setPixelAspectRatio``       | Boolean | Off           | Set the pixel aspect ratio of the output clip, without modifying the raw content.                                                                          |
+--------------------------------------------------------+---------+---------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Output Pixel Aspect Ratio / ``outputPixelAspectRatio`` | Double  | 1             | Pixel aspect ratio of the output clip.                                                                                                                     |
+--------------------------------------------------------+---------+---------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Set Frame Rate / ``setFrameRate``                      | Boolean | Off           | Set the frame rate state of the output clip, without modifying the raw content.                                                                            |
+--------------------------------------------------------+---------+---------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Output Frame Rate / ``outputFrameRate``                | Double  | 24            | Frame rate of the output clip.                                                                                                                             |
+--------------------------------------------------------+---------+---------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Clip Info... / ``clipInfo``                            | Button  |               | Display information about the inputs                                                                                                                       |
+--------------------------------------------------------+---------+---------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.openfx.NoOpPlugin.png
   :width: 10.0%
