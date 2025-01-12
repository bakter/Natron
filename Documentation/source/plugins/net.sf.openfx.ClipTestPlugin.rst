.. _net.sf.openfx.ClipTestPlugin:

ClipTest node
=============

|pluginIcon| 

*This documentation is for version 2.0 of ClipTest (net.sf.openfx.ClipTestPlugin).*

Description
-----------

Draw zebra stripes on all pixels outside of the specified range.

See also: http://opticalenquiry.com/nuke/index.php?title=Evaluating_Color#The_ClipTest_node

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

+------------------------------+---------+---------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name      | Type    | Default             | Function                                                                                                                           |
+==============================+=========+=====================+====================================================================================================================================+
| Lower / ``lower``            | Color   | r: 0 g: 0 b: 0 a: 0 | Highlight pixels lower than this value.                                                                                            |
+------------------------------+---------+---------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Upper / ``upper``            | Color   | r: 1 g: 1 b: 1 a: 1 | Highlight pixels higher than this value.                                                                                           |
+------------------------------+---------+---------------------+------------------------------------------------------------------------------------------------------------------------------------+
| (Un)premult / ``premult``    | Boolean | Off                 | Divide the image by the alpha channel before processing, and re-multiply it afterwards. Use if the input images are premultiplied. |
+------------------------------+---------+---------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert`` | Boolean | Off                 | When checked, the effect is fully applied where the mask is 0.                                                                     |
+------------------------------+---------+---------------------+------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                | Double  | 1                   | Mix factor between the original and the transformed image.                                                                         |
+------------------------------+---------+---------------------+------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.openfx.ClipTestPlugin.png
   :width: 10.0%
