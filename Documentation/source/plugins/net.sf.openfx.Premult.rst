.. _net.sf.openfx.Premult:

Premult node
============

|pluginIcon| 

*This documentation is for version 2.0 of Premult (net.sf.openfx.Premult).*

Description
-----------

Multiply the selected channels by alpha (or another channel).

If no channel is selected, or the premultChannel is set to None, the image data is left untouched, but its premultiplication state is set to PreMultiplied.

See also: http://opticalenquiry.com/nuke/index.php?title=Premultiplication

Inputs
------

+--------+-------------+----------+
| Input  | Description | Optional |
+========+=============+==========+
| Source |             | No       |
+--------+-------------+----------+

Controls
--------

.. tabularcolumns:: |>{\raggedright}p{0.2\columnwidth}|>{\raggedright}p{0.06\columnwidth}|>{\raggedright}p{0.07\columnwidth}|p{0.63\columnwidth}|

.. cssclass:: longtable

+-----------------------------------+---------+------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name           | Type    | Default    | Function                                                                                                                                                         |
+===================================+=========+============+==================================================================================================================================================================+
| Plane / ``inputPlane``            | Choice  | Color.RGBA | | The plane channels to premult                                                                                                                                  |
|                                   |         |            | | **Color.RGBA (uk.co.thefoundry.OfxImagePlaneColour)**                                                                                                          |
|                                   |         |            | | **DisparityLeft.Disparity (uk.co.thefoundry.OfxImagePlaneStereoDisparityLeft)**                                                                                |
|                                   |         |            | | **DisparityRight.Disparity (uk.co.thefoundry.OfxImagePlaneStereoDisparityRight)**                                                                              |
|                                   |         |            | | **Backward.Motion (uk.co.thefoundry.OfxImagePlaneBackMotionVector)**                                                                                           |
|                                   |         |            | | **Forward.Motion (uk.co.thefoundry.OfxImagePlaneForwardMotionVector)**                                                                                         |
+-----------------------------------+---------+------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| By / ``premultChannel``           | Choice  | Color.A    | | The channel to use for (un)premult.                                                                                                                            |
|                                   |         |            | | **Color.R (uk.co.thefoundry.OfxImagePlaneColour.R)**: R channel from input Source                                                                              |
|                                   |         |            | | **Color.G (uk.co.thefoundry.OfxImagePlaneColour.G)**: G channel from input Source                                                                              |
|                                   |         |            | | **Color.B (uk.co.thefoundry.OfxImagePlaneColour.B)**: B channel from input Source                                                                              |
|                                   |         |            | | **Color.A (uk.co.thefoundry.OfxImagePlaneColour.A)**: A channel from input Source                                                                              |
|                                   |         |            | | **0**: 0 constant channel                                                                                                                                      |
|                                   |         |            | | **1**: 1 constant channel                                                                                                                                      |
+-----------------------------------+---------+------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| All Planes / ``processAllPlanes`` | Boolean | Off        | When checked all planes in input will be processed and output to the same plane as in input. It is useful for example to apply a Transform effect on all planes. |
+-----------------------------------+---------+------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Clip Info... / ``clipInfo``       | Button  |            | Display information about the inputs                                                                                                                             |
+-----------------------------------+---------+------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.openfx.Premult.png
   :width: 10.0%
