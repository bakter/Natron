.. _net.sf.cimg.CImgSharpenShock:

SharpenShock node
=================

|pluginIcon| 

*This documentation is for version 2.0 of SharpenShock (net.sf.cimg.CImgSharpenShock).*

Description
-----------

Sharpen selected images by shock filters.

Uses ‘sharpen’ function from the CImg library.

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

+------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name            | Type    | Default | Function                                                                                                                           |
+====================================+=========+=========+====================================================================================================================================+
| Amplitude / ``amplitude``          | Double  | 0.6     | Standard deviation of the spatial kernel, in pixel units (>=0). Details smaller than this size are filtered out.                   |
+------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Edge Threshold / ``edgeThreshold`` | Double  | 0.1     | Edge threshold.                                                                                                                    |
+------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Gradient Smoothness / ``alpha``    | Double  | 0.8     | Gradient smoothness (in pixels).                                                                                                   |
+------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Tensor Smoothness / ``sigma``      | Double  | 1.1     | Tensor smoothness (in pixels).                                                                                                     |
+------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Iterations / ``iterations``        | Integer | 1       | Number of iterations. A reasonable value is 1.                                                                                     |
+------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| (Un)premult / ``premult``          | Boolean | Off     | Divide the image by the alpha channel before processing, and re-multiply it afterwards. Use if the input images are premultiplied. |
+------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert``       | Boolean | Off     | When checked, the effect is fully applied where the mask is 0.                                                                     |
+------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                      | Double  | 1       | Mix factor between the original and the transformed image.                                                                         |
+------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.cimg.CImgSharpenShock.png
   :width: 10.0%
