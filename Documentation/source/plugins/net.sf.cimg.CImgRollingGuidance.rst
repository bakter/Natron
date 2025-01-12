.. _net.sf.cimg.CImgRollingGuidance:

SmoothRollingGuidance node
==========================

|pluginIcon| 

*This documentation is for version 2.0 of SmoothRollingGuidance (net.sf.cimg.CImgRollingGuidance).*

Description
-----------

Filter out details under a given scale using the Rolling Guidance filter.

Rolling Guidance is described fully in http://www.cse.cuhk.edu.hk/~leojia/projects/rollguidance/

Iterates the ‘blur_bilateral’ function from the CImg library.

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

+-------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name       | Type    | Default | Function                                                                                                                                                                                                                                                                                   |
+===============================+=========+=========+============================================================================================================================================================================================================================================================================================+
| Spatial Std Dev / ``sigma_s`` | Double  | 10      | Standard deviation of the spatial kernel, in pixel units (>=0). Details smaller than this size are filtered out.                                                                                                                                                                           |
+-------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Value Std Dev / ``sigma_r``   | Double  | 0.1     | Standard deviation of the range kernel, in intensity units (>=0). A reasonable value is 1/10 of the intensity range. In the context of denoising, Liu et al. (“Noise estimation from a single image”, CVPR2006) recommend a value of 1.95*sigma_n, where sigma_n is the local image noise. |
+-------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Iterations / ``iterations``   | Integer | 4       | Number of iterations of the rolling guidance filter. 1 corresponds to Gaussian smoothing. A reasonable value is 4.                                                                                                                                                                         |
+-------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| (Un)premult / ``premult``     | Boolean | Off     | Divide the image by the alpha channel before processing, and re-multiply it afterwards. Use if the input images are premultiplied.                                                                                                                                                         |
+-------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert``  | Boolean | Off     | When checked, the effect is fully applied where the mask is 0.                                                                                                                                                                                                                             |
+-------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                 | Double  | 1       | Mix factor between the original and the transformed image.                                                                                                                                                                                                                                 |
+-------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.cimg.CImgRollingGuidance.png
   :width: 10.0%
