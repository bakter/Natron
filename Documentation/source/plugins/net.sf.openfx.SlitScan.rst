.. _net.sf.openfx.SlitScan:

SlitScan node
=============

|pluginIcon| 

*This documentation is for version 1.0 of SlitScan (net.sf.openfx.SlitScan).*

Description
-----------

Apply per-pixel retiming: the time is computed for each pixel from the retime function, which can be either a horizontal ramp, a vertical ramp, or a retime map.

The default retime function corresponds to a horizontal slit: it is a vertical ramp, which is a linear function of y, which is 0 at the center of the bottom image line, and 1 at the center of the top image line. Optionally, a vertical slit may be used (0 at the center of the leftmost image column, 1 at the center of the rightmost image column), or the optional single-channel “Retime Map” input may also be used.

This plugin requires to render many frames on input, which may require a lot of memory.

Note that the results may be on higher quality if the video is slowed fown (e.g. using slowmoVideo)

The parameters are:

- retime function (default = horizontal slit)

- offset for the retime function (default = 0)

- gain for the retime function (default = -10)

- absolute, a boolean indicating that the time map gives absolute frames rather than relative frames

- frame range, only used if the retime function is given by a retime map, because the actual frame range cannot be guessed without inspecting the retime map content (default = -10..0). If “absolute” is checked, this frame range is absolute, else it is relative to the current frame

- filter to handle time offsets that “fall between” frames. They can be mapped to the nearest frame, or interpolated between the nearest frames (corresponding to a shutter of 1 frame).

References:

- An Informal Catalogue of Slit-Scan Video Artworks and Research, Golan Levin, http://www.flong.com/texts/lists/slit_scan/

Inputs
------

+------------+-------------+----------+
| Input      | Description | Optional |
+============+=============+==========+
| Source     |             | No       |
+------------+-------------+----------+
| Retime Map |             | Yes      |
+------------+-------------+----------+

Controls
--------

.. tabularcolumns:: |>{\raggedright}p{0.2\columnwidth}|>{\raggedright}p{0.06\columnwidth}|>{\raggedright}p{0.07\columnwidth}|p{0.63\columnwidth}|

.. cssclass:: longtable

+--------------------------------------+---------+-----------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name              | Type    | Default         | Function                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
+======================================+=========+=================+=========================================================================================================================================================================================================================================================================================================================================================================================================================================================================================+
| Retime Function / ``retimeFunction`` | Choice  | Horizontal Slit | | The function that gives, for each pixel in the image, its time. The default retime function corresponds to a horizontal slit: it is a vertical ramp (a linear function of y) which is 0 at the center of the bottom image line, and 1 at the center of the top image line. Optionally, a vertical slit may be used (0 at the center of the leftmost image column, 1 at the center of the rightmost image column), or the optional single-channel “Retime Map” input may also be used. |
|                                      |         |                 | | **Horizontal Slit (horizontalslit)**: A vertical ramp (a linear function of y) which is 0 at the center of the bottom image line, and 1 at the center of the top image line.                                                                                                                                                                                                                                                                                                          |
|                                      |         |                 | | **Vertical Slit (verticalslit)**: A horizontal ramp (alinear function of x) which is 0 at the center of the leftmost image line, and 1 at the center of the rightmost image line.                                                                                                                                                                                                                                                                                                     |
|                                      |         |                 | | **Retime Map (retimemap)**: The single-channel image from the “Retime Map” input (zero if not connected).                                                                                                                                                                                                                                                                                                                                                                             |
+--------------------------------------+---------+-----------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Retime Offset / ``retimeOffset``     | Double  | 0               | Offset to the retime map.                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
+--------------------------------------+---------+-----------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Retime Gain / ``retimeGain``         | Double  | -10             | Gain applied to the retime map (after offset). With the horizontal or vertical slits, to get one line or column per frame you should use respectively (height-1) or (width-1).                                                                                                                                                                                                                                                                                                          |
+--------------------------------------+---------+-----------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Absolute / ``retimeAbsolute``        | Boolean | Off             | If checked, the retime map contains absolute time, if not it is relative to the current frame.                                                                                                                                                                                                                                                                                                                                                                                          |
+--------------------------------------+---------+-----------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Max. Frame Range / ``frameRange``    | Integer | min: -10 max: 0 | Maximum input frame range to fetch images from (may be relative or absolute, depending on the “absolute” parameter). Only used if the Retime Map is used and connected.                                                                                                                                                                                                                                                                                                                 |
+--------------------------------------+---------+-----------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Filter / ``filter``                  | Choice  | Nearest         | | How input images are combined to compute the output image.                                                                                                                                                                                                                                                                                                                                                                                                                            |
|                                      |         |                 | | **Nearest (nearest)**: Pick input image with nearest integer time.                                                                                                                                                                                                                                                                                                                                                                                                                    |
|                                      |         |                 | | **Linear (linear)**: Blend the two nearest images with linear interpolation.                                                                                                                                                                                                                                                                                                                                                                                                          |
+--------------------------------------+---------+-----------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.openfx.SlitScan.png
   :width: 10.0%
