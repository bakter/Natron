.. _net.sf.openfx.switchPlugin:

Switch node
===========

|pluginIcon| 

*This documentation is for version 1.0 of Switch (net.sf.openfx.switchPlugin).*

Description
-----------

Lets you switch between any number of inputs.

The selected input number may be manually selected using the “which” parameter, or selected automatically if “automatic” is checked.

Automatic selection works by selecting, at any given time, the first input which is connected and has a non-empty region of definition.

A typical use case is a graph where an edited movie is used as input, then split into shots using one FrameRange plugin per shot (with “before” and “after” set to “Black”), followed by a different processing for each shot (e.g. stabilization, color correction, cropping), and all outputs are gathered into an edited movie using a single “Switch” plug-in in automatic mode. In this graph, no plug-in shifts time, and thus there is no risk of desynchronization, whereas using “AppendClip” instead of “Switch” may shift time if there is an error in one of the FrameRange ranges (a typical error is to use the same frame number as the last frame of shot n and the first frame of shot n+1).

This plugin concatenates transforms.

See also: http://opticalenquiry.com/nuke/index.php?title=Switch

Inputs
------

+-------+-------------+----------+
| Input | Description | Optional |
+=======+=============+==========+
| 0     |             | Yes      |
+-------+-------------+----------+
| 1     |             | Yes      |
+-------+-------------+----------+
| 2     |             | Yes      |
+-------+-------------+----------+
| 3     |             | Yes      |
+-------+-------------+----------+

Controls
--------

.. tabularcolumns:: |>{\raggedright}p{0.2\columnwidth}|>{\raggedright}p{0.06\columnwidth}|>{\raggedright}p{0.07\columnwidth}|p{0.63\columnwidth}|

.. cssclass:: longtable

+---------------------------+---------+---------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name   | Type    | Default | Function                                                                                                                                                                                           |
+===========================+=========+=========+====================================================================================================================================================================================================+
| Which / ``which``         | Integer | 0       | The input to display. Each input is displayed at the value corresponding to the number of the input. For example, setting which to 4 displays the image from input 4.                              |
+---------------------------+---------+---------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Automatic / ``automatic`` | Boolean | Off     | When checked, automatically switch to the first connected input with a non-empty region of definition. This can be used to recompose a single clip from effects applied to different frame ranges. |
+---------------------------+---------+---------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.openfx.switchPlugin.png
   :width: 10.0%
