.. _net.sf.openfx.DifferencePlugin:

Difference node
===============

|pluginIcon| 

*This documentation is for version 1.0 of Difference (net.sf.openfx.DifferencePlugin).*

Description
-----------

Produce a rough matte from the difference of two input images.

A is the background without the subject (clean plate). B is the subject with the background. RGB is copied from B, the difference is output to alpha, after applying offset and gain.

See also: http://opticalenquiry.com/nuke/index.php?title=The_Keyer_Nodes#Difference and http://opticalenquiry.com/nuke/index.php?title=Keying_Tips

Inputs
------

+-------+-----------------------------------------------------+----------+
| Input | Description                                         | Optional |
+=======+=====================================================+==========+
| B     | The subject with the background.                    | No       |
+-------+-----------------------------------------------------+----------+
| A     | The background without the subject (a clean plate). | No       |
+-------+-----------------------------------------------------+----------+

Controls
--------

.. tabularcolumns:: |>{\raggedright}p{0.2\columnwidth}|>{\raggedright}p{0.06\columnwidth}|>{\raggedright}p{0.07\columnwidth}|p{0.63\columnwidth}|

.. cssclass:: longtable

+-------------------------+--------+---------+-------------------------------------------------+
| Parameter / script name | Type   | Default | Function                                        |
+=========================+========+=========+=================================================+
| Offset / ``offset``     | Double | 0       | Value subtracted to each pixel of the output    |
+-------------------------+--------+---------+-------------------------------------------------+
| Gain / ``gain``         | Double | 1       | Multiply each pixel of the output by this value |
+-------------------------+--------+---------+-------------------------------------------------+

.. |pluginIcon| image:: net.sf.openfx.DifferencePlugin.png
   :width: 10.0%
