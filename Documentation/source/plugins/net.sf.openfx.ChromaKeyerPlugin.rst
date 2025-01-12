.. _net.sf.openfx.ChromaKeyerPlugin:

ChromaKeyer node
================

|pluginIcon| 

*This documentation is for version 1.1 of ChromaKeyer (net.sf.openfx.ChromaKeyerPlugin).*

Description
-----------

Simple chroma Keyer.

Algorithm description:

Keith Jack, “Video Demystified”, Independent Pub Group (Computer), 1996, pp. 214-222, http://www.ee-techs.com/circuit/video-demy5.pdf

A simplified version is described in:

[2] High Quality Chroma Key, Michael Ashikhmin, http://www.cs.utah.edu/~michael/chroma/

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

+------------------------------------------+---------+----------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name                  | Type    | Default        | Function                                                                                                                                                                                                                                                  |
+==========================================+=========+================+===========================================================================================================================================================================================================================================================+
| Key Color / ``keyColor``                 | Color   | r: 0 g: 0 b: 0 | Foreground key color; foreground areas containing the key color are replaced with the background image.                                                                                                                                                   |
+------------------------------------------+---------+----------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| YCbCr Colorspace / ``colorspace``        | Choice  | Rec. 709       | | Formula used to compute YCbCr from RGB values.                                                                                                                                                                                                          |
|                                          |         |                | | **CCIR 601 (ccir601)**: Use CCIR 601 (SD footage).                                                                                                                                                                                                      |
|                                          |         |                | | **Rec. 709 (rec709)**: Use Rec. 709 (HD footage).                                                                                                                                                                                                       |
|                                          |         |                | | **Rec. 2020 (rec2020)**: Use Rec. 2020 (UltraHD/4K footage).                                                                                                                                                                                            |
+------------------------------------------+---------+----------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Linear Processing / ``linearProcessing`` | Boolean | Off            | Do not delinearize RGB values to compute the key value.                                                                                                                                                                                                   |
+------------------------------------------+---------+----------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Acceptance Angle / ``acceptanceAngle``   | Double  | 120            | Foreground colors are only suppressed inside the acceptance angle (alpha).                                                                                                                                                                                |
+------------------------------------------+---------+----------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Suppression Angle / ``suppressionAngle`` | Double  | 40             | The chrominance of foreground colors inside the suppression angle (beta) is set to zero on output, to deal with noise. Use no more than one third of acceptance angle. This has no effect on the alpha channel, or if the output is in Intermediate mode. |
+------------------------------------------+---------+----------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Key Lift / ``keyLift``                   | Double  | 0              | Raise it so that less pixels are classified as background. Makes a sharper transition between foreground and background. Defaults to 0.                                                                                                                   |
+------------------------------------------+---------+----------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Key Gain / ``keyGain``                   | Double  | 1              | Lower it to classify more colors as background. Defaults to 1.                                                                                                                                                                                            |
+------------------------------------------+---------+----------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Output Mode / ``show``                   | Choice  | Composite      | | What image to output.                                                                                                                                                                                                                                   |
|                                          |         |                | | **Intermediate (intermediate)**: Color is the source color. Alpha is the foreground key. Use for multi-pass keying.                                                                                                                                     |
|                                          |         |                | | **Premultiplied (premultiplied)**: Color is the Source color after key color suppression, multiplied by alpha. Alpha is the foreground key.                                                                                                             |
|                                          |         |                | | **Unpremultiplied (unpremultiplied)**: Color is the Source color after key color suppression. Alpha is the foreground key.                                                                                                                              |
|                                          |         |                | | **Composite (composite)**: Color is the composite of Source and Bg. Alpha is the foreground key.                                                                                                                                                        |
+------------------------------------------+---------+----------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Source Alpha / ``sourceAlphaHandling``   | Choice  | Ignore         | | How the alpha embedded in the Source input should be used                                                                                                                                                                                               |
|                                          |         |                | | **Ignore (ignore)**: Ignore the source alpha.                                                                                                                                                                                                           |
|                                          |         |                | | **Add to Inside Mask (insidemask)**: Source alpha is added to the inside mask. Use for multi-pass keying.                                                                                                                                               |
|                                          |         |                | | **Normal (normal)**: Foreground key is multiplied by source alpha when compositing.                                                                                                                                                                     |
+------------------------------------------+---------+----------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.openfx.ChromaKeyerPlugin.png
   :width: 10.0%
