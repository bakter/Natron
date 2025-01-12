.. _eu.cimg.Inpaint:

Inpaint node
============

|pluginIcon| 

*This documentation is for version 1.0 of Inpaint (eu.cimg.Inpaint).*

Description
-----------

Inpaint (a.k.a. content-aware fill) the areas indicated by the Mask input using patch-based inpainting.

Be aware that this filter may produce different results on each frame of a video, even if there is little change in the video content. To inpaint areas with lots of details, it may be better to inpaint on a single frame and paste the inpainted area on other frames (if a transform is also required to match the other frames, it may be computed by tracking).

A tutorial on using this filter can be found at http://blog.patdavid.net/2014/02/getting-around-in-gimp-gmic-inpainting.html

The algorithm is described in the two following publications:

“A Smarter Examplar-based Inpainting Algorithm using Local and Global Heuristics for more Geometric Coherence.” (M. Daisy, P. Buyssens, D. Tschumperlé, O. Lezoray). IEEE International Conference on Image Processing (ICIP’14), Paris/France, Oct. 2014

and

“A Fast Spatial Patch Blending Algorithm for Artefact Reduction in Pattern-based Image Inpainting.” (M. Daisy, D. Tschumperlé, O. Lezoray). SIGGRAPH Asia 2013 Technical Briefs, Hong-Kong, November 2013.

Uses the ‘inpaint’ plugin from the CImg library.

CImg is a free, open-source library distributed under the CeCILL-C (close to the GNU LGPL) or CeCILL (compatible with the GNU GPL) licenses. It can be used in commercial applications (see http://cimg.eu). The ‘inpaint’ CImg plugin is distributed under the CeCILL (compatible with the GNU GPL) license.

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

+-----------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name                 | Type    | Default | Function                                                                                                                           |
+=========================================+=========+=========+====================================================================================================================================+
| Patch Size / ``patchSize``              | Integer | 7       |                                                                                                                                    |
+-----------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Lookup Size / ``lookupSize``            | Double  | 16      |                                                                                                                                    |
+-----------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Lookup Factor / ``lookupFactor``        | Double  | 0.1     |                                                                                                                                    |
+-----------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Blend Size / ``blendSize``              | Double  | 1.2     |                                                                                                                                    |
+-----------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Blend Threshold / ``blendThreshold``    | Double  | 0       |                                                                                                                                    |
+-----------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Blend Decay / ``blendDecay``            | Double  | 0.05    |                                                                                                                                    |
+-----------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Blend Scales / ``blendScales``          | Integer | 10      |                                                                                                                                    |
+-----------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Allow Outer Blending / ``isBlendOuter`` | Boolean | On      |                                                                                                                                    |
+-----------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| (Un)premult / ``premult``               | Boolean | Off     | Divide the image by the alpha channel before processing, and re-multiply it afterwards. Use if the input images are premultiplied. |
+-----------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert``            | Boolean | Off     | When checked, the effect is fully applied where the mask is 0.                                                                     |
+-----------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                           | Double  | 1       | Mix factor between the original and the transformed image.                                                                         |
+-----------------------------------------+---------+---------+------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: eu.cimg.Inpaint.png
   :width: 10.0%
