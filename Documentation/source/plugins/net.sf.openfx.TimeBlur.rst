.. _net.sf.openfx.TimeBlur:

TimeBlur node
=============

*This documentation is for version 1.0 of TimeBlur (net.sf.openfx.TimeBlur).*

Description
-----------

Blend frames of the input clip over the shutter range.

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

+-----------------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name                 | Type    | Default | Function                                                                                                                                                                                                                                                                                                                                               |
+=========================================+=========+=========+========================================================================================================================================================================================================================================================================================================================================================+
| Divisions / ``division``                | Integer | 10      | Number of time samples along the shutter time. The first frame is always at the start of the shutter range, and the shutter range is divided by divisions. The frame corresponding to the end of the shutter range is not included. If divisions=4, Shutter=1, Shutter Offset=Centered, this leads to blending the frames at t-0.5, t-0.25, t, t+0.25. |
+-----------------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Shutter / ``shutter``                   | Double  | 0.5     | Controls how long (in frames) the shutter should remain open.                                                                                                                                                                                                                                                                                          |
+-----------------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Shutter Offset / ``shutterOffset``      | Choice  | Start   | | Controls when the shutter should be open/closed. Ignored if there is no motion blur (i.e. shutter=0 or motionBlur=0).                                                                                                                                                                                                                                |
|                                         |         |         | | **Centered (centered)**: Centers the shutter around the frame (from t-shutter/2 to t+shutter/2)                                                                                                                                                                                                                                                      |
|                                         |         |         | | **Start (start)**: Open the shutter at the frame (from t to t+shutter)                                                                                                                                                                                                                                                                               |
|                                         |         |         | | **End (end)**: Close the shutter at the frame (from t-shutter to t)                                                                                                                                                                                                                                                                                  |
|                                         |         |         | | **Custom (custom)**: Open the shutter at t+shuttercustomoffset (from t+shuttercustomoffset to t+shuttercustomoffset+shutter)                                                                                                                                                                                                                         |
+-----------------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Custom Offset / ``shutterCustomOffset`` | Double  | 0       | When custom is selected, the shutter is open at current time plus this offset (in frames). Ignored if there is no motion blur (i.e. shutter=0 or motionBlur=0).                                                                                                                                                                                        |
+-----------------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
