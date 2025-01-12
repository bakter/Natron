.. _net.sf.openfx.NoTimeBlurPlugin:

NoTimeBlur node
===============

*This documentation is for version 1.0 of NoTimeBlur (net.sf.openfx.NoTimeBlurPlugin).*

Description
-----------

Rounds fractional frame numbers to integers. This can be used to avoid computing non-integer frame numbers, and to discretize motion (useful for animated objects). This plug-in is usually inserted upstream from TimeBlur.

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

+-------------------------+--------+---------+-------------------------------------------------------------------+
| Parameter / script name | Type   | Default | Function                                                          |
+=========================+========+=========+===================================================================+
| Rounding / ``rounding`` | Choice | rint    | | Rounding type/operation to use when blocking fractional frames. |
|                         |        |         | | **rint**: Round to the nearest integer value.                   |
|                         |        |         | | **floor**: Round dound to the nearest integer value.            |
|                         |        |         | | **ceil**: Round up to the nearest integer value.                |
|                         |        |         | | **none**: Do not round.                                         |
+-------------------------+--------+---------+-------------------------------------------------------------------+
