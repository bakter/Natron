.. _net.sf.openfx.GodRays:

GodRays node
============

|pluginIcon| 

*This documentation is for version 1.0 of GodRays (net.sf.openfx.GodRays).*

Description
-----------

Average an image over a range of transforms.

This can be used to create crepuscular rays (also called God rays) by setting the scale and center parameters: scale governs the length of rays, and center should be set to the Sun or light position (which may be outside of the image).

Setting toColor to black and gamma to 1 causes an exponential decay which is very similar to the real crepuscular rays.

This can also be used to create directional blur using a fixed number of samples (as opposed to DirBlur, which uses an adaptive sampling method).

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

+--------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name              | Type    | Default             | Function                                                                                                                                        |
+======================================+=========+=====================+=================================================================================================================================================+
| Rotate / ``rotate``                  | Double  | 0                   | Rotation angle in degrees around the Center. Can also be adjusted by clicking and dragging the rotation bar in the Viewer.                      |
+--------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------+
| Scale / ``scale``                    | Double  | x: 1 y: 1           | Scale factor along the x and y axes. Can also be adjusted by clicking and dragging the outer circle or the diameter handles in the Viewer.      |
+--------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------+
| Uniform / ``uniform``                | Boolean | Off                 | Use the X scale for both directions                                                                                                             |
+--------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------+
| Skew X / ``skewX``                   | Double  | 0                   | Skew along the x axis. Can also be adjusted by clicking and dragging the skew bar in the Viewer.                                                |
+--------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------+
| Skew Y / ``skewY``                   | Double  | 0                   | Skew along the y axis.                                                                                                                          |
+--------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------+
| Skew Order / ``skewOrder``           | Choice  | XY                  | | The order in which skew transforms are applied: X then Y, or Y then X.                                                                        |
|                                      |         |                     | | **XY**                                                                                                                                        |
|                                      |         |                     | | **YX**                                                                                                                                        |
+--------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------+
| Amount / ``transformAmount``         | Double  | 1                   | Amount of transform to apply. 0 means the transform is identity, 1 means to apply the full transform.                                           |
+--------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------+
| Center / ``center``                  | Double  | x: 0.5 y: 0.5       | Center of rotation and scale.                                                                                                                   |
+--------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------+
| Reset Center / ``resetCenter``       | Button  |                     | Reset the position of the center to the center of the input region of definition                                                                |
+--------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------+
| Interactive Update / ``interactive`` | Boolean | On                  | If checked, update the parameter values during interaction with the image viewer, else update the values when pen is released.                  |
+--------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------+
| Invert / ``invert``                  | Boolean | Off                 | Invert the transform.                                                                                                                           |
+--------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------+
| Filter / ``filter``                  | Choice  | Cubic               | | Filtering algorithm - some filters may produce values outside of the initial range (*) or modify the values even if there is no movement (+). |
|                                      |         |                     | | **Impulse (impulse)**: (nearest neighbor / box) Use original values.                                                                          |
|                                      |         |                     | | **Box (box)**: Integrate the source image over the bounding box of the back-transformed pixel.                                                |
|                                      |         |                     | | **Bilinear (bilinear)**: (tent / triangle) Bilinear interpolation between original values.                                                    |
|                                      |         |                     | | **Cubic (cubic)**: (cubic spline) Some smoothing.                                                                                             |
|                                      |         |                     | | **Keys (keys)**: (Catmull-Rom / Hermite spline) Some smoothing, plus minor sharpening (*).                                                    |
|                                      |         |                     | | **Simon (simon)**: Some smoothing, plus medium sharpening (*).                                                                                |
|                                      |         |                     | | **Rifman (rifman)**: Some smoothing, plus significant sharpening (*).                                                                         |
|                                      |         |                     | | **Mitchell (mitchell)**: Some smoothing, plus blurring to hide pixelation (*+).                                                               |
|                                      |         |                     | | **Parzen (parzen)**: (cubic B-spline) Greatest smoothing of all filters (+).                                                                  |
|                                      |         |                     | | **Notch (notch)**: Flat smoothing (which tends to hide moire’ patterns) (+).                                                                  |
+--------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------+
| Clamp / ``clamp``                    | Boolean | Off                 | Clamp filter output within the original range - useful to avoid negative values in mattes                                                       |
+--------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------+
| Black outside / ``black_outside``    | Boolean | Off                 | Fill the area outside the source image with black                                                                                               |
+--------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------+
| From Color / ``fromColor``           | Color   | r: 1 g: 1 b: 1 a: 1 | Color by which the initial image is multiplied.                                                                                                 |
+--------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------+
| To Color / ``toColor``               | Color   | r: 1 g: 1 b: 1 a: 1 | Color by which the final image is multiplied.                                                                                                   |
+--------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------+
| Gamma / ``gamma``                    | Color   | r: 1 g: 1 b: 1 a: 1 | Gamma space in which the colors are interpolated. Higher values yield brighter intermediate images.                                             |
+--------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------+
| Steps / ``steps``                    | Integer | 5                   | The number of intermediate images is 2^steps, i.e. 32 for steps=5.                                                                              |
+--------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------+
| Max / ``max``                        | Boolean | Off                 | Output the brightest value at each pixel rather than the average.                                                                               |
+--------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert``         | Boolean | Off                 | When checked, the effect is fully applied where the mask is 0.                                                                                  |
+--------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                        | Double  | 1                   | Mix factor between the original and the transformed image.                                                                                      |
+--------------------------------------+---------+---------------------+-------------------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.openfx.GodRays.png
   :width: 10.0%
