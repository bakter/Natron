.. _net.sf.openfx.FrameRange:

FrameRange node
===============

|pluginIcon| 

*This documentation is for version 1.0 of FrameRange (net.sf.openfx.FrameRange).*

Description
-----------

Set the frame range for a clip. Useful in conjunction with AppendClipOFX.

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

+------------------------------+---------+------------------+-------------------------------------------------------------------------------------------------------------+
| Parameter / script name      | Type    | Default          | Function                                                                                                    |
+==============================+=========+==================+=============================================================================================================+
| Frame Range / ``frameRange`` | Integer | first: 1 last: 1 | Output frame range.                                                                                         |
+------------------------------+---------+------------------+-------------------------------------------------------------------------------------------------------------+
| Reset / ``reset``            | Button  |                  | Resets the frame range to its initial value.                                                                |
+------------------------------+---------+------------------+-------------------------------------------------------------------------------------------------------------+
| Before / ``before``          | Choice  | Black            | | What the plugin should return for frames before the first frame.                                          |
|                              |         |                  | | **Original (original)**: Return the original frame from the source, even if it is out of the frame range. |
|                              |         |                  | | **Hold (hold)**: Return the nearest frame within the frame range.                                         |
|                              |         |                  | | **Black (black)**: Return an empty frame.                                                                 |
+------------------------------+---------+------------------+-------------------------------------------------------------------------------------------------------------+
| After / ``after``            | Choice  | Black            | | What the plugin should return for frames after the last frame.                                            |
|                              |         |                  | | **Original (original)**: Return the original frame from the source, even if it is out of the frame range. |
|                              |         |                  | | **Hold (hold)**: Return the nearest frame within the frame range.                                         |
|                              |         |                  | | **Black (black)**: Return an empty frame.                                                                 |
+------------------------------+---------+------------------+-------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.openfx.FrameRange.png
   :width: 10.0%
