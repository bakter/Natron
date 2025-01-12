.. _eu.cimg.ErodeBlur:

ErodeBlur node
==============

*This documentation is for version 4.0 of ErodeBlur (eu.cimg.ErodeBlur).*

Description
-----------

Performs an operation that looks like an erosion or a dilation by smoothing the image and then remapping the values of the result.

The image is first smoothed by a triangle filter of width 2*abs(size).

Now suppose the image is a 0-1 step edge (I=0 for x less than 0, I=1 for x greater than 0). The intensities are linearly remapped so that the value at x=size-0.5 is mapped to 0 and the value at x=size+0.5 is mapped to 1.

This process usually works well for mask images (i.e. images which are either 0 or 1), but may give strange results on images with real intensities, where another Erode filter has to be used.

CImg is a free, open-source library distributed under the CeCILL-C (close to the GNU LGPL) or CeCILL (compatible with the GNU GPL) licenses. It can be used in commercial applications (see http://cimg.eu).

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

+-----------------------------------+---------+---------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name           | Type    | Default | Function                                                                                                                                                                                                                                    |
+===================================+=========+=========+=============================================================================================================================================================================================================================================+
| Size / ``size``                   | Double  | -1      | How much to shrink the black and white mask, in pixels (can be negative to dilate).                                                                                                                                                         |
+-----------------------------------+---------+---------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Blur / ``blur``                   | Double  | 0       | Soften the borders of the generated mask.                                                                                                                                                                                                   |
+-----------------------------------+---------+---------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Expand RoD / ``expandRoD``        | Boolean | On      | Expand the source region of definition by 1.5*size (3.6*sigma).                                                                                                                                                                             |
+-----------------------------------+---------+---------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Crop To Format / ``cropToFormat`` | Boolean | On      | If the source is inside the format and the effect extends it outside of the format, crop it to avoid unnecessary calculations. To avoid unwanted crops, only the borders that were inside of the format in the source clip will be cropped. |
+-----------------------------------+---------+---------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| (Un)premult / ``premult``         | Boolean | Off     | Divide the image by the alpha channel before processing, and re-multiply it afterwards. Use if the input images are premultiplied.                                                                                                          |
+-----------------------------------+---------+---------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert``      | Boolean | Off     | When checked, the effect is fully applied where the mask is 0.                                                                                                                                                                              |
+-----------------------------------+---------+---------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                     | Double  | 1       | Mix factor between the original and the transformed image.                                                                                                                                                                                  |
+-----------------------------------+---------+---------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
