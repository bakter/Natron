.. _net.sf.cimg.CImgGuided:

SmoothGuided node
=================

|pluginIcon| 

*This documentation is for version 2.0 of SmoothGuided (net.sf.cimg.CImgGuided).*

Description
-----------

Blur image, with the Guided Image filter.

The algorithm is described in: He et al., “Guided Image Filtering,” http://research.microsoft.com/en-us/um/people/kahe/publications/pami12guidedfilter.pdf

Uses the ‘blur_guided’ function from the CImg library.

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

+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name      | Type    | Default | Function                                                                                                                           |
+==============================+=========+=========+====================================================================================================================================+
| Radius / ``radius``          | Integer | 5       | Radius of the spatial kernel (positional sigma), in pixel units (>=0).                                                             |
+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Smoothness / ``epsilon``     | Double  | 0.2     | Regularization parameter. The actual guided filter parameter is epsilon^2).                                                        |
+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Iterations / ``iterations``  | Integer | 1       | Number of iterations.                                                                                                              |
+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| (Un)premult / ``premult``    | Boolean | Off     | Divide the image by the alpha channel before processing, and re-multiply it afterwards. Use if the input images are premultiplied. |
+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert`` | Boolean | Off     | When checked, the effect is fully applied where the mask is 0.                                                                     |
+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                | Double  | 1       | Mix factor between the original and the transformed image.                                                                         |
+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.cimg.CImgGuided.png
   :width: 10.0%
