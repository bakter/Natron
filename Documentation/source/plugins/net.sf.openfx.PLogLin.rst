.. _net.sf.openfx.PLogLin:

PLogLin node
============

*This documentation is for version 1.0 of PLogLin (net.sf.openfx.PLogLin).*

Description
-----------

Convert between logarithmic and linear encoding.

This method uses the so-called “Josh Pines log conversion” or “printing density transform” (as described in http://lists.gnu.org/archive/html/openexr-devel/2005-03/msg00006.html), which is based on a single gray point, rather than the white and black points in the Cineon formula (as implemented in the Log2Lin plugin).

Log to Lin conversion: xLin = linRef \* pow( 10.0, (xLog \* 1023. - logRef)*density/nGamma )

Lin to Log conversion: xLog = (logRef + log10(max( xLin, 1e-10 ) / linRef)*nGamma/density) / 1023.

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

+-------------------------------+---------+----------------------------+---------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name       | Type    | Default                    | Function                                                                                                                                    |
+===============================+=========+============================+=============================================================================================================================================+
| Operation / ``operation``     | Choice  | Log to Lin                 | | The operation to perform.                                                                                                                 |
|                               |         |                            | | **Log to Lin (log2lin)**: Convert the input from logarithmic to linear colorspace (usually after a Read node).                            |
|                               |         |                            | | **Lin to Log (lin2log)**: Convert the input from linear to logarithmic colorspace (usually before a Write node).                          |
+-------------------------------+---------+----------------------------+---------------------------------------------------------------------------------------------------------------------------------------------+
| Linear Reference / ``linRef`` | Color   | r: 0.18 g: 0.18 b: 0.18    | Linear value of the reference gray point. Set this to the linear value that corresponds with the log reference value.                       |
+-------------------------------+---------+----------------------------+---------------------------------------------------------------------------------------------------------------------------------------------+
| Log Reference / ``logRef``    | Color   | r: 445 g: 445 b: 445       | Log value of the reference gray point. Set this to the log value that corresponds with the lin reference value.                             |
+-------------------------------+---------+----------------------------+---------------------------------------------------------------------------------------------------------------------------------------------+
| Negative Gamma / ``nGamma``   | Color   | r: 0.6 g: 0.6 b: 0.6       | The film response gamma value.                                                                                                              |
+-------------------------------+---------+----------------------------+---------------------------------------------------------------------------------------------------------------------------------------------+
| Density / ``density``         | Color   | r: 0.002 g: 0.002 b: 0.002 | Density per code value. The change in the negative gamma for each log space code value. This is usually left to the default value of 0.002. |
+-------------------------------+---------+----------------------------+---------------------------------------------------------------------------------------------------------------------------------------------+
| (Un)premult / ``premult``     | Boolean | Off                        | Divide the image by the alpha channel before processing, and re-multiply it afterwards. Use if the input images are premultiplied.          |
+-------------------------------+---------+----------------------------+---------------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert``  | Boolean | Off                        | When checked, the effect is fully applied where the mask is 0.                                                                              |
+-------------------------------+---------+----------------------------+---------------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                 | Double  | 1                          | Mix factor between the original and the transformed image.                                                                                  |
+-------------------------------+---------+----------------------------+---------------------------------------------------------------------------------------------------------------------------------------------+
