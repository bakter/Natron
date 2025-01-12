.. _net.sf.openfx.ColorSuppress:

ColorSuppress node
==================

*This documentation is for version 1.0 of ColorSuppress (net.sf.openfx.ColorSuppress).*

Description
-----------

Remove a color or tint from an image.

The effect can either modify the color and/or extract the amount of color and store it in the alpha channel. It can be used to fix the despill or extract a mask from a color.

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

+---------------------------------------+---------+----------+------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name               | Type    | Default  | Function                                                                                                                           |
+=======================================+=========+==========+====================================================================================================================================+
| Red / ``redSuppress``                 | Double  | 0        | Fraction of red to suppress.                                                                                                       |
+---------------------------------------+---------+----------+------------------------------------------------------------------------------------------------------------------------------------+
| Green / ``greenSuppress``             | Double  | 0        | Fraction of green to suppress.                                                                                                     |
+---------------------------------------+---------+----------+------------------------------------------------------------------------------------------------------------------------------------+
| Blue / ``blueSuppress``               | Double  | 0        | Fraction of blue to suppress.                                                                                                      |
+---------------------------------------+---------+----------+------------------------------------------------------------------------------------------------------------------------------------+
| Cyan / ``cyanSuppress``               | Double  | 0        | Fraction of cyan to suppress.                                                                                                      |
+---------------------------------------+---------+----------+------------------------------------------------------------------------------------------------------------------------------------+
| Magenta / ``magentaSuppress``         | Double  | 0        | Fraction of magenta to suppress.                                                                                                   |
+---------------------------------------+---------+----------+------------------------------------------------------------------------------------------------------------------------------------+
| Yellow / ``yellowSuppress``           | Double  | 0        | Fraction of yellow to suppress.                                                                                                    |
+---------------------------------------+---------+----------+------------------------------------------------------------------------------------------------------------------------------------+
| Output / ``outputMode``               | Choice  | Image    | | Suppress mode.                                                                                                                   |
|                                       |         |          | | **Image (image)**: Suppress color from the image.                                                                                |
|                                       |         |          | | **Alpha (alpha)**: Only store the suppress mask in the Alpha channel.                                                            |
|                                       |         |          | | **Image and Alpha (both)**: Suppress the color from the image and store the suppress mask in the Alpha channel.                  |
+---------------------------------------+---------+----------+------------------------------------------------------------------------------------------------------------------------------------+
| Preserve Luminance / ``preserveLuma`` | Boolean | Off      | Preserve image luminosity.                                                                                                         |
+---------------------------------------+---------+----------+------------------------------------------------------------------------------------------------------------------------------------+
| Luminance Math / ``luminanceMath``    | Choice  | Rec. 709 | | Formula used to compute luminance from RGB values.                                                                               |
|                                       |         |          | | **Rec. 709 (rec709)**: Use Rec. 709 (0.2126r + 0.7152g + 0.0722b).                                                               |
|                                       |         |          | | **Rec. 2020 (rec2020)**: Use Rec. 2020 (0.2627r + 0.6780g + 0.0593b).                                                            |
|                                       |         |          | | **ACES AP0 (acesap0)**: Use ACES AP0 (0.3439664498r + 0.7281660966g + -0.0721325464b).                                           |
|                                       |         |          | | **ACES AP1 (acesap1)**: Use ACES AP1 (0.2722287168r + 0.6740817658g + 0.0536895174b).                                            |
|                                       |         |          | | **CCIR 601 (ccir601)**: Use CCIR 601 (0.2989r + 0.5866g + 0.1145b).                                                              |
|                                       |         |          | | **Average (average)**: Use average of r, g, b.                                                                                   |
|                                       |         |          | | **Max (max)**: Use max or r, g, b.                                                                                               |
+---------------------------------------+---------+----------+------------------------------------------------------------------------------------------------------------------------------------+
| (Un)premult / ``premult``             | Boolean | Off      | Divide the image by the alpha channel before processing, and re-multiply it afterwards. Use if the input images are premultiplied. |
+---------------------------------------+---------+----------+------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert``          | Boolean | Off      | When checked, the effect is fully applied where the mask is 0.                                                                     |
+---------------------------------------+---------+----------+------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                         | Double  | 1        | Mix factor between the original and the transformed image.                                                                         |
+---------------------------------------+---------+----------+------------------------------------------------------------------------------------------------------------------------------------+
