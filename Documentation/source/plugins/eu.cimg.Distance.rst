.. _eu.cimg.Distance:

Distance node
=============

*This documentation is for version 1.0 of Distance (eu.cimg.Distance).*

Description
-----------

Compute at each pixel the distance to pixels that have a value of zero.

The distance is normalized with respect to the largest image dimension, so that it is between 0 and 1.

Optionally, a signed distance to the frontier between zero and nonzero values can be computed.

The distance transform can then be thresholded using the Threshold effect, or transformed using the ColorLookup effect, in order to generate a mask for another effect.

See alse https://en.wikipedia.org/wiki/Distance_transform

Uses the ‘distance’ function from the CImg library.

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

+------------------------------+---------+-----------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name      | Type    | Default   | Function                                                                                                                                                                                                                                                              |
+==============================+=========+===========+=======================================================================================================================================================================================================================================================================+
| Metric / ``metric``          | Choice  | Euclidean | | Type of metric.                                                                                                                                                                                                                                                     |
|                              |         |           | | **Chebyshev (chebyshev)**: max(abs(x-xborder),abs(y-yborder))                                                                                                                                                                                                       |
|                              |         |           | | **Manhattan (manhattan)**: abs(x-xborder) + abs(y-yborder)                                                                                                                                                                                                          |
|                              |         |           | | **Euclidean (euclidean)**: sqrt(sqr(x-xborder) + sqr(y-yborder))                                                                                                                                                                                                    |
+------------------------------+---------+-----------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Signed Distance / ``signed`` | Boolean | Off       | Instead of computing the distance to pixels with a value of zero, compute the signed distance to the contour between zero and non-zero pixels. On output, non-zero-valued pixels have a positive signed distance, zero-valued pixels have a negative signed distance. |
+------------------------------+---------+-----------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| (Un)premult / ``premult``    | Boolean | Off       | Divide the image by the alpha channel before processing, and re-multiply it afterwards. Use if the input images are premultiplied.                                                                                                                                    |
+------------------------------+---------+-----------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert`` | Boolean | Off       | When checked, the effect is fully applied where the mask is 0.                                                                                                                                                                                                        |
+------------------------------+---------+-----------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                | Double  | 1         | Mix factor between the original and the transformed image.                                                                                                                                                                                                            |
+------------------------------+---------+-----------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
