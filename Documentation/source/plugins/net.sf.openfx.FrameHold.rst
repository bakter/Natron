.. _net.sf.openfx.FrameHold:

FrameHold node
==============

|pluginIcon| 

*This documentation is for version 1.0 of FrameHold (net.sf.openfx.FrameHold).*

Description
-----------

Hold a given frame for the input clip indefinitely, or use a subsample of the input frames and hold them for several frames.

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

+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name      | Type    | Default | Function                                                                                                                                                                                             |
+==============================+=========+=========+======================================================================================================================================================================================================+
| First Frame / ``firstFrame`` | Integer | 0       | Reference input frame (the frame to hold if increment is 0).                                                                                                                                         |
+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Increment / ``increment``    | Integer | 0       | If increment is 0, only the “firstFrame” will be held. If it is positive, every multiple of “increment” plus “firstFrame” will be held for “increment” frames afterwards (before if it is negative). |
+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.openfx.FrameHold.png
   :width: 10.0%
