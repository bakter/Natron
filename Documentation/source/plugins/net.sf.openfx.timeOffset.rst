.. _net.sf.openfx.timeOffset:

TimeOffset node
===============

|pluginIcon| 

*This documentation is for version 1.0 of TimeOffset (net.sf.openfx.timeOffset).*

Description
-----------

Move the input clip forward or backward in time. This can also reverse the order of the input frames so that last one is first.

See also http://opticalenquiry.com/nuke/index.php?title=TimeOffset

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

+--------------------------------------------+---------+---------+-----------------------------------------------------------------+
| Parameter / script name                    | Type    | Default | Function                                                        |
+============================================+=========+=========+=================================================================+
| Time Offset (Frames) / ``timeOffset``      | Integer | 0       | Offset in frames (frame f from the input will be at f+offset)   |
+--------------------------------------------+---------+---------+-----------------------------------------------------------------+
| Reverse Input / ``reverseInput``           | Boolean | Off     | Reverse the order of the input frames so that last one is first |
+--------------------------------------------+---------+---------+-----------------------------------------------------------------+
| Clip to Input Range / ``clipToInputRange`` | Boolean | Off     | Never ask for frames outside of the input frame range.          |
+--------------------------------------------+---------+---------+-----------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.openfx.timeOffset.png
   :width: 10.0%
