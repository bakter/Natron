.. _net.sf.openfx.AppendClip:

AppendClip node
===============

*This documentation is for version 1.0 of AppendClip (net.sf.openfx.AppendClip).*

Description
-----------

Append one clip to another.

See also: http://opticalenquiry.com/nuke/index.php?title=AppendClip

Inputs
------

+-------+-------------+----------+
| Input | Description | Optional |
+=======+=============+==========+
| 1     |             | Yes      |
+-------+-------------+----------+
| 2     |             | Yes      |
+-------+-------------+----------+
| 3     |             | Yes      |
+-------+-------------+----------+
| 4     |             | Yes      |
+-------+-------------+----------+

Controls
--------

.. tabularcolumns:: |>{\raggedright}p{0.2\columnwidth}|>{\raggedright}p{0.06\columnwidth}|>{\raggedright}p{0.07\columnwidth}|p{0.63\columnwidth}|

.. cssclass:: longtable

+------------------------------------+---------+---------+----------------------------------------------------------------------------+
| Parameter / script name            | Type    | Default | Function                                                                   |
+====================================+=========+=========+============================================================================+
| Fade In / ``fadeIn``               | Integer | 0       | Number of frames to fade in from black at the beginning of the first clip. |
+------------------------------------+---------+---------+----------------------------------------------------------------------------+
| Fade Out / ``fadeOut``             | Integer | 0       | Number of frames to fade out to black at the end of the last clip.         |
+------------------------------------+---------+---------+----------------------------------------------------------------------------+
| Cross Dissolve / ``crossDissolve`` | Integer | 0       | Number of frames to cross-dissolve between clips.                          |
+------------------------------------+---------+---------+----------------------------------------------------------------------------+
| First Frame / ``firstFrame``       | Integer | 1       | Frame to start the first clip at.                                          |
+------------------------------------+---------+---------+----------------------------------------------------------------------------+
| Last Frame / ``lastFrame``         | Integer | 0       | Last frame of the assembled clip (read-only).                              |
+------------------------------------+---------+---------+----------------------------------------------------------------------------+
| Update / ``updateLastFrame``       | Button  |         | Update lastFrame.                                                          |
+------------------------------------+---------+---------+----------------------------------------------------------------------------+
