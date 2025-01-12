.. _net.sf.openfx.MergePlugin:

Merge node
==========

|pluginIcon| 

*This documentation is for version 1.0 of Merge (net.sf.openfx.MergePlugin).*

Description
-----------

Pixel-by-pixel merge operation between two or more inputs. Input A is first merged with B (or with a black and transparent background if B is not connected), then A2, if connected, is merged with the intermediary result, then A3, etc.

A complete explanation of the Porter-Duff compositing operators can be found in “Compositing Digital Images”, by T. Porter and T. Duff (Proc. SIGGRAPH 1984) http://keithp.com/~keithp/porterduff/p253-porter.pdf

Note that if an input with only RGB components is connected to A or B, its alpha channel is considered to be transparent (zero) by default, and the “A” checkbox for the given input is automatically unchecked, unless it is set explicitely by the user. In fact, most of the time, RGB images without an alpha channel are only used as background images in the B input, and should be considered as transparent, since they should not occlude anything. That way, the alpha channel on output only contains the opacity of elements that are merged with this background. In some rare cases, though, one may want the RGB image to actually be opaque, and can check the “A” checkbox for the given input to do so.

Operators
~~~~~~~~~

The following operators are available.

Porter-Duff compositing operators
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

-  copy: A (a.k.a. src)

-  over: A+B(1-a) (a.k.a. src-over)

-  under: A(1-b)+B (a.k.a. dst-over)

-  in: Ab (a.k.a. src-in)

-  mask: Ba (a.k.a dst-in)

-  out: A(1-b) (a.k.a. src-out)

-  stencil: B(1-a) (a.k.a. dst-out)

-  atop: Ab + B(1 - a) (a.k.a. src-atop)

-  xor: A(1-b)+B(1-a)

Blend modes, see https://en.wikipedia.org/wiki/Blend_modes
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Multiply and Screen
'''''''''''''''''''

-  multiply: AB, 0 if A < 0 and B < 0

-  screen: A+B-AB if A or B <= 1, otherwise max(A, B)

-  overlay: multiply if B < 0.5, screen if B > 0.5

-  hard-light: multiply if A < 0.5, screen if A > 0.5

-  soft-light: burn-in if A < 0.5, lighten if A > 0.5

Dodge and burn
''''''''''''''

-  color-dodge: brighten B towards A

-  color-burn: darken B towards A

-  pinlight: if B >= 0.5 then max(A, 2*B - 1), min(A, B \* 2.0 ) else

-  difference: abs(A-B) (a.k.a. absminus)

-  exclusion: A+B-2AB

-  divide: A/B, 0 if A < 0 and B < 0

Simple arithmetic blend modes
'''''''''''''''''''''''''''''

-  divide: A/B, 0 if A < 0 and B < 0

-  plus: A+B (a.k.a. add)

-  from: B-A (a.k.a. subtract)

-  minus: A-B

-  difference: abs(A-B) (a.k.a. absminus)

-  min: min(A, B) (a.k.a. darken only)

-  max: max(A, B) (a.k.a. lighten only)

Hue, saturation and luminosity
''''''''''''''''''''''''''''''

-  hue: SetLum(SetSat(A, Sat(B)), Lum(B))

-  saturation: SetLum(SetSat(B, Sat(A)), Lum(B))

-  color: SetLum(A, Lum(B))

-  luminosity: SetLum(B, Lum(A))

Other
^^^^^

-  average: (A + B) / 2

-  conjoint-over: A + B(1-a)/b, A if a > b

-  disjoint-over: A+B(1-a)/b, A+B if a+b < 1

-  freeze: 1-sqrt(1-A)/B

-  geometric: 2AB/(A+B)

-  grain-extract: B - A + 0.5

-  grain-merge: B + A - 0.5

-  hypot: sqrt(A*A+B*B)

-  matte: Aa + B(1-a) (unpremultiplied over)

-  reflect: A*A / (1 - B)

See also:

-  “Digital Image Compositing” by Marc Levoy https://graphics.stanford.edu/courses/cs248-06/comp/comp.html
-  “SVG Compositing Specification” https://www.w3.org/TR/SVGCompositing/
-  “ISO 32000-1:2008: Portable Document Format (July 2008)”, Sec. 11.3 “Basic Compositing Operations” http://www.adobe.com/devnet/pdf/pdf_reference.html
-  “Merge” by Martin Constable http://opticalenquiry.com/nuke/index.php?title=Merge
-  “Merge Blend Modes” by Martin Constable http://opticalenquiry.com/nuke/index.php?title=Merge_Blend_Modes
-  “Primacy of the B Feed” by Martin Constable http://opticalenquiry.com/nuke/index.php?title=Primacy_of_the_B_Feed
-  grain-extract and grain-merge are described in http://docs.gimp.org/en/gimp-concepts-layer-modes.html

Inputs
------

+-------+-------------------------------------------------------------------------------+----------+
| Input | Description                                                                   | Optional |
+=======+===============================================================================+==========+
| B     | The main input. This input is passed through when the merge node is disabled. | Yes      |
+-------+-------------------------------------------------------------------------------+----------+
| A     | The image sequence to merge with input B.                                     | Yes      |
+-------+-------------------------------------------------------------------------------+----------+
| Mask  |                                                                               | Yes      |
+-------+-------------------------------------------------------------------------------+----------+
| A2    |                                                                               | Yes      |
+-------+-------------------------------------------------------------------------------+----------+

Controls
--------

.. tabularcolumns:: |>{\raggedright}p{0.2\columnwidth}|>{\raggedright}p{0.06\columnwidth}|>{\raggedright}p{0.07\columnwidth}|p{0.63\columnwidth}|

.. cssclass:: longtable

+---------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Parameter / script name         | Type    | Default | Function                                                                                                                                                                                                                                                                       |
+=================================+=========+=========+================================================================================================================================================================================================================================================================================+
| Operation / ``operation``       | Choice  | over    | | The operation used to merge the input A and B images.                                                                                                                                                                                                                        |
|                                 |         |         | | The operator formula is applied to each component: A and B represent the input component (Red, Green, Blue, or Alpha) of each input, and a and b represent the Alpha component of each input.                                                                                |
|                                 |         |         | | If Alpha masking is checked, the output alpha is computed using a different formula (a+b - a*b).                                                                                                                                                                             |
|                                 |         |         | | Alpha masking is always enabled for HSL modes (hue, saturation, color, luminosity).                                                                                                                                                                                          |
|                                 |         |         | | **atop**: Ab + B(1 - a) (a.k.a. src-atop)                                                                                                                                                                                                                                    |
|                                 |         |         | | **average**: (A + B) / 2                                                                                                                                                                                                                                                     |
|                                 |         |         | | **color**: SetLum(A, Lum(B))                                                                                                                                                                                                                                                 |
|                                 |         |         | | **color-burn**: darken B towards A                                                                                                                                                                                                                                           |
|                                 |         |         | | **color-dodge**: brighten B towards A                                                                                                                                                                                                                                        |
|                                 |         |         | | **conjoint-over**: A + B(1-a)/b, A if a > b                                                                                                                                                                                                                                  |
|                                 |         |         | | **copy**: A (a.k.a. src)                                                                                                                                                                                                                                                     |
|                                 |         |         | | **difference**: abs(A-B) (a.k.a. absminus)                                                                                                                                                                                                                                   |
|                                 |         |         | | **disjoint-over**: A+B(1-a)/b, A+B if a+b < 1                                                                                                                                                                                                                                |
|                                 |         |         | | **divide**: A/B, 0 if A < 0 and B < 0                                                                                                                                                                                                                                        |
|                                 |         |         | | **exclusion**: A+B-2AB                                                                                                                                                                                                                                                       |
|                                 |         |         | | **freeze**: 1-sqrt(1-A)/B                                                                                                                                                                                                                                                    |
|                                 |         |         | | **from**: B-A (a.k.a. subtract)                                                                                                                                                                                                                                              |
|                                 |         |         | | **geometric**: 2AB/(A+B)                                                                                                                                                                                                                                                     |
|                                 |         |         | | **grain-extract**: B - A + 0.5                                                                                                                                                                                                                                               |
|                                 |         |         | | **grain-merge**: B + A - 0.5                                                                                                                                                                                                                                                 |
|                                 |         |         | | **hard-light**: multiply if A < 0.5, screen if A > 0.5                                                                                                                                                                                                                       |
|                                 |         |         | | **hue**: SetLum(SetSat(A, Sat(B)), Lum(B))                                                                                                                                                                                                                                   |
|                                 |         |         | | **hypot**: sqrt(A*A+B*B)                                                                                                                                                                                                                                                     |
|                                 |         |         | | **in**: Ab (a.k.a. src-in)                                                                                                                                                                                                                                                   |
|                                 |         |         | | **luminosity**: SetLum(B, Lum(A))                                                                                                                                                                                                                                            |
|                                 |         |         | | **mask**: Ba (a.k.a dst-in)                                                                                                                                                                                                                                                  |
|                                 |         |         | | **matte**: Aa + B(1-a) (unpremultiplied over)                                                                                                                                                                                                                                |
|                                 |         |         | | **max**: max(A, B) (a.k.a. lighten only)                                                                                                                                                                                                                                     |
|                                 |         |         | | **min**: min(A, B) (a.k.a. darken only)                                                                                                                                                                                                                                      |
|                                 |         |         | | **minus**: A-B                                                                                                                                                                                                                                                               |
|                                 |         |         | | **multiply**: AB, 0 if A < 0 and B < 0                                                                                                                                                                                                                                       |
|                                 |         |         | | **out**: A(1-b) (a.k.a. src-out)                                                                                                                                                                                                                                             |
|                                 |         |         | | **over**: A+B(1-a) (a.k.a. src-over)                                                                                                                                                                                                                                         |
|                                 |         |         | | **overlay**: multiply if B < 0.5, screen if B > 0.5                                                                                                                                                                                                                          |
|                                 |         |         | | **pinlight**: if B >= 0.5 then max(A, 2*B - 1), min(A, B \* 2.0 ) else                                                                                                                                                                                                       |
|                                 |         |         | | **plus**: A+B (a.k.a. add)                                                                                                                                                                                                                                                   |
|                                 |         |         | | **reflect**: A*A / (1 - B)                                                                                                                                                                                                                                                   |
|                                 |         |         | | **saturation**: SetLum(SetSat(B, Sat(A)), Lum(B))                                                                                                                                                                                                                            |
|                                 |         |         | | **screen**: A+B-AB if A or B <= 1, otherwise max(A, B)                                                                                                                                                                                                                       |
|                                 |         |         | | **soft-light**: burn-in if A < 0.5, lighten if A > 0.5                                                                                                                                                                                                                       |
|                                 |         |         | | **stencil**: B(1-a) (a.k.a. dst-out)                                                                                                                                                                                                                                         |
|                                 |         |         | | **under**: A(1-b)+B (a.k.a. dst-over)                                                                                                                                                                                                                                        |
|                                 |         |         | | **xor**: A(1-b)+B(1-a)                                                                                                                                                                                                                                                       |
+---------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Bounding Box / ``bbox``         | Choice  | Union   | | What to use to produce the output image’s bounding box.                                                                                                                                                                                                                      |
|                                 |         |         | | **Union (union)**: Union of all connected inputs.                                                                                                                                                                                                                            |
|                                 |         |         | | **Intersection (intersection)**: Intersection of all connected inputs.                                                                                                                                                                                                       |
|                                 |         |         | | **A (a)**: Bounding box of input A.                                                                                                                                                                                                                                          |
|                                 |         |         | | **B (b)**: Bounding box of input B.                                                                                                                                                                                                                                          |
+---------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Alpha masking / ``screenAlpha`` | Boolean | Off     | When enabled, the input images are unchanged where the other image has 0 alpha, and the output alpha is set to a+b - a*b. When disabled the alpha channel is processed as any other channel. Option is disabled for operations where it does not apply or makes no difference. |
+---------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| R / ``AChannelsR``              | Boolean | On      | Use red component from A input(s).                                                                                                                                                                                                                                             |
+---------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| G / ``AChannelsG``              | Boolean | On      | Use green component from A input(s).                                                                                                                                                                                                                                           |
+---------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| B / ``AChannelsB``              | Boolean | On      | Use blue component from A input(s).                                                                                                                                                                                                                                            |
+---------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| A / ``AChannelsA``              | Boolean | On      | Use alpha component from A input(s).                                                                                                                                                                                                                                           |
+---------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| R / ``BChannelsR``              | Boolean | On      | Use red component from B input.                                                                                                                                                                                                                                                |
+---------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| G / ``BChannelsG``              | Boolean | On      | Use green component from B input.                                                                                                                                                                                                                                              |
+---------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| B / ``BChannelsB``              | Boolean | On      | Use blue component from B input.                                                                                                                                                                                                                                               |
+---------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| A / ``BChannelsA``              | Boolean | On      | Use alpha component from B input.                                                                                                                                                                                                                                              |
+---------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| R / ``OutputChannelsR``         | Boolean | On      | Write red component to output.                                                                                                                                                                                                                                                 |
+---------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| G / ``OutputChannelsG``         | Boolean | On      | Write green component to output.                                                                                                                                                                                                                                               |
+---------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| B / ``OutputChannelsB``         | Boolean | On      | Write blue component to output.                                                                                                                                                                                                                                                |
+---------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| A / ``OutputChannelsA``         | Boolean | On      | Write alpha component to output.                                                                                                                                                                                                                                               |
+---------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Invert Mask / ``maskInvert``    | Boolean | Off     | When checked, the effect is fully applied where the mask is 0.                                                                                                                                                                                                                 |
+---------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Mix / ``mix``                   | Double  | 1       | Mix factor between the original and the transformed image.                                                                                                                                                                                                                     |
+---------------------------------+---------+---------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

.. |pluginIcon| image:: net.sf.openfx.MergePlugin.png
   :width: 10.0%
