.. _eu.cimg.EdgeExtend:

EdgeExtend node
===============

|pluginIcon| 

*This documentation is for version 4.0 of EdgeExtend (eu.cimg.EdgeExtend).*

Description
-----------

Fill a matte (i.e. a non-opaque color image with an alpha channel) by extending the edges of the matte. This effect does nothing an an opaque image.

If the input matte comes from a keyer, the alpha channel of the matte should be first eroded by a small amount to remove pixels containing mixed foreground/background colors. If not, these mixed colors may be extended instead of the pure foreground colors.

The filling process works by iteratively blurring the image, and merging the non-blurred image over the image to get to the next iteration. There are exactly ‘Slices’ such operations. The blur size at each iteration is linearly increasing.

‘Size’ is thus the total size of the edge extension, and ‘Slices’ is an indicator of the precision: the more slices there are, the sharper is the final image near the original edges.

Optionally, the image can be multiplied by the alpha channel on input (premultiplied), and divided by the alpha channel on output (unpremultiplied), so that if RGB contain an image and Alpha contains a mask, the output is an image where the RGB is smeared from the non-zero areas of the mask to the zero areas of the same mask.

The ‘Size’ parameter gives the size of the largest blur kernel, ‘Count’ gives the number of blur kernels, and ‘Ratio’ gives the ratio between consecutive blur kernel sizes. The size of the smallest blur kernel is thus ‘Size’/‘Ratio’^(‘Count’-1)

To get the classical single unpremult-blur-premult, use ‘Count’=1 and set the size to the size of the blur kernel. However, near the mask borders, a frontier can be seen between the non-blurred area (this inside of the mask) and the blurred area. Using more blur sizes will give a much smoother transition.

The idea for the builtup blurs to expand RGB comes from the EdgeExtend effect for Nuke by Frank Rueter (except the blurs were merged from the smallest to the largest, and here it is done the other way round), with suggestions by Lucas Pfaff.

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

+--------------------------------------------+---------+----------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name                    | Type    | Default        | Function                                                                                                                                                                                                                                    |
+============================================+=========+================+=============================================================================================================================================================================================================================================+
| Premult Source / ``edgeExtendPremult``     | Boolean | Off            | Premultiply the source image by its alpha channel before processing. Do not check if the source matte is already premultiplied                                                                                                              |
+--------------------------------------------+---------+----------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Size / ``edgeExtendSize``                  | Double  | 20             | Maximum blur kernel size applied in the ExtendSlices filter. Raise to extend the edges further.                                                                                                                                             |
+--------------------------------------------+---------+----------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Slices / ``edgeExtendSlices``              | Integer | 5              | Number of blur kernels applied in the ExtendSlices filter. A count of 1 just merges the source image over the source image blurred by a kernel of size Size.                                                                                |
+--------------------------------------------+---------+----------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Unpremult Result / ``edgeExtendUnpremult`` | Boolean | Off            | Unpremultiply the result image by its alpha channel after processing.                                                                                                                                                                       |
+--------------------------------------------+---------+----------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Filter / ``filter``                        | Choice  | Quasi-Gaussian | | Bluring filter. The quasi-Gaussian filter should be appropriate in most cases. The Gaussian filter is more isotropic (its impulse response has rotational symmetry), but slower.                                                          |
|                                            |         |                | | **Quasi-Gaussian (quasigaussian)**: Quasi-Gaussian filter (0-order recursive Deriche filter, faster) - IIR (infinite support / impulsional response).                                                                                     |
|                                            |         |                | | **Gaussian (gaussian)**: Gaussian filter (Van Vliet recursive Gaussian filter, more isotropic, slower) - IIR (infinite support / impulsional response).                                                                                   |
|                                            |         |                | | **Box (box)**: Box filter - FIR (finite support / impulsional response).                                                                                                                                                                  |
|                                            |         |                | | **Triangle (triangle)**: Triangle/tent filter - FIR (finite support / impulsional response).                                                                                                                                              |
|                                            |         |                | | **Quadratic (quadratic)**: Quadratic filter - FIR (finite support / impulsional response).                                                                                                                                                |
+--------------------------------------------+---------+----------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Expand RoD / ``expandRoD``                 | Boolean | On             | Expand the source region of definition by 1.5*size (3.6*sigma).                                                                                                                                                                             |
+--------------------------------------------+---------+----------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Crop To Format / ``cropToFormat``          | Boolean | On             | If the source is inside the format and the effect extends it outside of the format, crop it to avoid unnecessary calculations. To avoid unwanted crops, only the borders that were inside of the format in the source clip will be cropped. |
+--------------------------------------------+---------+----------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert``               | Boolean | Off            | When checked, the effect is fully applied where the mask is 0.                                                                                                                                                                              |
+--------------------------------------------+---------+----------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                              | Double  | 1              | Mix factor between the original and the transformed image.                                                                                                                                                                                  |
+--------------------------------------------+---------+----------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: eu.cimg.EdgeExtend.png
   :width: 10.0%
