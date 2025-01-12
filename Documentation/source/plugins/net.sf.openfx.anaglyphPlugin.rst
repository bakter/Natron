.. _net.sf.openfx.anaglyphPlugin:

Anaglyph node
=============

|pluginIcon| 

*This documentation is for version 1.0 of Anaglyph (net.sf.openfx.anaglyphPlugin).*

Description
-----------

Make an anaglyph image out of the two views of the input.

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

+--------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name        | Type    | Default | Function                                                                                                                                               |
+================================+=========+=========+========================================================================================================================================================+
| Color Amount / ``amtcolor``    | Double  | 0       | Amount of colour in the anaglyph: 0 = grayscale anaglyph, 1 = full-color anaglyph. Fusion is more difficult with full-color anaglyphs.                 |
+--------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------+
| (right=red) / ``swap``         | Boolean | Off     | Swap left and right views                                                                                                                              |
+--------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------+
| Horizontal Offset / ``offset`` | Integer | 0       | Horizontal offset. The red view is shifted to the left by half this amount, and the cyan view is shifted to the right by half this amount (in pixels). |
+--------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.openfx.anaglyphPlugin.png
   :width: 10.0%
