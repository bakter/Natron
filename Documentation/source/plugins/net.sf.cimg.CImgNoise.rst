.. _net.sf.cimg.CImgNoise:

Noise node
==========

|pluginIcon| 

*This documentation is for version 2.0 of Noise (net.sf.cimg.CImgNoise).*

Description
-----------

Add random noise to input stream.

Uses the ‘noise’ function from the CImg library, modified so that noise is reproductible at each render.

CImg is a free, open-source library distributed under the CeCILL-C (close to the GNU LGPL) or CeCILL (compatible with the GNU GPL) licenses. It can be used in commercial applications (see http://cimg.eu).

Inputs
------

+--------+-------------+----------+
| Input  | Description | Optional |
+========+=============+==========+
| Source |             | Yes      |
+--------+-------------+----------+
| Mask   |             | Yes      |
+--------+-------------+----------+

Controls
--------

.. tabularcolumns:: |>{\raggedright}p{0.2\columnwidth}|>{\raggedright}p{0.06\columnwidth}|>{\raggedright}p{0.07\columnwidth}|p{0.63\columnwidth}|

.. cssclass:: longtable

+------------------------------+---------+----------+------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name      | Type    | Default  | Function                                                                                                                           |
+==============================+=========+==========+====================================================================================================================================+
| Sigma / ``sigma``            | Double  | 0.01     | Amplitude of the random additive noise.                                                                                            |
+------------------------------+---------+----------+------------------------------------------------------------------------------------------------------------------------------------+
| Type / ``type``              | Choice  | Gaussian | | Type of additive noise.                                                                                                          |
|                              |         |          | | **Gaussian (gaussian)**: Gaussian noise.                                                                                         |
|                              |         |          | | **Uniform (uniform)**: Uniform noise.                                                                                            |
|                              |         |          | | **Salt & Pepper (saltnpepper)**: Salt & pepper noise.                                                                            |
|                              |         |          | | **Poisson (poisson)**: Poisson noise. Image is divided by Sigma before computing noise, then remultiplied by Sigma.              |
|                              |         |          | | **Rice (rice)**: Rician noise.                                                                                                   |
+------------------------------+---------+----------+------------------------------------------------------------------------------------------------------------------------------------+
| Seed / ``seed``              | Integer | 2000     | Random seed: change this if you want different instances to have different noise.                                                  |
+------------------------------+---------+----------+------------------------------------------------------------------------------------------------------------------------------------+
| Static Seed / ``staticSeed`` | Boolean | Off      | When enabled, the dither pattern remains the same for every frame producing a constant noise effect.                               |
+------------------------------+---------+----------+------------------------------------------------------------------------------------------------------------------------------------+
| (Un)premult / ``premult``    | Boolean | Off      | Divide the image by the alpha channel before processing, and re-multiply it afterwards. Use if the input images are premultiplied. |
+------------------------------+---------+----------+------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert`` | Boolean | Off      | When checked, the effect is fully applied where the mask is 0.                                                                     |
+------------------------------+---------+----------+------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                | Double  | 1        | Mix factor between the original and the transformed image.                                                                         |
+------------------------------+---------+----------+------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.cimg.CImgNoise.png
   :width: 10.0%
