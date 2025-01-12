.. _net.sf.openfx.LayerContactSheetOFX:

LayerContactSheet node
======================

*This documentation is for version 1.0 of LayerContactSheet (net.sf.openfx.LayerContactSheetOFX).*

Description
-----------

Make a contact sheet from all layers.

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

+---------------------------------------+---------+-----------------+--------------------------------------------------------------------------------------+
| Parameter / script name               | Type    | Default         | Function                                                                             |
+=======================================+=========+=================+======================================================================================+
| Resolution / ``resolution``           | Integer | x: 3072 y: 2048 | Resolution of the output image, in pixels.                                           |
+---------------------------------------+---------+-----------------+--------------------------------------------------------------------------------------+
| Rows/Columns / ``rowsColumns``        | Integer | x: 3 y: 4       | How many rows and columns in the grid where the input images or frames are arranged. |
+---------------------------------------+---------+-----------------+--------------------------------------------------------------------------------------+
| Automatic Rows/Columns / ``autoDims`` | Boolean | On              | Automatically sets the number of rows/columns to display all layers.                 |
+---------------------------------------+---------+-----------------+--------------------------------------------------------------------------------------+
| Gap / ``gap``                         | Integer | 0               | Gap in pixels around each input or frame.                                            |
+---------------------------------------+---------+-----------------+--------------------------------------------------------------------------------------+
| Center / ``center``                   | Boolean | Off             | Center each input/frame within its cell.                                             |
+---------------------------------------+---------+-----------------+--------------------------------------------------------------------------------------+
| Row Order / ``rowOrder``              | Choice  | TopBottom       | | How image rows are populated.                                                      |
|                                       |         |                 | | **TopBottom (topbottom)**: From top to bottom row.                                 |
|                                       |         |                 | | **BottomTop (bottomtop)**: From bottom to top row.                                 |
+---------------------------------------+---------+-----------------+--------------------------------------------------------------------------------------+
| Column Order / ``colOrder``           | Choice  | LeftRight       | | How image columns are populated.                                                   |
|                                       |         |                 | | **LeftRight (leftright)**: From left to right column.                              |
|                                       |         |                 | | **RightLeft (rightleft)**: From right to left column.                              |
+---------------------------------------+---------+-----------------+--------------------------------------------------------------------------------------+
| Show Layer Names / ``showLayerNames`` | Boolean | Off             | Display the layer name in the bottom left of each frame.                             |
+---------------------------------------+---------+-----------------+--------------------------------------------------------------------------------------+
