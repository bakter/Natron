.. _eu.gmic.Pack:

G’MIC Pack node
===============

*This documentation is for version 1.0 of G’MIC Pack (eu.gmic.Pack).*

Description
-----------

This filter tries to pack all input layers into a single image, while trying to minimize the empty areas. This problem being NP-hard, the algorithm finds (of course) a non-optimal, but often acceptable solution to this packing problem.

Author: David Tschumperle. Latest Update: 2019/03/20.

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

+-------------------------------------------------------+---------+-------------------+-------------------------+
| Parameter / script name                               | Type    | Default           | Function                |
+=======================================================+=========+===================+=========================+
| Order By / ``Order_By``                               | Choice  | Maximum Dimension | |                       |
|                                                       |         |                   | | **Width**             |
|                                                       |         |                   | | **Height**            |
|                                                       |         |                   | | **Maximum Dimension** |
|                                                       |         |                   | | **Area**              |
|                                                       |         |                   | | **Name**              |
+-------------------------------------------------------+---------+-------------------+-------------------------+
| Tends to Be Square / ``Tends_to_Be_Square``           | Boolean | On                |                         |
+-------------------------------------------------------+---------+-------------------+-------------------------+
| Force Transparency / ``Force_Transparency``           | Boolean | On                |                         |
+-------------------------------------------------------+---------+-------------------+-------------------------+
| Add Image Label / ``Add_Image_Label``                 | Boolean | Off               |                         |
+-------------------------------------------------------+---------+-------------------+-------------------------+
| Font Height (px) / ``Font_Height_px``                 | Double  | 16                |                         |
+-------------------------------------------------------+---------+-------------------+-------------------------+
| Font Colors / ``Font_Colors``                         | Choice  | Black on white    | |                       |
|                                                       |         |                   | | **White on black**    |
|                                                       |         |                   | | **Black on white**    |
+-------------------------------------------------------+---------+-------------------+-------------------------+
| Output Coordinates File / ``Output_Coordinates_File`` | Boolean | Off               |                         |
+-------------------------------------------------------+---------+-------------------+-------------------------+
| Output Folder / ``Output_Folder``                     | N/A     |                   |                         |
+-------------------------------------------------------+---------+-------------------+-------------------------+
| Output Layer / ``Output_Layer``                       | Choice  | Layer 0           | |                       |
|                                                       |         |                   | | **Merged**            |
|                                                       |         |                   | | **Layer 0**           |
|                                                       |         |                   | | **Layer -1**          |
|                                                       |         |                   | | **Layer -2**          |
|                                                       |         |                   | | **Layer -3**          |
|                                                       |         |                   | | **Layer -4**          |
|                                                       |         |                   | | **Layer -5**          |
|                                                       |         |                   | | **Layer -6**          |
|                                                       |         |                   | | **Layer -7**          |
|                                                       |         |                   | | **Layer -8**          |
|                                                       |         |                   | | **Layer -9**          |
+-------------------------------------------------------+---------+-------------------+-------------------------+
| Resize Mode / ``Resize_Mode``                         | Choice  | Dynamic           | |                       |
|                                                       |         |                   | | **Fixed (Inplace)**   |
|                                                       |         |                   | | **Dynamic**           |
|                                                       |         |                   | | **Downsample 1/2**    |
|                                                       |         |                   | | **Downsample 1/4**    |
|                                                       |         |                   | | **Downsample 1/8**    |
|                                                       |         |                   | | **Downsample 1/16**   |
+-------------------------------------------------------+---------+-------------------+-------------------------+
| Ignore Alpha / ``Ignore_Alpha``                       | Boolean | Off               |                         |
+-------------------------------------------------------+---------+-------------------+-------------------------+
| Preview/Draft Mode / ``PreviewDraft_Mode``            | Boolean | Off               |                         |
+-------------------------------------------------------+---------+-------------------+-------------------------+
| Global Random Seed / ``Global_Random_Seed``           | Integer | 0                 |                         |
+-------------------------------------------------------+---------+-------------------+-------------------------+
| Animate Random Seed / ``Animate_Random_Seed``         | Boolean | Off               |                         |
+-------------------------------------------------------+---------+-------------------+-------------------------+
| Log Verbosity / ``Log_Verbosity``                     | Choice  | Off               | |                       |
|                                                       |         |                   | | **Off**               |
|                                                       |         |                   | | **Level 1**           |
|                                                       |         |                   | | **Level 2**           |
|                                                       |         |                   | | **Level 3**           |
+-------------------------------------------------------+---------+-------------------+-------------------------+
