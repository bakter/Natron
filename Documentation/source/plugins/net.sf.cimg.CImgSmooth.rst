.. _net.sf.cimg.CImgSmooth:

SmoothAnisotropic node
======================

|pluginIcon| 

*This documentation is for version 2.0 of SmoothAnisotropic (net.sf.cimg.CImgSmooth).*

Description
-----------

Smooth/Denoise input stream using anisotropic PDE-based smoothing.

Uses the ‘blur_anisotropic’ function from the CImg library.

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

+------------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name                        | Type    | Default          | Function                                                                                                                           |
+================================================+=========+==================+====================================================================================================================================+
| Amplitude / ``amplitude``                      | Double  | 60               | Amplitude of the smoothing, in pixel units (>=0). This is the maximum length of streamlines used to smooth the data.               |
+------------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Sharpness / ``sharpness``                      | Double  | 0.7              |                                                                                                                                    |
+------------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Anisotropy / ``anisotropy``                    | Double  | 0.3              | Smoothing anisotropy (0<=a<=1)                                                                                                     |
+------------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Gradient Smoothness / ``alpha``                | Double  | 0.6              |                                                                                                                                    |
+------------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Tensor Smoothness / ``sigma``                  | Double  | 1.1              | Geometry regularity, in pixels units (>=0)                                                                                         |
+------------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Spatial Precision / ``dl``                     | Double  | 0.8              | Spatial discretization, in pixel units (0<=dl<=1)                                                                                  |
+------------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Angular Precision / ``da``                     | Double  | 30               | Angular integration step, in degrees (0<=da<=90). If da=0, Iterated oriented Laplacians is used instead of LIC-based smoothing.    |
+------------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Value Precision / ``prec``                     | Double  | 2                | Precision of the diffusion process (>0).                                                                                           |
+------------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Interpolation / ``interpolation``              | Choice  | Nearest-neighbor | | Interpolation type                                                                                                               |
|                                                |         |                  | | **Nearest-neighbor (nearest)**: Nearest-neighbor.                                                                                |
|                                                |         |                  | | **Linear (linear)**: Linear interpolation.                                                                                       |
|                                                |         |                  | | **Runge-Kutta (rungekutta)**: Runge-Kutta interpolation.                                                                         |
+------------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Fast Approximation / ``is_fast_approximation`` | Boolean | On               | Tells if a fast approximation of the gaussian function is used or not                                                              |
+------------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Iterations / ``iterations``                    | Integer | 1                | Number of iterations.                                                                                                              |
+------------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Set Thin Brush Defaults / ``thinBrush``        | Button  |                  | Set the defaults to the value of the Thin Brush filter by PhotoComiX, as featured in the G’MIC Gimp plugin.                        |
+------------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------+
| (Un)premult / ``premult``                      | Boolean | Off              | Divide the image by the alpha channel before processing, and re-multiply it afterwards. Use if the input images are premultiplied. |
+------------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert``                   | Boolean | Off              | When checked, the effect is fully applied where the mask is 0.                                                                     |
+------------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                                  | Double  | 1                | Mix factor between the original and the transformed image.                                                                         |
+------------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.cimg.CImgSmooth.png
   :width: 10.0%
