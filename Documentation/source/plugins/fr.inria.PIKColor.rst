.. _fr.inria.PIKColor:

PIKColor node
=============

|pluginIcon| 

*This documentation is for version 1.0 of PIKColor (fr.inria.PIKColor).*

Description
-----------

This node provides the PIK per-pixel keyer a pseudo clean-plate to be used as color reference.

The idea is to remove the foreground image and only leave the shades and hues of the original blue/greenscreen.

Attach the output of this node to the ‘C’ input of a PIK node. Attach the input of this node and the ‘PFg’ input of PIK to the original screen, or preferably the denoised screen.

Pick which color your screen type is in both nodes and then while viewing the alpha output from PIK lower the darks.b (if a bluescreen - adjust darks.g if a greenscreen) in this node until you see a change in the garbage area of the matte. Once you see a change then you have gone too far -back off a step. If you are still left with discolored edges you can use the other colors in the lights and darks to eliminate them. Remember the idea is to be left with the original shades of the screen and the foreground blacked out. While swapping between viewing the matte from the PIK and the rgb output of PIKColor adjust the other colors until you see a change in the garbage area of the matte. Simple rule of thumb - if you have a light red discolored area increase the lights.r - if you have a dark green discolored area increase darks.g. If your screen does not have a very saturated hue you may still be left with areas of discoloration after the above process. The ‘erode’ slider can help with this - while viewing the rgb output adjust the erode until those areas disappear.

The ‘Patch Black’ slider allows you to fill in the black areas with screen color. This is not always necessary but if you see blue squares in your composite increase this value and it’ll fix it.

The optional ‘InM’ input can be used to provide an inside mask (a.k.a. core matte or holdout matte), which is excluded from the clean plate. If an inside mask is fed into the Keyer (PIK or another Keyer), the same inside mask should be fed inside PIKColor.

The above is the only real workflow for this node - working from the top parameter to the bottom parameter- going back to tweak darks/lights with ‘erode’ and ‘patch black’ activated is not really going to work.

Inputs
------

+--------+-------------+----------+
| Input  | Description | Optional |
+========+=============+==========+
| Source |             | No       |
+--------+-------------+----------+
| InM    |             | Yes      |
+--------+-------------+----------+

Controls
--------

.. tabularcolumns:: |>{\raggedright}p{0.2\columnwidth}|>{\raggedright}p{0.06\columnwidth}|>{\raggedright}p{0.07\columnwidth}|p{0.63\columnwidth}|

.. cssclass:: longtable

+---------------------------------------+---------+----------------+-----------------------------------------------------------------------------------------------------+
| Parameter / script name               | Type    | Default        | Function                                                                                            |
+=======================================+=========+================+=====================================================================================================+
| Convert to Group / ``convertToGroup`` | Button  |                | Converts this node to a Group: the internal node-graph and the user parameters will become editable |
+---------------------------------------+---------+----------------+-----------------------------------------------------------------------------------------------------+
| Screen Type / ``screenType``          | Choice  | Blue           | |                                                                                                   |
|                                       |         |                | | **Green**                                                                                         |
|                                       |         |                | | **Blue**                                                                                          |
+---------------------------------------+---------+----------------+-----------------------------------------------------------------------------------------------------+
| Size / ``size``                       | Double  | 10             | Size of color expansion.                                                                            |
+---------------------------------------+---------+----------------+-----------------------------------------------------------------------------------------------------+
| Darks / ``off``                       | Color   | r: 0 g: 0 b: 0 | | adjust the color values to get the best separation between black and the screen type color.       |
|                                       |         |                | | You want to be left with only shades of the screen color and black.                               |
|                                       |         |                | | If a green screen is selected start by bringing down darks->green                                 |
|                                       |         |                | | If a blue screen is selected start by bringing down darks->blue                                   |
+---------------------------------------+---------+----------------+-----------------------------------------------------------------------------------------------------+
| Lights / ``mult``                     | Color   | r: 1 g: 1 b: 1 | | adjust the color values to get the best separation between black and the screen type color.       |
|                                       |         |                | | You want to be left with only shades of the screen color and black.                               |
|                                       |         |                | | If a green screen is selected start by bringing down darks->green                                 |
|                                       |         |                | | If a blue screen is selected start by bringing down darks->blue                                   |
+---------------------------------------+---------+----------------+-----------------------------------------------------------------------------------------------------+
| Erode / ``erode``                     | Double  | 0              | increase this value if you still see traces of the foreground edge color in the output              |
+---------------------------------------+---------+----------------+-----------------------------------------------------------------------------------------------------+
| Patch Black / ``multi``               | Double  | 0              | | Increase this to optionally remove the black from the output.                                     |
|                                       |         |                | | This should only be used once the the above darks/lights have been set.                           |
+---------------------------------------+---------+----------------+-----------------------------------------------------------------------------------------------------+
| Filter / ``filt``                     | Boolean | On             |                                                                                                     |
+---------------------------------------+---------+----------------+-----------------------------------------------------------------------------------------------------+
| Level / ``level``                     | Double  | 1              | multiply the rgb output. Helps remove noise from main key                                           |
+---------------------------------------+---------+----------------+-----------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: fr.inria.PIKColor.png
   :width: 10.0%
