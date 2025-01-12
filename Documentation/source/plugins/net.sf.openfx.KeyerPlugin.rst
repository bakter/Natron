.. _net.sf.openfx.KeyerPlugin:

Keyer node
==========

|pluginIcon| 

*This documentation is for version 1.0 of Keyer (net.sf.openfx.KeyerPlugin).*

Description
-----------

A collection of simple keyers. These work by computing a foreground key from the RGB values of the input image (see the keyerMode parameter).

This foreground key is is a scalar from 0 to 1. From the foreground key, a background key (or transparency) is computed.

The function that maps the foreground key to the background key is piecewise linear:

- it is 0 below A = (center+toleranceLower+softnessLower)

- it is linear between A = (center+toleranceLower+softnessLower) and B = (center+toleranceLower)

-it is 1 between B = (center+toleranceLower) and C = (center+toleranceUpper)

- it is linear between C = (center+toleranceUpper) and D = (center+toleranceUpper+softnessUpper)

- it is 0 above D = (center+toleranceUpper+softnessUpper)

Keyer can pull mattes that correspond to the RGB channels, the luminance and the red, green and blue colors. One very useful application for a luminance mask is to mask out a sky (almost always it is the brightest thing in a landscape).

Conversion from A, B, C, D to Keyer parameters is:

softnessLower = (A-B)

toleranceLower = (B-C)/2

center = (B+C)/2

toleranceUpper = (C-B)/2

softnessUpper = (D-C)

See also:

- http://opticalenquiry.com/nuke/index.php?title=The_Keyer_Nodes#Keyer

- http://opticalenquiry.com/nuke/index.php?title=Green_Screen

- http://opticalenquiry.com/nuke/index.php?title=Keying_Tips

Inputs
------

+--------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+----------+
| Input  | Description                                                                                                                                                                                                                            | Optional |
+========+========================================================================================================================================================================================================================================+==========+
| Source | The foreground image to key.                                                                                                                                                                                                           | No       |
+--------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+----------+
| InM    | The Inside Mask, or holdout matte, or core matte, used to confirm areas that are definitely foreground.                                                                                                                                | Yes      |
+--------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+----------+
| OutM   | The Outside Mask, or garbage matte, used to remove unwanted objects (lighting rigs, and so on) from the foreground. The Outside Mask has priority over the Inside Mask, so that areas where both are one are considered to be outside. | Yes      |
+--------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+----------+
| Bg     | The background image to replace the blue/green screen in the foreground.                                                                                                                                                               | Yes      |
+--------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+----------+

Controls
--------

.. tabularcolumns:: |>{\raggedright}p{0.2\columnwidth}|>{\raggedright}p{0.06\columnwidth}|>{\raggedright}p{0.07\columnwidth}|p{0.63\columnwidth}|

.. cssclass:: longtable

+----------------------------------------+--------+----------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name                | Type   | Default        | Function                                                                                                                                                                                                                                                                           |
+========================================+========+================+====================================================================================================================================================================================================================================================================================+
| Key Color / ``keyColor``               | Color  | r: 0 g: 0 b: 0 | Foreground key color. foreground areas containing the key color are replaced with the background image.                                                                                                                                                                            |
+----------------------------------------+--------+----------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Keyer Mode / ``mode``                  | Choice | Luminance      | | The operation used to compute the foreground key.                                                                                                                                                                                                                                |
|                                        |        |                | | **Luminance (luminance)**: Use the luminance for keying. The foreground key value is in luminance.                                                                                                                                                                               |
|                                        |        |                | | **Color (color)**: Use the color for keying. If the key color is pure green, this corresponds a green keyer, etc.                                                                                                                                                                |
|                                        |        |                | | **Screen (screen)**: Use the color minus the other components for keying. If the key color is pure green, this corresponds a greenscreen, etc. When in screen mode, the upper tolerance should be set to 1.                                                                      |
|                                        |        |                | | **None (none)**: No keying, just despill color values. You can control despill areas using either set the inside mask, or use with ‘Source Alpha’ set to ‘Add to Inside Mask’. If ‘Output Mode’ is set to ‘Unpremultiplied’, this despills the image even if no mask is present. |
+----------------------------------------+--------+----------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Luminance Math / ``luminanceMath``     | Choice | Rec. 709       | | Formula used to compute luminance from RGB values.                                                                                                                                                                                                                               |
|                                        |        |                | | **Rec. 709 (rec709)**: Use Rec. 709 (0.2126r + 0.7152g + 0.0722b).                                                                                                                                                                                                               |
|                                        |        |                | | **Rec. 2020 (rec2020)**: Use Rec. 2020 (0.2627r + 0.6780g + 0.0593b).                                                                                                                                                                                                            |
|                                        |        |                | | **ACES AP0 (acesap0)**: Use ACES AP0 (0.3439664498r + 0.7281660966g + -0.0721325464b).                                                                                                                                                                                           |
|                                        |        |                | | **ACES AP1 (acesap1)**: Use ACES AP1 (0.2722287168r + 0.6740817658g + 0.0536895174b).                                                                                                                                                                                            |
|                                        |        |                | | **CCIR 601 (ccir601)**: Use CCIR 601 (0.2989r + 0.5866g + 0.1145b).                                                                                                                                                                                                              |
|                                        |        |                | | **Average (average)**: Use average of r, g, b.                                                                                                                                                                                                                                   |
|                                        |        |                | | **Max (max)**: Use max or r, g, b.                                                                                                                                                                                                                                               |
+----------------------------------------+--------+----------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Softness (lower) / ``softnessLower``   | Double | -0.5           | Width of the lower softness range [key-tolerance-softness,key-tolerance]. Background key value goes from 0 to 1 when foreground key is over this range.                                                                                                                            |
+----------------------------------------+--------+----------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Tolerance (lower) / ``toleranceLower`` | Double | 0              | Width of the lower tolerance range [key-tolerance,key]. Background key value is 1 when foreground key is over this range.                                                                                                                                                          |
+----------------------------------------+--------+----------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Center / ``center``                    | Double | 1              | Foreground key value forresponding to the key color, where the background key should be 1.                                                                                                                                                                                         |
+----------------------------------------+--------+----------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Tolerance (upper) / ``toleranceUpper`` | Double | 0              | Width of the upper tolerance range [key,key+tolerance]. Background key value is 1 when foreground key is over this range. Ignored in Screen keyer mode.                                                                                                                            |
+----------------------------------------+--------+----------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Softness (upper) / ``softnessUpper``   | Double | 0.5            | Width of the upper softness range [key+tolerance,key+tolerance+softness]. Background key value goes from 1 to 0 when foreground key is over this range. Ignored in Screen keyer mode.                                                                                              |
+----------------------------------------+--------+----------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Despill / ``despill``                  | Double | 1              | Reduces color spill on the foreground object (Screen mode only). Between 0 and 1, only mixed foreground/background regions are despilled. Above 1, foreground regions are despilled too.                                                                                           |
+----------------------------------------+--------+----------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Despill Angle / ``despillAngle``       | Double | 120            | Opening of the cone centered around the keyColor where colors are despilled. A larger angle means that more colors are modified.                                                                                                                                                   |
+----------------------------------------+--------+----------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Output Mode / ``show``                 | Choice | Intermediate   | | What image to output.                                                                                                                                                                                                                                                            |
|                                        |        |                | | **Intermediate (intermediate)**: Color is the source color. Alpha is the foreground key. Use for multi-pass keying.                                                                                                                                                              |
|                                        |        |                | | **Premultiplied (premultiplied)**: Color is the Source color after key color suppression, multiplied by alpha. Alpha is the foreground key.                                                                                                                                      |
|                                        |        |                | | **Unpremultiplied (unpremultiplied)**: Color is the Source color after key color suppression. Alpha is the foreground key.                                                                                                                                                       |
|                                        |        |                | | **Composite (composite)**: Color is the composite of Source and Bg. Alpha is the foreground key.                                                                                                                                                                                 |
+----------------------------------------+--------+----------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Source Alpha / ``sourceAlphaHandling`` | Choice | Ignore         | | How the alpha embedded in the Source input should be used                                                                                                                                                                                                                        |
|                                        |        |                | | **Ignore (ignore)**: Ignore the source alpha.                                                                                                                                                                                                                                    |
|                                        |        |                | | **Add to Inside Mask (inside)**: Source alpha is added to the inside mask. Use for multi-pass keying.                                                                                                                                                                            |
|                                        |        |                | | **Normal (normal)**: Foreground key is multiplied by source alpha when compositing.                                                                                                                                                                                              |
+----------------------------------------+--------+----------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.openfx.KeyerPlugin.png
   :width: 10.0%
