.. _fr.inria.openfx.SeExpr:

SeExpr node
===========

|pluginIcon| 

*This documentation is for version 2.0 of SeExpr (fr.inria.openfx.SeExpr).*

Description
-----------

Use the SeExpr expression language (by Walt Disney Animation Studios) to process images.

What is SeExpr?
~~~~~~~~~~~~~~~

SeExpr is a very simple mathematical expression language used in graphics software (RenderMan, Maya, Mudbox, Yeti).

See the `SeExpr Home Page <http://www.disneyanimation.com/technology/seexpr.html>`__ and `SeExpr Language Documentation <http://wdas.github.io/SeExpr/doxygen/userdoc.html>`__ for more information.

SeExpr is licensed under the Apache License, Version 2.0, and is Copyright Disney Enterprises, Inc.

SeExpr vs. SeExprSimple
~~~~~~~~~~~~~~~~~~~~~~~

The SeExpr plugin comes in two versions:

-  *SeExpr* has a single vector expression for the color channels, and a scalar expression for the alpha channel. The source color is accessed through the ``Cs``\ vector, and alpha through the ``As`` scalar, as specified in the original SeExpr language.
-  *SeExprSimple* has one scalar expression per channel, and the source channels may also be accessed through scalars (``r``, ``g``, ``b``, ``a``).

SeExpr extensions
~~~~~~~~~~~~~~~~~

A few pre-defined variables and functions were added to the language for filtering and blending several input images.

The following pre-defined variables can be used in the script:

-  ``x``: X coordinate (in pixel units) of the pixel to render.
-  ``y``: Y coordinate (in pixel units) of the pixel to render.
-  ``u``: X coordinate (normalized in the [0,1] range) of the output pixel to render.
-  ``v``: Y coordinate (normalized in the [0,1] range) of the output pixel to render.
-  ``sx``, ``sy``: Scale at which the image is being rendered. Depending on the zoom level of the viewer, the image might be rendered at a lower scale than usual. This parameter is useful when producing spatial effects that need to be invariant to the pixel scale, especially when using X and Y coordinates. (0.5,0.5) means that the image is being rendered at half of its original size.
-  ``par``: The pixel aspect ratio.
-  ``cx``, ``cy``: Shortcuts for ``(x + 0.5)/par/sx`` and ``(y + 0.5)/sy``, i.e. the canonical coordinates of the current pixel.
-  ``frame``: Current frame being rendered
-  ``Cs``, ``As``: Color (RGB vector) and alpha (scalar) of the image from input 1.
-  ``CsN``, ``AsN``: Color (RGB vector) and alpha (scalar) of the image from input N, e.g. ``Cs2`` and ``As2`` for input 2.
-  ``output_width``, ``output_height``: Dimensions of the output image being rendered.
-  ``input_width``, ``input_height``: Dimensions of image from input 1, in pixels.
-  ``input_widthN``, ``input_heightN``: Dimensions of image from input N, e.g. ``input_width2`` and ``input_height2`` for input 2.

The following additional functions are available:

-  ``color cpixel(int i, int f, float x, float y, int interp = 0)``: interpolates the color from input i at the pixel position (x,y) in the image, at frame f.
-  ``float apixel(int i, int f, float x, float y, int interp = 0)``: interpolates the alpha from input i at the pixel position (x,y) in the image, at frame f.

The pixel position of the center of the bottom-left pixel is (0., 0.).

The first input has index i=1.

``interp`` controls the interpolation filter, and can take one of the following values:

-  0: impulse - (nearest neighbor / box) Use original values
-  1: bilinear - (tent / triangle) Bilinear interpolation between original values
-  2: cubic - (cubic spline) Some smoothing
-  3: Keys - (Catmull-Rom / Hermite spline) Some smoothing, plus minor sharpening (*)
-  4: Simon - Some smoothing, plus medium sharpening (*)
-  5: Rifman - Some smoothing, plus significant sharpening (*)
-  6: Mitchell - Some smoothing, plus blurring to hide pixelation (*+)
-  7: Parzen - (cubic B-spline) Greatest smoothing of all filters (+)
-  8: notch - Flat smoothing (which tends to hide moire’ patterns) (+)

Some filters may produce values outside of the initial range (*) or modify the values even at integer positions (+).

Sample scripts
~~~~~~~~~~~~~~

Add green channel to red, keep green, and apply a 50% gain on blue
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

*SeExprSimple:*

::

   r+g
   g
   0.5*b

*SeExpr:*

::

   [Cs[0]+Cs[1], Cs[1], 0.5*Cs[2]]

“Multiply” merge operator on inputs 1 and 2
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

*SeExprSimple:*

::

   r*r2
   g*g2
   b*b2
   a+a2-a*a2

*SeExpr:*

::

   Cs * Cs2
   As + As2 - As * As2

“Over” merge operator on inputs 1 and 2
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

*SeExprSimple:*

::

   r+r2*(1-a)
   g+g2*(1-a)
   b+b2*(1-a)
   a+a2-a*a2

*SeExpr:*

::

   Cs + Cs2 * (1 -  As)
   As + As2 - As * As2

Generating a time-varying colored Perlin noise with size x1
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

::

   cnoise([cx/x1,cy/x1,frame])

Average pixels over the previous, current and next frame
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

*SeExpr:*

::

   prev = cpixel(1,frame - 1,x,y);
   cur = Cs;
   next = cpixel(1,frame + 1,x,y);
   (prev + cur + next) / 3;

“Wave” - displace columns of pixels vertically according to a sine wave function
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

*SeExpr:*

::

   cpixel(1,frame,x,y+x2*sy*sin(2*3.1416*(x/sx - x3)/x1),2)

Set the No. of scalar params to 3.

-  x1 is the horizontal wavelength in pixels.
-  x2 is the vertical amplitude in pixels.
-  x3 is the horizontal shift in pixels.

Custom parameters
~~~~~~~~~~~~~~~~~

To use custom variables that are pre-defined in the plug-in (scalars, positions and colors) you must reference them using their script-name in the expression. For example, the parameter x1 can be referenced using x1 in the script:

::

   Cs + x1

Multi-instruction expressions
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

If an expression spans multiple instructions (usually written one per line), each instruction must end with a semicolumn (‘;’). The last instruction of the expression is considered as the final value of the pixel (a RGB vector or an Alpha scalar, depending on the script), and must not be terminated by a semicolumn. More documentation is available on the `SeExpr website <http://www.disneyanimation.com/technology/seexpr.html>`__.

Accessing pixel values from other frames
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

The input frame range used to render a given output frame is computed automatically if the following conditions hold:

-  The ``frame`` parameter to cpixel/apixel must not depend on the color or alpha of a pixel, nor on the result of another call to cpixel/apixel
-  A call to cpixel/apixel must not depend on the color or alpha of a pixel, as in the following:

   if (As > 0.1) { src = cpixel(1,frame,x,y); } else { src = [0,0,0]; }

If one of these conditions does not hold, all frames from the specified input frame range are asked for.

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

+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name                       | Type    | Default          | Function                                                                                                                                                                                                                                       |
+===============================================+=========+==================+================================================================================================================================================================================================================================================+
| Region of Definition / ``rod``                | Choice  | Union            | | Region of definition (extent) of the output.                                                                                                                                                                                                 |
|                                               |         |                  | | **Union (union)**: The output region is the union of the regions of definition of all connected inputs.                                                                                                                                      |
|                                               |         |                  | | **Intersection (intersection)**: The output region is the intersection the regions of definition of all connected inputs.                                                                                                                    |
|                                               |         |                  | | **Size (size)**: The output region is the size of the rectangle overlay.                                                                                                                                                                     |
|                                               |         |                  | | **Format (format)**: The output region is the specified format.                                                                                                                                                                              |
|                                               |         |                  | | **Project (project)**: The output region is the size of the project.                                                                                                                                                                         |
|                                               |         |                  | | **Input1 (input1)**: The output region is the region of definition of input 1                                                                                                                                                                |
|                                               |         |                  | | **Input2 (input2)**: The output region is the region of definition of input 2                                                                                                                                                                |
|                                               |         |                  | | **Input3 (input3)**: The output region is the region of definition of input 3                                                                                                                                                                |
|                                               |         |                  | | **Input4 (input4)**: The output region is the region of definition of input 4                                                                                                                                                                |
|                                               |         |                  | | **Input5 (input5)**: The output region is the region of definition of input 5                                                                                                                                                                |
|                                               |         |                  | | **Input6 (input6)**: The output region is the region of definition of input 6                                                                                                                                                                |
|                                               |         |                  | | **Input7 (input7)**: The output region is the region of definition of input 7                                                                                                                                                                |
|                                               |         |                  | | **Input8 (input8)**: The output region is the region of definition of input 8                                                                                                                                                                |
|                                               |         |                  | | **Input9 (input9)**: The output region is the region of definition of input 9                                                                                                                                                                |
|                                               |         |                  | | **Input10 (input10)**: The output region is the region of definition of input 10                                                                                                                                                             |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Output components / ``outputComponents``      | Choice  | RGBA             | | Specify what components to output. In RGB only, the alpha script will not be executed. Similarily, in alpha only, the RGB script will not be executed.                                                                                       |
|                                               |         |                  | | **RGBA**                                                                                                                                                                                                                                     |
|                                               |         |                  | | **RGB**                                                                                                                                                                                                                                      |
|                                               |         |                  | | **Alpha**                                                                                                                                                                                                                                    |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Format / ``format``                           | Choice  | PC_Video 640x480 | | The output format                                                                                                                                                                                                                            |
|                                               |         |                  | | **PC_Video 640x480 (PC_Video)**                                                                                                                                                                                                              |
|                                               |         |                  | | **NTSC 720x486 0.91 (NTSC)**                                                                                                                                                                                                                 |
|                                               |         |                  | | **PAL 720x576 1.09 (PAL)**                                                                                                                                                                                                                   |
|                                               |         |                  | | **NTSC_16:9 720x486 1.21 (NTSC_16:9)**                                                                                                                                                                                                       |
|                                               |         |                  | | **PAL_16:9 720x576 1.46 (PAL_16:9)**                                                                                                                                                                                                         |
|                                               |         |                  | | **HD_720 1280x1720 (HD_720)**                                                                                                                                                                                                                |
|                                               |         |                  | | **HD 1920x1080 (HD)**                                                                                                                                                                                                                        |
|                                               |         |                  | | **UHD_4K 3840x2160 (UHD_4K)**                                                                                                                                                                                                                |
|                                               |         |                  | | **1K_Super35(full-ap) 1024x778 (1K_Super35(full-ap))**                                                                                                                                                                                       |
|                                               |         |                  | | **1K_Cinemascope 914x778 2 (1K_Cinemascope)**                                                                                                                                                                                                |
|                                               |         |                  | | **2K_Super35(full-ap) 2048x1556 (2K_Super35(full-ap))**                                                                                                                                                                                      |
|                                               |         |                  | | **2K_Cinemascope 1828x1556 2 (2K_Cinemascope)**                                                                                                                                                                                              |
|                                               |         |                  | | **2K_DCP 2048x1080 (2K_DCP)**                                                                                                                                                                                                                |
|                                               |         |                  | | **4K_Super35(full-ap) 4096x3112 (4K_Super35(full-ap))**                                                                                                                                                                                      |
|                                               |         |                  | | **4K_Cinemascope 3656x3112 2 (4K_Cinemascope)**                                                                                                                                                                                              |
|                                               |         |                  | | **4K_DCP 4096x2160 (4K_DCP)**                                                                                                                                                                                                                |
|                                               |         |                  | | **square_256 256x256 (square_256)**                                                                                                                                                                                                          |
|                                               |         |                  | | **square_512 512x512 (square_512)**                                                                                                                                                                                                          |
|                                               |         |                  | | **square_1K 1024x1024 (square_1K)**                                                                                                                                                                                                          |
|                                               |         |                  | | **square_2K 2048x2048 (square_2K)**                                                                                                                                                                                                          |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Bottom Left / ``bottomLeft``                  | Double  | x: 0 y: 0        | Coordinates of the bottom left corner of the size rectangle.                                                                                                                                                                                   |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Size / ``size``                               | Double  | w: 1 w: 1        | Width and height of the size rectangle.                                                                                                                                                                                                        |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Interactive Update / ``interactive``          | Boolean | Off              | If checked, update the parameter values during interaction with the image viewer, else update the values when pen is released.                                                                                                                 |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| No. of Scalar Params / ``doubleParamsNb``     | Integer | 0                | Use this to control how many scalar parameters should be exposed to the SeExpr expression.                                                                                                                                                     |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| x1 / ``x1``                                   | Double  | 0                | A custom 1-dimensional variable that can be referenced in the expression by its script-name, x1                                                                                                                                                |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| x2 / ``x2``                                   | Double  | 0                | A custom 1-dimensional variable that can be referenced in the expression by its script-name, x2                                                                                                                                                |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| x3 / ``x3``                                   | Double  | 0                | A custom 1-dimensional variable that can be referenced in the expression by its script-name, x3                                                                                                                                                |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| x4 / ``x4``                                   | Double  | 0                | A custom 1-dimensional variable that can be referenced in the expression by its script-name, x4                                                                                                                                                |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| x5 / ``x5``                                   | Double  | 0                | A custom 1-dimensional variable that can be referenced in the expression by its script-name, x5                                                                                                                                                |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| x6 / ``x6``                                   | Double  | 0                | A custom 1-dimensional variable that can be referenced in the expression by its script-name, x6                                                                                                                                                |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| x7 / ``x7``                                   | Double  | 0                | A custom 1-dimensional variable that can be referenced in the expression by its script-name, x7                                                                                                                                                |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| x8 / ``x8``                                   | Double  | 0                | A custom 1-dimensional variable that can be referenced in the expression by its script-name, x8                                                                                                                                                |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| x9 / ``x9``                                   | Double  | 0                | A custom 1-dimensional variable that can be referenced in the expression by its script-name, x9                                                                                                                                                |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| x10 / ``x10``                                 | Double  | 0                | A custom 1-dimensional variable that can be referenced in the expression by its script-name, x10                                                                                                                                               |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| No. of 2D Params / ``double2DParamsNb``       | Integer | 0                | Use this to control how many 2D (position) parameters should be exposed to the SeExpr expression.                                                                                                                                              |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| pos1 / ``pos1``                               | Double  | x: 0 y: 0        | A custom 2-dimensional variable that can be referenced in the expression by its script-name, pos1                                                                                                                                              |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| pos2 / ``pos2``                               | Double  | x: 0 y: 0        | A custom 2-dimensional variable that can be referenced in the expression by its script-name, pos2                                                                                                                                              |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| pos3 / ``pos3``                               | Double  | x: 0 y: 0        | A custom 2-dimensional variable that can be referenced in the expression by its script-name, pos3                                                                                                                                              |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| pos4 / ``pos4``                               | Double  | x: 0 y: 0        | A custom 2-dimensional variable that can be referenced in the expression by its script-name, pos4                                                                                                                                              |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| pos5 / ``pos5``                               | Double  | x: 0 y: 0        | A custom 2-dimensional variable that can be referenced in the expression by its script-name, pos5                                                                                                                                              |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| pos6 / ``pos6``                               | Double  | x: 0 y: 0        | A custom 2-dimensional variable that can be referenced in the expression by its script-name, pos6                                                                                                                                              |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| pos7 / ``pos7``                               | Double  | x: 0 y: 0        | A custom 2-dimensional variable that can be referenced in the expression by its script-name, pos7                                                                                                                                              |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| pos8 / ``pos8``                               | Double  | x: 0 y: 0        | A custom 2-dimensional variable that can be referenced in the expression by its script-name, pos8                                                                                                                                              |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| pos9 / ``pos9``                               | Double  | x: 0 y: 0        | A custom 2-dimensional variable that can be referenced in the expression by its script-name, pos9                                                                                                                                              |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| pos10 / ``pos10``                             | Double  | x: 0 y: 0        | A custom 2-dimensional variable that can be referenced in the expression by its script-name, pos10                                                                                                                                             |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| No. of Color Params / ``colorParamsNb``       | Integer | 0                | Use this to control how many color parameters should be exposed to the SeExpr expression.                                                                                                                                                      |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| color1 / ``color1``                           | Color   | r: 0 g: 0 b: 0   | A custom RGB variable that can be referenced in the expression by its script-name, color1                                                                                                                                                      |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| color2 / ``color2``                           | Color   | r: 0 g: 0 b: 0   | A custom RGB variable that can be referenced in the expression by its script-name, color2                                                                                                                                                      |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| color3 / ``color3``                           | Color   | r: 0 g: 0 b: 0   | A custom RGB variable that can be referenced in the expression by its script-name, color3                                                                                                                                                      |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| color4 / ``color4``                           | Color   | r: 0 g: 0 b: 0   | A custom RGB variable that can be referenced in the expression by its script-name, color4                                                                                                                                                      |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| color5 / ``color5``                           | Color   | r: 0 g: 0 b: 0   | A custom RGB variable that can be referenced in the expression by its script-name, color5                                                                                                                                                      |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| color6 / ``color6``                           | Color   | r: 0 g: 0 b: 0   | A custom RGB variable that can be referenced in the expression by its script-name, color6                                                                                                                                                      |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| color7 / ``color7``                           | Color   | r: 0 g: 0 b: 0   | A custom RGB variable that can be referenced in the expression by its script-name, color7                                                                                                                                                      |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| color8 / ``color8``                           | Color   | r: 0 g: 0 b: 0   | A custom RGB variable that can be referenced in the expression by its script-name, color8                                                                                                                                                      |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| color9 / ``color9``                           | Color   | r: 0 g: 0 b: 0   | A custom RGB variable that can be referenced in the expression by its script-name, color9                                                                                                                                                      |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| color10 / ``color10``                         | Color   | r: 0 g: 0 b: 0   | A custom RGB variable that can be referenced in the expression by its script-name, color10                                                                                                                                                     |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Input Frame Range / ``frameRange``            | Integer | min: 0 max: 0    | Default input frame range to fetch images from (may be relative or absolute, depending on the “frameRangeAbsolute” parameter). Only used if the frame range cannot be statically computed from the expression. This parameter can be animated. |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Absolute Frame Range / ``frameRangeAbsolute`` | Boolean | Off              | If checked, the frame range is given as absolute frame numbers, else it is relative to the current frame.                                                                                                                                      |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| RGB Script / ``script``                       | String  |                  | Contents of the SeExpr expression. This expression should output the RGB components as a SeExpr vector. See the description of the plug-in and http://www.disneyanimation.com/technology/seexpr.html for documentation.                        |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Alpha Script / ``alphaScript``                | String  |                  | Contents of the SeExpr expression. This expression should output the alpha component only as a scalar. See the description of the plug-in and http://www.disneyanimation.com/technology/seexpr.html for documentation.                         |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Help... / ``helpButton``                      | Button  |                  | Display help about using SeExpr.                                                                                                                                                                                                               |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert``                  | Boolean | Off              | When checked, the effect is fully applied where the mask is 0.                                                                                                                                                                                 |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                                 | Double  | 1                | Mix factor between the original and the transformed image.                                                                                                                                                                                     |
+-----------------------------------------------+---------+------------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: fr.inria.openfx.SeExpr.png
   :width: 10.0%
