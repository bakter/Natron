.. _fr.inria.built-in.DiskCache:

DiskCache node
==============

*This documentation is for version 1.0 of DiskCache (fr.inria.built-in.DiskCache).*

Description
-----------

This node caches all images of the connected input node onto the disk with full 32bit floating point raw data. When an image is found in the cache, Natron will then not request the input branch to render out that image. The DiskCache node only caches full images and does not split up the images in chunks. The DiskCache node is useful if working with a large and complex node tree: this allows to break the tree into smaller branches and cache any branch that you’re no longer working on. The cached images are saved by default in the same directory that is used for the viewer cache but you can set its location and size in the preferences. A solid state drive disk is recommended for efficiency of this node. By default all images that pass into the node are cached but they depend on the zoom-level of the viewer. For convenience you can cache a specific frame range at scale 100% much like a writer node would do.

WARNING: The DiskCache node must be part of the tree when you want to read cached data from it.

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

+------------------------------+--------+-------------------+------------------------------------------------------------------------------+
| Parameter / script name      | Type   | Default           | Function                                                                     |
+==============================+========+===================+==============================================================================+
| Frame range / ``frameRange`` | Choice | Input frame range | |                                                                            |
|                              |        |                   | | **Input frame range**                                                      |
|                              |        |                   | | **Project frame range**                                                    |
|                              |        |                   | | **Manual**                                                                 |
+------------------------------+--------+-------------------+------------------------------------------------------------------------------+
| Pre-cache / ``preRender``    | Button |                   | Cache the frame range specified by rendering images at zoom-level 100% only. |
+------------------------------+--------+-------------------+------------------------------------------------------------------------------+
