.. _net.sf.cimg.CImgErodeSmooth:

ErodeSmooth node
================

|pluginIcon| 

*This documentation is for version 2.0 of ErodeSmooth (net.sf.cimg.CImgErodeSmooth).*

Description
-----------

Erode or dilate input stream using a normalized power-weighted filter.

This gives a smoother result than the Erode or Dilate node.

See “Robust local max-min filters by normalized power-weighted filtering” by L.J. van Vliet, http://dx.doi.org/10.1109/ICPR.2004.1334273

Uses the ‘vanvliet’ and ‘deriche’ functions from the CImg library.

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

+----------------------------------+---------+---------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name          | Type    | Default       | Function                                                                                                                                                                                                                                                                                                              |
+==================================+=========+===============+=======================================================================================================================================================================================================================================================================================================================+
| Range / ``range``                | Double  | min: 0 max: 1 | Expected range for input values.                                                                                                                                                                                                                                                                                      |
+----------------------------------+---------+---------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Size / ``size``                  | Double  | x: 0 y: 0     | Size (diameter) of the filter kernel, in pixel units (>=0). The standard deviation of the corresponding Gaussian is size/2.4. No filter is applied if size < 1.2. Negative values correspond to dilation, positive valies to erosion. Both values should have the same sign.                                          |
+----------------------------------+---------+---------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Uniform / ``uniform``            | Boolean | Off           | Apply the same amount of blur on X and Y.                                                                                                                                                                                                                                                                             |
+----------------------------------+---------+---------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Exponent / ``exponent``          | Integer | 5             | Exponent of the normalized power-weighted filter. Lower values give a smoother result. Default is 5.                                                                                                                                                                                                                  |
+----------------------------------+---------+---------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Border Conditions / ``boundary`` | Choice  | Nearest       | | Specifies how pixel values are computed out of the image domain. This mostly affects values at the boundary of the image. If the image represents intensities, Nearest (Neumann) conditions should be used. If the image represents gradients or derivatives, Black (Dirichlet) boundary conditions should be used. |
|                                  |         |               | | **Black (black)**: Dirichlet boundary condition: pixel values out of the image domain are zero.                                                                                                                                                                                                                     |
|                                  |         |               | | **Nearest (nearest)**: Neumann boundary condition: pixel values out of the image domain are those of the closest pixel location in the image domain.                                                                                                                                                                |
+----------------------------------+---------+---------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Filter / ``filter``              | Choice  | Quadratic     | | Bluring filter. The quasi-Gaussian filter should be appropriate in most cases. The Gaussian filter is more isotropic (its impulse response has rotational symmetry), but slower.                                                                                                                                    |
|                                  |         |               | | **Quasi-Gaussian (quasigaussian)**: Quasi-Gaussian filter (0-order recursive Deriche filter, faster).                                                                                                                                                                                                               |
|                                  |         |               | | **Gaussian (gaussian)**: Gaussian filter (Van Vliet recursive Gaussian filter, more isotropic, slower).                                                                                                                                                                                                             |
|                                  |         |               | | **Box (box)**: Box filter - FIR (finite support / impulsional response).                                                                                                                                                                                                                                            |
|                                  |         |               | | **Triangle (triangle)**: Triangle/tent filter - FIR (finite support / impulsional response).                                                                                                                                                                                                                        |
|                                  |         |               | | **Quadratic (quadratic)**: Quadratic filter - FIR (finite support / impulsional response).                                                                                                                                                                                                                          |
+----------------------------------+---------+---------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Expand RoD / ``expandRoD``       | Boolean | On            | Expand the source region of definition by 1.5*size (3.6*sigma).                                                                                                                                                                                                                                                       |
+----------------------------------+---------+---------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| (Un)premult / ``premult``        | Boolean | Off           | Divide the image by the alpha channel before processing, and re-multiply it afterwards. Use if the input images are premultiplied.                                                                                                                                                                                    |
+----------------------------------+---------+---------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert``     | Boolean | Off           | When checked, the effect is fully applied where the mask is 0.                                                                                                                                                                                                                                                        |
+----------------------------------+---------+---------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                    | Double  | 1             | Mix factor between the original and the transformed image.                                                                                                                                                                                                                                                            |
+----------------------------------+---------+---------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.cimg.CImgErodeSmooth.png
   :width: 10.0%
