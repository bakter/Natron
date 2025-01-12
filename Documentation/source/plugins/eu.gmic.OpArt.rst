.. _eu.gmic.OpArt:

G’MIC Op Art node
=================

*This documentation is for version 1.0 of G’MIC Op Art (eu.gmic.OpArt).*

Description
-----------

Note: If you set the parameter Shape to Custom layers, the different shapes used to map the pixel intensities will be defined as the Number of scales top layers of your image. Don’t forget to set also Input layers to All to be sure these layers are passed to the filter.

Author: David Tschumperle. Latest Update: 2013/16/12.

Wrapper for the G’MIC framework (http://gmic.eu) written by Tobias Fleischer (http://www.reduxfx.com) and Frederic Devernay.

Inputs
------

+----------+-------------+----------+
| Input    | Description | Optional |
+==========+=============+==========+
| Source   |             | No       |
+----------+-------------+----------+
| Layer -1 |             | Yes      |
+----------+-------------+----------+
| Layer -2 |             | Yes      |
+----------+-------------+----------+
| Layer -3 |             | Yes      |
+----------+-------------+----------+

Controls
--------

.. tabularcolumns:: |>{\raggedright}p{0.2\columnwidth}|>{\raggedright}p{0.06\columnwidth}|>{\raggedright}p{0.07\columnwidth}|p{0.63\columnwidth}|

.. cssclass:: longtable

+-----------------------------------------------+---------+---------------+----------------------------+
| Parameter / script name                       | Type    | Default       | Function                   |
+===============================================+=========+===============+============================+
| Shape / ``Shape``                             | Choice  | Circles       | |                          |
|                                               |         |               | | **Custom Layers**        |
|                                               |         |               | | **Circles**              |
|                                               |         |               | | **Squares**              |
|                                               |         |               | | **Diamonds**             |
|                                               |         |               | | **Triangles**            |
|                                               |         |               | | **Horizontal Stripes**   |
|                                               |         |               | | **Vertical Stripes**     |
|                                               |         |               | | **Balls**                |
|                                               |         |               | | **Hearts**               |
|                                               |         |               | | **Stars**                |
|                                               |         |               | | **Arrows**               |
|                                               |         |               | | **Truchet**              |
|                                               |         |               | | **Circles (Outline)**    |
|                                               |         |               | | **Squares (Outline)**    |
|                                               |         |               | | **Diamonds (Outline)**   |
|                                               |         |               | | **Triangles (Outline)**  |
|                                               |         |               | | **Hearts (Outline)**     |
|                                               |         |               | | **Stars (Outline)**      |
|                                               |         |               | | **Arrows (Outline)**     |
+-----------------------------------------------+---------+---------------+----------------------------+
| Number of Scales / ``Number_of_Scales``       | Integer | 16            |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Resolution / ``Resolution``                   | Double  | 10            |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Zoom Factor / ``Zoom_Factor``                 | Integer | 2             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Minimal Size / ``Minimal_Size``               | Double  | 5             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Maximal Size / ``Maximal_Size``               | Double  | 90            |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Stencil Type / ``Stencil_Type``               | Choice  | Black & White | |                          |
|                                               |         |               | | **Black & White**        |
|                                               |         |               | | **RGB**                  |
|                                               |         |               | | **Color**                |
+-----------------------------------------------+---------+---------------+----------------------------+
| Allow Angle / ``Allow_Angle``                 | Choice  | 0 deg.        | |                          |
|                                               |         |               | | **0 deg.**               |
|                                               |         |               | | **90 deg.**              |
|                                               |         |               | | **180 deg.**             |
+-----------------------------------------------+---------+---------------+----------------------------+
| Negative / ``Negative``                       | Boolean | On            |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Antialiasing / ``Antialiasing``               | Boolean | On            |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Preview Type / ``Preview_Type``               | Choice  | Full          | |                          |
|                                               |         |               | | **Full**                 |
|                                               |         |               | | **Forward Horizontal**   |
|                                               |         |               | | **Forward Vertical**     |
|                                               |         |               | | **Backward Horizontal**  |
|                                               |         |               | | **Backward Vertical**    |
|                                               |         |               | | **Duplicate Top**        |
|                                               |         |               | | **Duplicate Left**       |
|                                               |         |               | | **Duplicate Bottom**     |
|                                               |         |               | | **Duplicate Right**      |
|                                               |         |               | | **Duplicate Horizontal** |
|                                               |         |               | | **Duplicate Vertical**   |
|                                               |         |               | | **Checkered**            |
|                                               |         |               | | **Checkered Inverse**    |
+-----------------------------------------------+---------+---------------+----------------------------+
| Output Layer / ``Output_Layer``               | Choice  | Layer 0       | |                          |
|                                               |         |               | | **Merged**               |
|                                               |         |               | | **Layer 0**              |
|                                               |         |               | | **Layer -1**             |
|                                               |         |               | | **Layer -2**             |
|                                               |         |               | | **Layer -3**             |
|                                               |         |               | | **Layer -4**             |
|                                               |         |               | | **Layer -5**             |
|                                               |         |               | | **Layer -6**             |
|                                               |         |               | | **Layer -7**             |
|                                               |         |               | | **Layer -8**             |
|                                               |         |               | | **Layer -9**             |
+-----------------------------------------------+---------+---------------+----------------------------+
| Resize Mode / ``Resize_Mode``                 | Choice  | Dynamic       | |                          |
|                                               |         |               | | **Fixed (Inplace)**      |
|                                               |         |               | | **Dynamic**              |
|                                               |         |               | | **Downsample 1/2**       |
|                                               |         |               | | **Downsample 1/4**       |
|                                               |         |               | | **Downsample 1/8**       |
|                                               |         |               | | **Downsample 1/16**      |
+-----------------------------------------------+---------+---------------+----------------------------+
| Ignore Alpha / ``Ignore_Alpha``               | Boolean | Off           |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Preview/Draft Mode / ``PreviewDraft_Mode``    | Boolean | Off           |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Global Random Seed / ``Global_Random_Seed``   | Integer | 0             |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Animate Random Seed / ``Animate_Random_Seed`` | Boolean | Off           |                            |
+-----------------------------------------------+---------+---------------+----------------------------+
| Log Verbosity / ``Log_Verbosity``             | Choice  | Off           | |                          |
|                                               |         |               | | **Off**                  |
|                                               |         |               | | **Level 1**              |
|                                               |         |               | | **Level 2**              |
|                                               |         |               | | **Level 3**              |
+-----------------------------------------------+---------+---------------+----------------------------+
