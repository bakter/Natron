.. _net.sf.openfx.Quantize:

Quantize node
=============

*This documentation is for version 1.0 of Quantize (net.sf.openfx.Quantize).*

Description
-----------

Reduce the number of color levels per channel.

See also: http://opticalenquiry.com/nuke/index.php?title=Color_Operation

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
| Colors / ``colors``          | Double  | 16      | Number of color levels to use per channel.                                                                                         |
+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Dither / ``dither``          | Choice  | None    | | Dithering method to apply in order to avoid the banding effect.                                                                  |
|                              |         |         | | **None (none)**: No dithering (posterize), creating abrupt changes.                                                              |
|                              |         |         | | **Ordered (Bayer 2x2) (bayer2x2)**: Ordered dithering using a 2x2 Bayer matrix.                                                  |
|                              |         |         | | **Ordered (Bayer 4x4) (bayer4x4)**: Ordered dithering using a 4x4 Bayer matrix.                                                  |
|                              |         |         | | **Ordered (Bayer 8x8) (bayer8x8)**: Ordered dithering using a 8x8 Bayer matrix.                                                  |
|                              |         |         | | **Ordered (void-and-cluster 14x14) (vac14x14)**: Ordered dithering using a void-and-cluster 14x14 matrix.                        |
|                              |         |         | | **Ordered (void-and-cluster 25x25) (vac25x25)**: Ordered dithering using a void-and-cluster 25x25 matrix.                        |
|                              |         |         | | **Random (random)**: Random dithering.                                                                                           |
+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Seed / ``seed``              | Integer | 2000    | Random seed: change this if you want different instances to have different dithering (only for random dithering).                  |
+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Static Seed / ``staticSeed`` | Boolean | Off     | When enabled, the dither pattern remains the same for every frame producing a constant dither effect.                              |
+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| (Un)premult / ``premult``    | Boolean | Off     | Divide the image by the alpha channel before processing, and re-multiply it afterwards. Use if the input images are premultiplied. |
+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert`` | Boolean | Off     | When checked, the effect is fully applied where the mask is 0.                                                                     |
+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                | Double  | 1       | Mix factor between the original and the transformed image.                                                                         |
+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
