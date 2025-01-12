.. _net.sf.openfx.DirBlur:

DirBlur node
============

|pluginIcon| 

*This documentation is for version 1.0 of DirBlur (net.sf.openfx.DirBlur).*

Description
-----------

Apply directional blur to an image.

This plugin concatenates transforms upstream.

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

+--------------------------------------+---------+---------------+----------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name              | Type    | Default       | Function                                                                                                                                           |
+======================================+=========+===============+====================================================================================================================================================+
| Translate / ``translate``            | Double  | x: 0 y: 0     | Translation along the x and y axes in pixels. Can also be adjusted by clicking and dragging the center handle in the Viewer.                       |
+--------------------------------------+---------+---------------+----------------------------------------------------------------------------------------------------------------------------------------------------+
| Rotate / ``rotate``                  | Double  | 0             | Rotation angle in degrees around the Center. Can also be adjusted by clicking and dragging the rotation bar in the Viewer.                         |
+--------------------------------------+---------+---------------+----------------------------------------------------------------------------------------------------------------------------------------------------+
| Scale / ``scale``                    | Double  | x: 1 y: 1     | Scale factor along the x and y axes. Can also be adjusted by clicking and dragging the outer circle or the diameter handles in the Viewer.         |
+--------------------------------------+---------+---------------+----------------------------------------------------------------------------------------------------------------------------------------------------+
| Uniform / ``uniform``                | Boolean | Off           | Use the X scale for both directions                                                                                                                |
+--------------------------------------+---------+---------------+----------------------------------------------------------------------------------------------------------------------------------------------------+
| Skew X / ``skewX``                   | Double  | 0             | Skew along the x axis. Can also be adjusted by clicking and dragging the skew bar in the Viewer.                                                   |
+--------------------------------------+---------+---------------+----------------------------------------------------------------------------------------------------------------------------------------------------+
| Skew Y / ``skewY``                   | Double  | 0             | Skew along the y axis.                                                                                                                             |
+--------------------------------------+---------+---------------+----------------------------------------------------------------------------------------------------------------------------------------------------+
| Skew Order / ``skewOrder``           | Choice  | XY            | | The order in which skew transforms are applied: X then Y, or Y then X.                                                                           |
|                                      |         |               | | **XY**                                                                                                                                           |
|                                      |         |               | | **YX**                                                                                                                                           |
+--------------------------------------+---------+---------------+----------------------------------------------------------------------------------------------------------------------------------------------------+
| Amount / ``transformAmount``         | Double  | 1             | Amount of transform to apply. 0 means the transform is identity, 1 means to apply the full transform.                                              |
+--------------------------------------+---------+---------------+----------------------------------------------------------------------------------------------------------------------------------------------------+
| Center / ``center``                  | Double  | x: 0.5 y: 0.5 | Center of rotation and scale.                                                                                                                      |
+--------------------------------------+---------+---------------+----------------------------------------------------------------------------------------------------------------------------------------------------+
| Reset Center / ``resetCenter``       | Button  |               | Reset the position of the center to the center of the input region of definition                                                                   |
+--------------------------------------+---------+---------------+----------------------------------------------------------------------------------------------------------------------------------------------------+
| Interactive Update / ``interactive`` | Boolean | On            | If checked, update the parameter values during interaction with the image viewer, else update the values when pen is released.                     |
+--------------------------------------+---------+---------------+----------------------------------------------------------------------------------------------------------------------------------------------------+
| Invert / ``invert``                  | Boolean | Off           | Invert the transform.                                                                                                                              |
+--------------------------------------+---------+---------------+----------------------------------------------------------------------------------------------------------------------------------------------------+
| Filter / ``filter``                  | Choice  | Cubic         | | Filtering algorithm - some filters may produce values outside of the initial range (*) or modify the values even if there is no movement (+).    |
|                                      |         |               | | **Impulse (impulse)**: (nearest neighbor / box) Use original values.                                                                             |
|                                      |         |               | | **Box (box)**: Integrate the source image over the bounding box of the back-transformed pixel.                                                   |
|                                      |         |               | | **Bilinear (bilinear)**: (tent / triangle) Bilinear interpolation between original values.                                                       |
|                                      |         |               | | **Cubic (cubic)**: (cubic spline) Some smoothing.                                                                                                |
|                                      |         |               | | **Keys (keys)**: (Catmull-Rom / Hermite spline) Some smoothing, plus minor sharpening (*).                                                       |
|                                      |         |               | | **Simon (simon)**: Some smoothing, plus medium sharpening (*).                                                                                   |
|                                      |         |               | | **Rifman (rifman)**: Some smoothing, plus significant sharpening (*).                                                                            |
|                                      |         |               | | **Mitchell (mitchell)**: Some smoothing, plus blurring to hide pixelation (*+).                                                                  |
|                                      |         |               | | **Parzen (parzen)**: (cubic B-spline) Greatest smoothing of all filters (+).                                                                     |
|                                      |         |               | | **Notch (notch)**: Flat smoothing (which tends to hide moire’ patterns) (+).                                                                     |
+--------------------------------------+---------+---------------+----------------------------------------------------------------------------------------------------------------------------------------------------+
| Clamp / ``clamp``                    | Boolean | Off           | Clamp filter output within the original range - useful to avoid negative values in mattes                                                          |
+--------------------------------------+---------+---------------+----------------------------------------------------------------------------------------------------------------------------------------------------+
| Black outside / ``black_outside``    | Boolean | Off           | Fill the area outside the source image with black                                                                                                  |
+--------------------------------------+---------+---------------+----------------------------------------------------------------------------------------------------------------------------------------------------+
| Motion Blur / ``motionBlur``         | Double  | 1             | Quality of motion blur rendering. 0 disables motion blur, 1 is a good value. Increasing this slows down rendering.                                 |
+--------------------------------------+---------+---------------+----------------------------------------------------------------------------------------------------------------------------------------------------+
| Amount / ``amount``                  | Double  | 1             | Amount of blur transform to apply. A value of 1 means to apply the full transform range. A value of 0 means to apply no blur at all. Default is 1. |
+--------------------------------------+---------+---------------+----------------------------------------------------------------------------------------------------------------------------------------------------+
| Centered / ``centered``              | Boolean | Off           | When checked, apply directional blur symmetrically arount the neutral position.                                                                    |
+--------------------------------------+---------+---------------+----------------------------------------------------------------------------------------------------------------------------------------------------+
| Fading / ``fading``                  | Double  | 0             | Controls the fading function. A value of 1 corresponds to linear fading. A value of 0 disables fading. Default is 0.                               |
+--------------------------------------+---------+---------------+----------------------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert``         | Boolean | Off           | When checked, the effect is fully applied where the mask is 0.                                                                                     |
+--------------------------------------+---------+---------------+----------------------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                        | Double  | 1             | Mix factor between the original and the transformed image.                                                                                         |
+--------------------------------------+---------+---------------+----------------------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.openfx.DirBlur.png
   :width: 10.0%
