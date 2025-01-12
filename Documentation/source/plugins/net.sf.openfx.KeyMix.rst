.. _net.sf.openfx.KeyMix:

KeyMix node
===========

*This documentation is for version 1.0 of KeyMix (net.sf.openfx.KeyMix).*

Description
-----------

KeyMix takes two images and layers them together according to a third input. It can be used to lay a foreground over a background using the output of a keyer. The only disadvantage to this method is that it outputs an image with no alpha.

It copies the pixel from A to B only where the Mask is non-zero. It is the same as the Matte operation, but alpha for input A is taken from an external mask, and the output alpha is mixed between A and B. The output bounding box is the union of A and B.

As well as functioning as a layering node, it can also be used to integrate two color operations with one mask. This guards against ‘recycled masks’, where two consecutive color filters are masked using the same mask, which may generate strange artifacts.

See also: http://opticalenquiry.com/nuke/index.php?title=KeyMix

Inputs
------

+-------+--------------------------------------------------------------------------------+----------+
| Input | Description                                                                    | Optional |
+=======+================================================================================+==========+
| B     | The main input. This input is passed through when the KeyMix node is disabled. | Yes      |
+-------+--------------------------------------------------------------------------------+----------+
| A     | The image sequence to mix with input B.                                        | Yes      |
+-------+--------------------------------------------------------------------------------+----------+
| Mask  |                                                                                | Yes      |
+-------+--------------------------------------------------------------------------------+----------+

Controls
--------

.. tabularcolumns:: |>{\raggedright}p{0.2\columnwidth}|>{\raggedright}p{0.06\columnwidth}|>{\raggedright}p{0.07\columnwidth}|p{0.63\columnwidth}|

.. cssclass:: longtable

+------------------------------+---------+---------+----------------------------------------------------------------+
| Parameter / script name      | Type    | Default | Function                                                       |
+==============================+=========+=========+================================================================+
| Invert Mask / ``maskInvert`` | Boolean | Off     | When checked, the effect is fully applied where the mask is 0. |
+------------------------------+---------+---------+----------------------------------------------------------------+
| Mix / ``mix``                | Double  | 1       | Mix factor between the original and the transformed image.     |
+------------------------------+---------+---------+----------------------------------------------------------------+
