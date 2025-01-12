.. _eu.gmic.SmoothSkin:

G’MIC Smooth Skin node
======================

*This documentation is for version 1.0 of G’MIC Smooth Skin (eu.gmic.SmoothSkin).*

Description
-----------

Step 1: Skin detection

Step 2: Medium scale smoothing

Step 3: Details enhancement

Click here for a video tutorial: http://www.youtube.com/watch?v=H8pQfq-ybCc

Author: David Tschumperle. Latest Update: 2013/20/12.

Wrapper for the G’MIC framework (http://gmic.eu) written by Tobias Fleischer (http://www.reduxfx.com) and Frederic Devernay.

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

+------------------------------------------------+---------+---------------+-------------------------------+
| Parameter / script name                        | Type    | Default       | Function                      |
+================================================+=========+===============+===============================+
| Skin Estimation / ``Skin_Estimation``          | Choice  | Automatic     | |                             |
|                                                |         |               | | **None**                    |
|                                                |         |               | | **Manual**                  |
|                                                |         |               | | **Automatic**               |
+------------------------------------------------+---------+---------------+-------------------------------+
| Tolerance / ``Tolerance``                      | Double  | 0.5           |                               |
+------------------------------------------------+---------+---------------+-------------------------------+
| Smoothness / ``Smoothness``                    | Double  | 1             |                               |
+------------------------------------------------+---------+---------------+-------------------------------+
| Threshold / ``Threshold``                      | Double  | 1             |                               |
+------------------------------------------------+---------+---------------+-------------------------------+
| Pre-Normalize Image / ``PreNormalize_Image``   | Boolean | On            |                               |
+------------------------------------------------+---------+---------------+-------------------------------+
| X-Coordinate [Manual] / ``XCoordinate_Manual`` | Double  | 50            |                               |
+------------------------------------------------+---------+---------------+-------------------------------+
| Y-Coordinate [Manual] / ``YCoordinate_Manual`` | Double  | 50            |                               |
+------------------------------------------------+---------+---------------+-------------------------------+
| Radius [Manual] / ``Radius_Manual``            | Double  | 5             |                               |
+------------------------------------------------+---------+---------------+-------------------------------+
| Base Scale / ``Base_Scale``                    | Double  | 2             |                               |
+------------------------------------------------+---------+---------------+-------------------------------+
| Fine Scale / ``Fine_Scale``                    | Double  | 0.2           |                               |
+------------------------------------------------+---------+---------------+-------------------------------+
| Smoothness_2 / ``Smoothness_2``                | Double  | 3             |                               |
+------------------------------------------------+---------+---------------+-------------------------------+
| Smoothness Type / ``Smoothness_Type``          | Choice  | Bilateral     | |                             |
|                                                |         |               | | **Gaussian**                |
|                                                |         |               | | **Bilateral**               |
+------------------------------------------------+---------+---------------+-------------------------------+
| Gain / ``Gain``                                | Double  | 0.05          |                               |
+------------------------------------------------+---------+---------------+-------------------------------+
| Preview Data / ``Preview_Data``                | Choice  | Result Image  | |                             |
|                                                |         |               | | **Skin Mask**               |
|                                                |         |               | | **Base Scale**              |
|                                                |         |               | | **Medium Scale (Original)** |
|                                                |         |               | | **Medium Scale (Smoothed)** |
|                                                |         |               | | **Fine Scale**              |
|                                                |         |               | | **Result Image**            |
+------------------------------------------------+---------+---------------+-------------------------------+
| Preview Type / ``Preview_Type``                | Choice  | Full          | |                             |
|                                                |         |               | | **Full**                    |
|                                                |         |               | | **Forward Horizontal**      |
|                                                |         |               | | **Forward Vertical**        |
|                                                |         |               | | **Backward Horizontal**     |
|                                                |         |               | | **Backward Vertical**       |
|                                                |         |               | | **Duplicate Top**           |
|                                                |         |               | | **Duplicate Left**          |
|                                                |         |               | | **Duplicate Bottom**        |
|                                                |         |               | | **Duplicate Right**         |
|                                                |         |               | | **Duplicate Horizontal**    |
|                                                |         |               | | **Duplicate Vertical**      |
|                                                |         |               | | **Checkered**               |
|                                                |         |               | | **Checkered Inverse**       |
+------------------------------------------------+---------+---------------+-------------------------------+
| Preview Split / ``Preview_Split``              | Double  | x: 0.5 y: 0.5 |                               |
+------------------------------------------------+---------+---------------+-------------------------------+
| Output Layer / ``Output_Layer``                | Choice  | Layer 0       | |                             |
|                                                |         |               | | **Merged**                  |
|                                                |         |               | | **Layer 0**                 |
|                                                |         |               | | **Layer -1**                |
|                                                |         |               | | **Layer -2**                |
|                                                |         |               | | **Layer -3**                |
|                                                |         |               | | **Layer -4**                |
|                                                |         |               | | **Layer -5**                |
|                                                |         |               | | **Layer -6**                |
|                                                |         |               | | **Layer -7**                |
|                                                |         |               | | **Layer -8**                |
|                                                |         |               | | **Layer -9**                |
+------------------------------------------------+---------+---------------+-------------------------------+
| Resize Mode / ``Resize_Mode``                  | Choice  | Dynamic       | |                             |
|                                                |         |               | | **Fixed (Inplace)**         |
|                                                |         |               | | **Dynamic**                 |
|                                                |         |               | | **Downsample 1/2**          |
|                                                |         |               | | **Downsample 1/4**          |
|                                                |         |               | | **Downsample 1/8**          |
|                                                |         |               | | **Downsample 1/16**         |
+------------------------------------------------+---------+---------------+-------------------------------+
| Ignore Alpha / ``Ignore_Alpha``                | Boolean | Off           |                               |
+------------------------------------------------+---------+---------------+-------------------------------+
| Preview/Draft Mode / ``PreviewDraft_Mode``     | Boolean | Off           |                               |
+------------------------------------------------+---------+---------------+-------------------------------+
| Global Random Seed / ``Global_Random_Seed``    | Integer | 0             |                               |
+------------------------------------------------+---------+---------------+-------------------------------+
| Animate Random Seed / ``Animate_Random_Seed``  | Boolean | Off           |                               |
+------------------------------------------------+---------+---------------+-------------------------------+
| Log Verbosity / ``Log_Verbosity``              | Choice  | Off           | |                             |
|                                                |         |               | | **Off**                     |
|                                                |         |               | | **Level 1**                 |
|                                                |         |               | | **Level 2**                 |
|                                                |         |               | | **Level 3**                 |
+------------------------------------------------+---------+---------------+-------------------------------+
