.. _net.sf.cimg.CImgHistEQ:

HistEQ node
===========

|pluginIcon| 

*This documentation is for version 2.0 of HistEQ (net.sf.cimg.CImgHistEQ).*

Description
-----------

Equalize histogram of brightness values.

Uses the ‘equalize’ function from the CImg library on the ‘V’ channel of the HSV decomposition of the image.

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
| (Un)premult / ``premult``    | Boolean | Off     | Divide the image by the alpha channel before processing, and re-multiply it afterwards. Use if the input images are premultiplied. |
+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert`` | Boolean | Off     | When checked, the effect is fully applied where the mask is 0.                                                                     |
+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                | Double  | 1       | Mix factor between the original and the transformed image.                                                                         |
+------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.cimg.CImgHistEQ.png
   :width: 10.0%
