.. _net.sf.cimg.CImgDilate:

Dilate node
===========

|pluginIcon| 

*This documentation is for version 2.1 of Dilate (net.sf.cimg.CImgDilate).*

Description
-----------

Dilate (or erode) input stream by a rectangular structuring element of specified size and Neumann boundary conditions (pixels out of the image get the value of the nearest pixel).

A negative size will perform an erosion instead of a dilation.

Different sizes can be given for the x and y axis.

Uses the ‘dilate’ and ‘erode’ functions from the CImg library.

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

+------------------------------+---------+-----------+------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name      | Type    | Default   | Function                                                                                                                           |
+==============================+=========+===========+====================================================================================================================================+
| Size / ``size``              | Integer | x: 1 y: 1 | Width/height of the rectangular structuring element is 2*size+1, in pixel units (>=0).                                             |
+------------------------------+---------+-----------+------------------------------------------------------------------------------------------------------------------------------------+
| Expand RoD / ``expandRoD``   | Boolean | On        | Expand the source region of definition by 2*size pixels if size is positive                                                        |
+------------------------------+---------+-----------+------------------------------------------------------------------------------------------------------------------------------------+
| (Un)premult / ``premult``    | Boolean | Off       | Divide the image by the alpha channel before processing, and re-multiply it afterwards. Use if the input images are premultiplied. |
+------------------------------+---------+-----------+------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert`` | Boolean | Off       | When checked, the effect is fully applied where the mask is 0.                                                                     |
+------------------------------+---------+-----------+------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                | Double  | 1         | Mix factor between the original and the transformed image.                                                                         |
+------------------------------+---------+-----------+------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.cimg.CImgDilate.png
   :width: 10.0%
