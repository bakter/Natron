.. _net.sf.openfx.TimeDissolvePlugin:

TimeDissolve node
=================

*This documentation is for version 1.0 of TimeDissolve (net.sf.openfx.TimeDissolvePlugin).*

Description
-----------

Dissolves between two inputs, starting the dissolve at the in frame and ending at the out frame.

You can specify the dissolve curve over time, if the OFX host supports it (else it is a traditional smoothstep).

See also http://opticalenquiry.com/nuke/index.php?title=TimeDissolve

Inputs
------

+-------+----------------------------------------+----------+
| Input | Description                            | Optional |
+=======+========================================+==========+
| B     | The input you intend to dissolve from. | Yes      |
+-------+----------------------------------------+----------+
| A     | The input you intend to dissolve from. | Yes      |
+-------+----------------------------------------+----------+

Controls
--------

.. tabularcolumns:: |>{\raggedright}p{0.2\columnwidth}|>{\raggedright}p{0.06\columnwidth}|>{\raggedright}p{0.07\columnwidth}|p{0.63\columnwidth}|

.. cssclass:: longtable

+---------------------------+------------+---------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name   | Type       | Default | Function                                                                                                                                                                                  |
+===========================+============+=========+===========================================================================================================================================================================================+
| In / ``dissolveIn``       | Integer    | 1       | Start dissolve at this frame number.                                                                                                                                                      |
+---------------------------+------------+---------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Out / ``dissolveOut``     | Integer    | 10      | End dissolve at this frame number.                                                                                                                                                        |
+---------------------------+------------+---------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Curve / ``dissolveCurve`` | Parametric |         | Shape of the dissolve. Horizontal value is from 0 to 1: 0 is the frame before the In frame and should have a value of 0; 1 is the frame after the Out frame and should have a value of 1. |
+---------------------------+------------+---------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
