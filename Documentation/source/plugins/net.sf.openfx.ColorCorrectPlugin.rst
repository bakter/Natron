.. _net.sf.openfx.ColorCorrectPlugin:

ColorCorrect node
=================

|pluginIcon| 

*This documentation is for version 2.1 of ColorCorrect (net.sf.openfx.ColorCorrectPlugin).*

Description
-----------

Adjusts the saturation, constrast, gamma, gain and offset of an image.

The ranges of the shadows, midtones and highlights are controlled by the curves in the “Ranges” tab.

The Contrast adjustment works using the formula: Output = (Input/0.18)^Contrast*0.18.

See also:

- http://opticalenquiry.com/nuke/index.php?title=ColorCorrect

- https://compositormathematic.wordpress.com/2013/07/06/gamma-contrast/

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

+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name               | Type       | Default                | Function                                                                                                                           |
+=======================================+============+========================+====================================================================================================================================+
| Saturation / ``MasterSaturation``     | Color      | r: 1 g: 1 b: 1 a: 1    |                                                                                                                                    |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Contrast / ``MasterContrast``         | Color      | r: 1 g: 1 b: 1 a: 1    |                                                                                                                                    |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Gamma / ``MasterGamma``               | Color      | r: 1 g: 1 b: 1 a: 1    |                                                                                                                                    |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Gain / ``MasterGain``                 | Color      | r: 1 g: 1 b: 1 a: 1    |                                                                                                                                    |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Offset / ``MasterOffset``             | Color      | r: 0 g: 0 b: 0 a: 0    |                                                                                                                                    |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Enable / ``ShadowsEnable``            | Boolean    | On                     | When checked, Shadows correction is enabled.                                                                                       |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Saturation / ``ShadowsSaturation``    | Color      | r: 1 g: 1 b: 1 a: 1    |                                                                                                                                    |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Contrast / ``ShadowsContrast``        | Color      | r: 1 g: 1 b: 1 a: 1    |                                                                                                                                    |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Gamma / ``ShadowsGamma``              | Color      | r: 1 g: 1 b: 1 a: 1    |                                                                                                                                    |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Gain / ``ShadowsGain``                | Color      | r: 1 g: 1 b: 1 a: 1    |                                                                                                                                    |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Offset / ``ShadowsOffset``            | Color      | r: 0 g: 0 b: 0 a: 0    |                                                                                                                                    |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Enable / ``MidtonesEnable``           | Boolean    | On                     | When checked, Midtones correction is enabled.                                                                                      |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Saturation / ``MidtonesSaturation``   | Color      | r: 1 g: 1 b: 1 a: 1    |                                                                                                                                    |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Contrast / ``MidtonesContrast``       | Color      | r: 1 g: 1 b: 1 a: 1    |                                                                                                                                    |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Gamma / ``MidtonesGamma``             | Color      | r: 1 g: 1 b: 1 a: 1    |                                                                                                                                    |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Gain / ``MidtonesGain``               | Color      | r: 1 g: 1 b: 1 a: 1    |                                                                                                                                    |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Offset / ``MidtonesOffset``           | Color      | r: 0 g: 0 b: 0 a: 0    |                                                                                                                                    |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Enable / ``HighlightsEnable``         | Boolean    | On                     | When checked, Highlights correction is enabled.                                                                                    |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Saturation / ``HighlightsSaturation`` | Color      | r: 1 g: 1 b: 1 a: 1    |                                                                                                                                    |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Contrast / ``HighlightsContrast``     | Color      | r: 1 g: 1 b: 1 a: 1    |                                                                                                                                    |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Gamma / ``HighlightsGamma``           | Color      | r: 1 g: 1 b: 1 a: 1    |                                                                                                                                    |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Gain / ``HighlightsGain``             | Color      | r: 1 g: 1 b: 1 a: 1    |                                                                                                                                    |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Offset / ``HighlightsOffset``         | Color      | r: 0 g: 0 b: 0 a: 0    |                                                                                                                                    |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Range / ``range``                     | Double     | min: 0 max: 1          | Expected range for input values. Within this range, a lookup table is used for faster computation.                                 |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Tone Ranges / ``toneRanges``          | Parametric | Shadow:   Highlight:   | Tone ranges lookup table                                                                                                           |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Luminance Math / ``luminanceMath``    | Choice     | Rec. 709               | | Formula used to compute luminance from RGB values (used for saturation adjustments).                                             |
|                                       |            |                        | | **Rec. 709 (rec709)**: Use Rec. 709 (0.2126r + 0.7152g + 0.0722b).                                                               |
|                                       |            |                        | | **Rec. 2020 (rec2020)**: Use Rec. 2020 (0.2627r + 0.6780g + 0.0593b).                                                            |
|                                       |            |                        | | **ACES AP0 (acesap0)**: Use ACES AP0 (0.3439664498r + 0.7281660966g + -0.0721325464b).                                           |
|                                       |            |                        | | **ACES AP1 (acesap1)**: Use ACES AP1 (0.2722287168r + 0.6740817658g + 0.0536895174b).                                            |
|                                       |            |                        | | **CCIR 601 (ccir601)**: Use CCIR 601 (0.2989r + 0.5866g + 0.1145b).                                                              |
|                                       |            |                        | | **Average (average)**: Use average of r, g, b.                                                                                   |
|                                       |            |                        | | **Max (max)**: Use max or r, g, b.                                                                                               |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Clamp Black / ``clampBlack``          | Boolean    | On                     | All colors below 0 on output are set to 0.                                                                                         |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Clamp White / ``clampWhite``          | Boolean    | Off                    | All colors above 1 on output are set to 1.                                                                                         |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| (Un)premult / ``premult``             | Boolean    | Off                    | Divide the image by the alpha channel before processing, and re-multiply it afterwards. Use if the input images are premultiplied. |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert``          | Boolean    | Off                    | When checked, the effect is fully applied where the mask is 0.                                                                     |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                         | Double     | 1                      | Mix factor between the original and the transformed image.                                                                         |
+---------------------------------------+------------+------------------------+------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.openfx.ColorCorrectPlugin.png
   :width: 10.0%
