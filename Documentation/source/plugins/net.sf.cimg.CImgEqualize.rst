.. _net.sf.cimg.CImgEqualize:

Equalize node
=============

|pluginIcon| 

*This documentation is for version 2.0 of Equalize (net.sf.cimg.CImgEqualize).*

Description
-----------

Equalize histogram of pixel values.

To equalize image brightness only, use the HistEQCImg plugin.

Uses the ‘equalize’ function from the CImg library.

CImg is a free, open-source library distributed under the CeCILL-C (close to the GNU LGPL) or CeCILL (compatible with the GNU GPL) licenses. It can be used in commercial applications (see http://cimg.eu).

Inputs
------

+--------+-------------+----------+
| Input  | Description | Optional |
+========+=============+==========+
| Source |             | No       |
+--------+-------------+----------+
| Mask   |             | Yes      |
+--------+-------------+----------+

Controls
--------

.. tabularcolumns:: |>{\raggedright}p{0.2\columnwidth}|>{\raggedright}p{0.06\columnwidth}|>{\raggedright}p{0.07\columnwidth}|p{0.63\columnwidth}|

.. cssclass:: longtable

+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name      | Type    | Default | Function                                                                                                                           |
+==============================+=========+=========+====================================================================================================================================+
| NbLevels / ``nb_levels``     | Integer | 4096    | Number of histogram levels used for the equalization.                                                                              |
+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Min Value / ``min_value``    | Double  | 0       | Minimum pixel value considered for the histogram computation. All pixel values lower than min_value will not be counted.           |
+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Max Value / ``max_value``    | Double  | 1       | Maximum pixel value considered for the histogram computation. All pixel values higher than max_value will not be counted.          |
+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| (Un)premult / ``premult``    | Boolean | Off     | Divide the image by the alpha channel before processing, and re-multiply it afterwards. Use if the input images are premultiplied. |
+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert`` | Boolean | Off     | When checked, the effect is fully applied where the mask is 0.                                                                     |
+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                | Double  | 1       | Mix factor between the original and the transformed image.                                                                         |
+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.cimg.CImgEqualize.png
   :width: 10.0%
