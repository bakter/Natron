.. _net.sf.openfx.sideBySidePlugin:

SideBySide node
===============

|pluginIcon| 

*This documentation is for version 1.0 of SideBySide (net.sf.openfx.sideBySidePlugin).*

Description
-----------

Put the left and right view of the input next to each other.

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

+-------------------------+---------+---------+------------------------------------------------+
| Parameter / script name | Type    | Default | Function                                       |
+=========================+=========+=========+================================================+
| Vertical / ``vertical`` | Boolean | Off     | Stack views vertically instead of horizontally |
+-------------------------+---------+---------+------------------------------------------------+
| View 1 / ``view1``      | Choice  | Left    | | First view                                   |
|                         |         |         | | **Left (left)**: Left view.                  |
|                         |         |         | | **Right (right)**: Right view.               |
+-------------------------+---------+---------+------------------------------------------------+
| View 2 / ``view2``      | Choice  | Right   | | Second view                                  |
|                         |         |         | | **Left (left)**: Left view.                  |
|                         |         |         | | **Right (right)**: Right view.               |
+-------------------------+---------+---------+------------------------------------------------+

.. |pluginIcon| image:: net.sf.openfx.sideBySidePlugin.png
   :width: 10.0%
