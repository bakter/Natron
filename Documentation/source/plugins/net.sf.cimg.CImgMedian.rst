.. _net.sf.cimg.CImgMedian:

Median node
===========

*This documentation is for version 2.0 of Median (net.sf.cimg.CImgMedian).*

Description
-----------

Apply a median filter to input images. Pixel values within a square box of the given size around the current pixel are sorted, and the median value is output if it does not differ from the current value by more than the given. Median filtering is performed per-channel.

Uses the ‘blur_median’ function from the CImg library.

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

+------------------------------+---------+---------+----------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name      | Type    | Default | Function                                                                                                                                           |
+==============================+=========+=========+====================================================================================================================================================+
| Size / ``size``              | Integer | 1       | Width and height of the structuring element is 2*size+1, in pixel units (>=0).                                                                     |
+------------------------------+---------+---------+----------------------------------------------------------------------------------------------------------------------------------------------------+
| Threshold / ``threshold``    | Double  | 0       | Threshold used to discard pixels too far from the current pixel value in the median computation. A threshold value of zero disables the threshold. |
+------------------------------+---------+---------+----------------------------------------------------------------------------------------------------------------------------------------------------+
| (Un)premult / ``premult``    | Boolean | Off     | Divide the image by the alpha channel before processing, and re-multiply it afterwards. Use if the input images are premultiplied.                 |
+------------------------------+---------+---------+----------------------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert`` | Boolean | Off     | When checked, the effect is fully applied where the mask is 0.                                                                                     |
+------------------------------+---------+---------+----------------------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                | Double  | 1       | Mix factor between the original and the transformed image.                                                                                         |
+------------------------------+---------+---------+----------------------------------------------------------------------------------------------------------------------------------------------------+
