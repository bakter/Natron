.. _eu.gmic.SimulateFilm:

G’MIC Simulate Film node
========================

*This documentation is for version 1.0 of G’MIC Simulate Film (eu.gmic.SimulateFilm).*

Description
-----------

Note: The color LUTs proposed in this filter come from various free sources :

\* RawTherapee Film Simulation.

\* Pat David Film Emulation.

\* Fuji Film Simulation Profiles.

\* Print Film LUTs For Download.

Author: David Tschumperle. Latest Update: 2019/02/27.

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

+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Parameter / script name                       | Type    | Default            | Function                                    |
+===============================================+=========+====================+=============================================+
| Category / ``Category``                       | Choice  | Black & White (25) | |                                           |
|                                               |         |                    | | **Black & White (25)**                    |
|                                               |         |                    | | **Instant [Consumer] (54)**               |
|                                               |         |                    | | **Instant [Pro] (68)**                    |
|                                               |         |                    | | **Fuji XTrans III (15)**                  |
|                                               |         |                    | | **Negative [Color] (13)**                 |
|                                               |         |                    | | **Negative [New] (39)**                   |
|                                               |         |                    | | **Negative [Old] (44)**                   |
|                                               |         |                    | | **Print Films (12)**                      |
|                                               |         |                    | | **Slide [Color] (26)**                    |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Preset / ``Preset``                           | Choice  | None               | |                                           |
|                                               |         |                    | | **All [Collage]**                         |
|                                               |         |                    | | **None**                                  |
|                                               |         |                    | | **Agfa APX 100**                          |
|                                               |         |                    | | **Agfa APX 25**                           |
|                                               |         |                    | | **Fuji Neopan 1600**                      |
|                                               |         |                    | | **Fuji Neopan Acros 100**                 |
|                                               |         |                    | | **Ilford Delta 100**                      |
|                                               |         |                    | | **Ilford Delta 3200**                     |
|                                               |         |                    | | **Ilford Delta 400**                      |
|                                               |         |                    | | **Ilford FP4 Plus 125**                   |
|                                               |         |                    | | **Ilford HP5 Plus 400**                   |
|                                               |         |                    | | **Ilford HPS 800**                        |
|                                               |         |                    | | **Ilford Pan F Plus 50**                  |
|                                               |         |                    | | **Ilford XP2**                            |
|                                               |         |                    | | **Kodak BW 400 CN**                       |
|                                               |         |                    | | **Kodak HIE (HS Infra)**                  |
|                                               |         |                    | | **Kodak T-Max 100**                       |
|                                               |         |                    | | **Kodak T-Max 3200**                      |
|                                               |         |                    | | **Kodak T-Max 400**                       |
|                                               |         |                    | | **Kodak Tri-X 400**                       |
|                                               |         |                    | | **Polaroid 664**                          |
|                                               |         |                    | | **Polaroid 667**                          |
|                                               |         |                    | | **Polaroid 672**                          |
|                                               |         |                    | | **Rollei IR 400**                         |
|                                               |         |                    | | **Rollei Ortho 25**                       |
|                                               |         |                    | | **Rollei Retro 100 Tonal**                |
|                                               |         |                    | | **Rollei Retro 80s**                      |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Preset_2 / ``Preset_2``                       | Choice  | None               | |                                           |
|                                               |         |                    | | **All [Collage]**                         |
|                                               |         |                    | | **None**                                  |
|                                               |         |                    | | **Polaroid PX-100UV+ Cold --**            |
|                                               |         |                    | | **Polaroid PX-100UV+ Cold -**             |
|                                               |         |                    | | **Polaroid PX-100UV+ Cold**               |
|                                               |         |                    | | **Polaroid PX-100UV+ Cold +**             |
|                                               |         |                    | | **Polaroid PX-100UV+ Cold ++**            |
|                                               |         |                    | | **Polaroid PX-100UV+ Cold +++**           |
|                                               |         |                    | | **Polaroid PX-100UV+ Warm --**            |
|                                               |         |                    | | **Polaroid PX-100UV+ Warm -**             |
|                                               |         |                    | | **Polaroid PX-100UV+ Warm**               |
|                                               |         |                    | | **Polaroid PX-100UV+ Warm +**             |
|                                               |         |                    | | **Polaroid PX-100UV+ Warm ++**            |
|                                               |         |                    | | **Polaroid PX-100UV+ Warm +++**           |
|                                               |         |                    | | **Polaroid PX-680 --**                    |
|                                               |         |                    | | **Polaroid PX-680 -**                     |
|                                               |         |                    | | **Polaroid PX-680**                       |
|                                               |         |                    | | **Polaroid PX-680 +**                     |
|                                               |         |                    | | **Polaroid PX-680 ++**                    |
|                                               |         |                    | | **Polaroid PX-680 Cold --**               |
|                                               |         |                    | | **Polaroid PX-680 Cold -**                |
|                                               |         |                    | | **Polaroid PX-680 Cold**                  |
|                                               |         |                    | | **Polaroid PX-680 Cold +**                |
|                                               |         |                    | | **Polaroid PX-680 Cold ++**               |
|                                               |         |                    | | **Polaroid PX-680 Cold ++a**              |
|                                               |         |                    | | **Polaroid PX-680 Warm --**               |
|                                               |         |                    | | **Polaroid PX-680 Warm -**                |
|                                               |         |                    | | **Polaroid PX-680 Warm**                  |
|                                               |         |                    | | **Polaroid PX-680 Warm +**                |
|                                               |         |                    | | **Polaroid PX-680 Warm ++**               |
|                                               |         |                    | | **Polaroid PX-70 --**                     |
|                                               |         |                    | | **Polaroid PX-70 -**                      |
|                                               |         |                    | | **Polaroid PX-70**                        |
|                                               |         |                    | | **Polaroid PX-70 +**                      |
|                                               |         |                    | | **Polaroid PX-70 ++**                     |
|                                               |         |                    | | **Polaroid PX-70 +++**                    |
|                                               |         |                    | | **Polaroid PX-70 Cold --**                |
|                                               |         |                    | | **Polaroid PX-70 Cold -**                 |
|                                               |         |                    | | **Polaroid PX-70 Cold**                   |
|                                               |         |                    | | **Polaroid PX-70 Cold +**                 |
|                                               |         |                    | | **Polaroid PX-70 Cold ++**                |
|                                               |         |                    | | **Polaroid PX-70 Warm --**                |
|                                               |         |                    | | **Polaroid PX-70 Warm -**                 |
|                                               |         |                    | | **Polaroid PX-70 Warm**                   |
|                                               |         |                    | | **Polaroid PX-70 Warm +**                 |
|                                               |         |                    | | **Polaroid PX-70 Warm ++**                |
|                                               |         |                    | | **Polaroid Time Zero (Expired) ---**      |
|                                               |         |                    | | **Polaroid Time Zero (Expired) --**       |
|                                               |         |                    | | **Polaroid Time Zero (Expired) -**        |
|                                               |         |                    | | **Polaroid Time Zero (Expired)**          |
|                                               |         |                    | | **Polaroid Time Zero (Expired) +**        |
|                                               |         |                    | | **Polaroid Time Zero (Expired) ++**       |
|                                               |         |                    | | **Polaroid Time Zero (Expired) Cold ---** |
|                                               |         |                    | | **Polaroid Time Zero (Expired) Cold --**  |
|                                               |         |                    | | **Polaroid Time Zero (Expired) Cold -**   |
|                                               |         |                    | | **Polaroid Time Zero (Expired) Cold**     |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Preset_3 / ``Preset_3``                       | Choice  | None               | |                                           |
|                                               |         |                    | | **All [Collage]**                         |
|                                               |         |                    | | **None**                                  |
|                                               |         |                    | | **Fuji FP-100c --**                       |
|                                               |         |                    | | **Fuji FP-100c -**                        |
|                                               |         |                    | | **Fuji FP-100c**                          |
|                                               |         |                    | | **Fuji FP-100c (alt)**                    |
|                                               |         |                    | | **Fuji FP-100c +**                        |
|                                               |         |                    | | **Fuji FP-100c ++**                       |
|                                               |         |                    | | **Fuji FP-100c ++a**                      |
|                                               |         |                    | | **Fuji FP-100c +++**                      |
|                                               |         |                    | | **Fuji FP-100c Cool --**                  |
|                                               |         |                    | | **Fuji FP-100c Cool -**                   |
|                                               |         |                    | | **Fuji FP-100c Cool**                     |
|                                               |         |                    | | **Fuji FP-100c Cool +**                   |
|                                               |         |                    | | **Fuji FP-100c Cool ++**                  |
|                                               |         |                    | | **Fuji FP-100c Negative --**              |
|                                               |         |                    | | **Fuji FP-100c Negative -**               |
|                                               |         |                    | | **Fuji FP-100c Negative**                 |
|                                               |         |                    | | **Fuji FP-100c Negative +**               |
|                                               |         |                    | | **Fuji FP-100c Negative ++**              |
|                                               |         |                    | | **Fuji FP-100c Negative ++a**             |
|                                               |         |                    | | **Fuji FP-100c Negative +++**             |
|                                               |         |                    | | **Fuji FP-3000b --**                      |
|                                               |         |                    | | **Fuji FP-3000b -**                       |
|                                               |         |                    | | **Fuji FP-3000b**                         |
|                                               |         |                    | | **Fuji FP-3000b +**                       |
|                                               |         |                    | | **Fuji FP-3000b ++**                      |
|                                               |         |                    | | **Fuji FP-3000b +++**                     |
|                                               |         |                    | | **Fuji FP-3000b HC**                      |
|                                               |         |                    | | **Fuji FP-3000b Negative --**             |
|                                               |         |                    | | **Fuji FP-3000b Negative -**              |
|                                               |         |                    | | **Fuji FP-3000b Negative**                |
|                                               |         |                    | | **Fuji FP-3000b Negative +**              |
|                                               |         |                    | | **Fuji FP-3000b Negative ++**             |
|                                               |         |                    | | **Fuji FP-3000b Negative +++**            |
|                                               |         |                    | | **Fuji FP-3000b Negative Early**          |
|                                               |         |                    | | **Polaroid 665 --**                       |
|                                               |         |                    | | **Polaroid 665 -**                        |
|                                               |         |                    | | **Polaroid 665**                          |
|                                               |         |                    | | **Polaroid 665 +**                        |
|                                               |         |                    | | **Polaroid 665 ++**                       |
|                                               |         |                    | | **Polaroid 665 Negative -**               |
|                                               |         |                    | | **Polaroid 665 Negative**                 |
|                                               |         |                    | | **Polaroid 665 Negative +**               |
|                                               |         |                    | | **Polaroid 665 Negative HC**              |
|                                               |         |                    | | **Polaroid 669 --**                       |
|                                               |         |                    | | **Polaroid 669 -**                        |
|                                               |         |                    | | **Polaroid 669**                          |
|                                               |         |                    | | **Polaroid 669 +**                        |
|                                               |         |                    | | **Polaroid 669 ++**                       |
|                                               |         |                    | | **Polaroid 669 +++**                      |
|                                               |         |                    | | **Polaroid 669 Cold --**                  |
|                                               |         |                    | | **Polaroid 669 Cold -**                   |
|                                               |         |                    | | **Polaroid 669 Cold**                     |
|                                               |         |                    | | **Polaroid 669 Cold +**                   |
|                                               |         |                    | | **Polaroid 690 --**                       |
|                                               |         |                    | | **Polaroid 690 -**                        |
|                                               |         |                    | | **Polaroid 690**                          |
|                                               |         |                    | | **Polaroid 690 +**                        |
|                                               |         |                    | | **Polaroid 690 ++**                       |
|                                               |         |                    | | **Polaroid 690 Cold --**                  |
|                                               |         |                    | | **Polaroid 690 Cold -**                   |
|                                               |         |                    | | **Polaroid 690 Cold**                     |
|                                               |         |                    | | **Polaroid 690 Cold +**                   |
|                                               |         |                    | | **Polaroid 690 Cold ++**                  |
|                                               |         |                    | | **Polaroid 690 Warm --**                  |
|                                               |         |                    | | **Polaroid 690 Warm -**                   |
|                                               |         |                    | | **Polaroid 690 Warm**                     |
|                                               |         |                    | | **Polaroid 690 Warm +**                   |
|                                               |         |                    | | **Polaroid 690 Warm ++**                  |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Preset_4 / ``Preset_4``                       | Choice  | None               | |                                           |
|                                               |         |                    | | **All [Collage]**                         |
|                                               |         |                    | | **None**                                  |
|                                               |         |                    | | **Acros**                                 |
|                                               |         |                    | | **Acros+G**                               |
|                                               |         |                    | | **Acros+R**                               |
|                                               |         |                    | | **Acros+Ye**                              |
|                                               |         |                    | | **Astia**                                 |
|                                               |         |                    | | **Classic Chrome**                        |
|                                               |         |                    | | **Mono**                                  |
|                                               |         |                    | | **Mono+G**                                |
|                                               |         |                    | | **Mono+R**                                |
|                                               |         |                    | | **Mono+Ye**                               |
|                                               |         |                    | | **Pro Neg Hi**                            |
|                                               |         |                    | | **Pro Neg Std**                           |
|                                               |         |                    | | **Provia**                                |
|                                               |         |                    | | **Sepia**                                 |
|                                               |         |                    | | **Velvia**                                |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Preset_5 / ``Preset_5``                       | Choice  | None               | |                                           |
|                                               |         |                    | | **All [Collage]**                         |
|                                               |         |                    | | **None**                                  |
|                                               |         |                    | | **Agfa Ultra Color 100**                  |
|                                               |         |                    | | **Agfa Vista 200**                        |
|                                               |         |                    | | **Fuji Superia 200**                      |
|                                               |         |                    | | **Fuji Superia HG 1600**                  |
|                                               |         |                    | | **Fuji Superia Reala 100**                |
|                                               |         |                    | | **Fuji Superia X-Tra 800**                |
|                                               |         |                    | | **Kodak Ektar 100**                       |
|                                               |         |                    | | **Kodak Elite 100 XPRO**                  |
|                                               |         |                    | | **Kodak Elite Color 200**                 |
|                                               |         |                    | | **Kodak Elite Color 400**                 |
|                                               |         |                    | | **Kodak Portra 160 NC**                   |
|                                               |         |                    | | **Kodak Portra 160 VC**                   |
|                                               |         |                    | | **Lomography Redscale 100**               |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Preset_6 / ``Preset_6``                       | Choice  | None               | |                                           |
|                                               |         |                    | | **All [Collage]**                         |
|                                               |         |                    | | **None**                                  |
|                                               |         |                    | | **Fuji 160C -**                           |
|                                               |         |                    | | **Fuji 160C**                             |
|                                               |         |                    | | **Fuji 160C +**                           |
|                                               |         |                    | | **Fuji 160C ++**                          |
|                                               |         |                    | | **Fuji 400H -**                           |
|                                               |         |                    | | **Fuji 400H**                             |
|                                               |         |                    | | **Fuji 400H +**                           |
|                                               |         |                    | | **Fuji 400H ++**                          |
|                                               |         |                    | | **Fuji 800Z -**                           |
|                                               |         |                    | | **Fuji 800Z**                             |
|                                               |         |                    | | **Fuji 800Z +**                           |
|                                               |         |                    | | **Fuji 800Z ++**                          |
|                                               |         |                    | | **Fuji Ilford HP5 -**                     |
|                                               |         |                    | | **Fuji Ilford HP5**                       |
|                                               |         |                    | | **Fuji Ilford HP5 +**                     |
|                                               |         |                    | | **Fuji Ilford HP5 ++**                    |
|                                               |         |                    | | **Kodak Portra 160 -**                    |
|                                               |         |                    | | **Kodak Portra 160**                      |
|                                               |         |                    | | **Kodak Portra 160 +**                    |
|                                               |         |                    | | **Kodak Portra 160 ++**                   |
|                                               |         |                    | | **Kodak Portra 400 -**                    |
|                                               |         |                    | | **Kodak Portra 400**                      |
|                                               |         |                    | | **Kodak Portra 400 +**                    |
|                                               |         |                    | | **Kodak Portra 400 ++**                   |
|                                               |         |                    | | **Kodak Portra 800 -**                    |
|                                               |         |                    | | **Kodak Portra 800**                      |
|                                               |         |                    | | **Kodak Portra 800 +**                    |
|                                               |         |                    | | **Kodak Portra 800 ++**                   |
|                                               |         |                    | | **Kodak Portra 800 HC**                   |
|                                               |         |                    | | **Kodak T-MAX 3200 -**                    |
|                                               |         |                    | | **Kodak T-MAX 3200**                      |
|                                               |         |                    | | **Kodak T-MAX 3200 +**                    |
|                                               |         |                    | | **Kodak T-MAX 3200 ++**                   |
|                                               |         |                    | | **Kodak T-MAX 3200 (alt)**                |
|                                               |         |                    | | **Kodak TRI-X 400 -**                     |
|                                               |         |                    | | **Kodak TRI-X 400**                       |
|                                               |         |                    | | **Kodak TRI-X 400 +**                     |
|                                               |         |                    | | **Kodak TRI-X 400 ++**                    |
|                                               |         |                    | | **Kodak TRI-X 400 (alt)**                 |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Preset_7 / ``Preset_7``                       | Choice  | None               | |                                           |
|                                               |         |                    | | **All [Collage]**                         |
|                                               |         |                    | | **None**                                  |
|                                               |         |                    | | **Fuji Ilford Delta 3200 -**              |
|                                               |         |                    | | **Fuji Ilford Delta 3200**                |
|                                               |         |                    | | **Fuji Ilford Delta 3200 +**              |
|                                               |         |                    | | **Fuji Ilford Delta 3200 ++**             |
|                                               |         |                    | | **Fuji Neopan 1600 -**                    |
|                                               |         |                    | | **Fuji Neopan 1600**                      |
|                                               |         |                    | | **Fuji Neopan 1600 +**                    |
|                                               |         |                    | | **Fuji Neopan 1600 ++**                   |
|                                               |         |                    | | **Fuji Superia 100 -**                    |
|                                               |         |                    | | **Fuji Superia 100**                      |
|                                               |         |                    | | **Fuji Superia 100 +**                    |
|                                               |         |                    | | **Fuji Superia 100 ++**                   |
|                                               |         |                    | | **Fuji Superia 400 -**                    |
|                                               |         |                    | | **Fuji Superia 400**                      |
|                                               |         |                    | | **Fuji Superia 400 +**                    |
|                                               |         |                    | | **Fuji Superia 400 ++**                   |
|                                               |         |                    | | **Fuji Superia 800 -**                    |
|                                               |         |                    | | **Fuji Superia 800**                      |
|                                               |         |                    | | **Fuji Superia 800 +**                    |
|                                               |         |                    | | **Fuji Superia 800 ++**                   |
|                                               |         |                    | | **Fuji Superia 1600 -**                   |
|                                               |         |                    | | **Fuji Superia 1600**                     |
|                                               |         |                    | | **Fuji Superia 1600 +**                   |
|                                               |         |                    | | **Fuji Superia 1600 ++**                  |
|                                               |         |                    | | **Kodak Portra 160 NC -**                 |
|                                               |         |                    | | **Kodak Portra 160 NC**                   |
|                                               |         |                    | | **Kodak Portra 160 NC +**                 |
|                                               |         |                    | | **Kodak Portra 160 NC ++**                |
|                                               |         |                    | | **Kodak Portra 160 VC -**                 |
|                                               |         |                    | | **Kodak Portra 160 VC**                   |
|                                               |         |                    | | **Kodak Portra 160 VC +**                 |
|                                               |         |                    | | **Kodak Portra 160 VC ++**                |
|                                               |         |                    | | **Kodak Portra 400 UC -**                 |
|                                               |         |                    | | **Kodak Portra 400 UC**                   |
|                                               |         |                    | | **Kodak Portra 400 UC +**                 |
|                                               |         |                    | | **Kodak Portra 400 UC ++**                |
|                                               |         |                    | | **Kodak Portra 400 VC -**                 |
|                                               |         |                    | | **Kodak Portra 400 VC**                   |
|                                               |         |                    | | **Kodak Portra 400 VC +**                 |
|                                               |         |                    | | **Kodak Portra 400 VC ++**                |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Preset_8 / ``Preset_8``                       | Choice  | None               | |                                           |
|                                               |         |                    | | **All [Collage]**                         |
|                                               |         |                    | | **None**                                  |
|                                               |         |                    | | **Fuji 3510 (Constlclip)**                |
|                                               |         |                    | | **Fuji 3510 (Constlmap)**                 |
|                                               |         |                    | | **Fuji 3510 (Cuspclip)**                  |
|                                               |         |                    | | **Fuji 3513 (Constlclip)**                |
|                                               |         |                    | | **Fuji 3513 (Constlmap)**                 |
|                                               |         |                    | | **Fuji 3513 (Cuspclip)**                  |
|                                               |         |                    | | **Kodak 2383 (Constlclip)**               |
|                                               |         |                    | | **Kodak 2383 (Constlmap)**                |
|                                               |         |                    | | **Kodak 2383 (Cuspclip)**                 |
|                                               |         |                    | | **Kodak 2393 (Constlclip)**               |
|                                               |         |                    | | **Kodak 2393 (Constlmap)**                |
|                                               |         |                    | | **Kodak 2393 (Cuspclip)**                 |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Preset_9 / ``Preset_9``                       | Choice  | None               | |                                           |
|                                               |         |                    | | **All [Collage]**                         |
|                                               |         |                    | | **None**                                  |
|                                               |         |                    | | **Agfa Precisa 100**                      |
|                                               |         |                    | | **Fuji Astia 100F**                       |
|                                               |         |                    | | **Fuji FP 100C**                          |
|                                               |         |                    | | **Fuji Provia 100F**                      |
|                                               |         |                    | | **Fuji Provia 400F**                      |
|                                               |         |                    | | **Fuji Provia 400X**                      |
|                                               |         |                    | | **Fuji Sensia 100**                       |
|                                               |         |                    | | **Fuji Superia 200 XPRO**                 |
|                                               |         |                    | | **Fuji Velvia 50**                        |
|                                               |         |                    | | **Generic Fuji Astia 100**                |
|                                               |         |                    | | **Generic Fuji Provia 100**               |
|                                               |         |                    | | **Generic Fuji Velvia 100**               |
|                                               |         |                    | | **Generic Kodachrome 64**                 |
|                                               |         |                    | | **Generic Kodak Ektachrome 100 VS**       |
|                                               |         |                    | | **Kodak E-100 GX Ektachrome 100**         |
|                                               |         |                    | | **Kodak Ektachrome 100 VS**               |
|                                               |         |                    | | **Kodak Elite Chrome 200**                |
|                                               |         |                    | | **Kodak Elite Chrome 400**                |
|                                               |         |                    | | **Kodak Elite ExtraColor 100**            |
|                                               |         |                    | | **Kodak Kodachrome 200**                  |
|                                               |         |                    | | **Kodak Kodachrome 25**                   |
|                                               |         |                    | | **Kodak Kodachrome 64**                   |
|                                               |         |                    | | **Lomography X-Pro Slide 200**            |
|                                               |         |                    | | **Polaroid 669**                          |
|                                               |         |                    | | **Polaroid 690**                          |
|                                               |         |                    | | **Polaroid Polachrome**                   |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Thumbnail Size / ``Thumbnail_Size``           | Integer | 512                |                                             |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Strength (%) / ``Strength_``                  | Double  | 100                |                                             |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Brightness (%) / ``Brightness_``              | Double  | 0                  |                                             |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Contrast (%) / ``Contrast_``                  | Double  | 0                  |                                             |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Gamma (%) / ``Gamma_``                        | Double  | 0                  |                                             |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Hue (%) / ``Hue_``                            | Double  | 0                  |                                             |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Saturation (%) / ``Saturation_``              | Double  | 0                  |                                             |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Normalize Colors / ``Normalize_Colors``       | Choice  | None               | |                                           |
|                                               |         |                    | | **None**                                  |
|                                               |         |                    | | **Pre-Normalize**                         |
|                                               |         |                    | | **Post-Normalize**                        |
|                                               |         |                    | | **Both**                                  |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Preview Type / ``Preview_Type``               | Choice  | Full               | |                                           |
|                                               |         |                    | | **Full**                                  |
|                                               |         |                    | | **Forward Horizontal**                    |
|                                               |         |                    | | **Forward Vertical**                      |
|                                               |         |                    | | **Backward Horizontal**                   |
|                                               |         |                    | | **Backward Vertical**                     |
|                                               |         |                    | | **Duplicate Top**                         |
|                                               |         |                    | | **Duplicate Left**                        |
|                                               |         |                    | | **Duplicate Bottom**                      |
|                                               |         |                    | | **Duplicate Right**                       |
|                                               |         |                    | | **Duplicate Horizontal**                  |
|                                               |         |                    | | **Duplicate Vertical**                    |
|                                               |         |                    | | **Checkered**                             |
|                                               |         |                    | | **Checkered Inverse**                     |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Preview Split / ``Preview_Split``             | Double  | x: 0.5 y: 0.5      |                                             |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Output Layer / ``Output_Layer``               | Choice  | Layer 0            | |                                           |
|                                               |         |                    | | **Merged**                                |
|                                               |         |                    | | **Layer 0**                               |
|                                               |         |                    | | **Layer -1**                              |
|                                               |         |                    | | **Layer -2**                              |
|                                               |         |                    | | **Layer -3**                              |
|                                               |         |                    | | **Layer -4**                              |
|                                               |         |                    | | **Layer -5**                              |
|                                               |         |                    | | **Layer -6**                              |
|                                               |         |                    | | **Layer -7**                              |
|                                               |         |                    | | **Layer -8**                              |
|                                               |         |                    | | **Layer -9**                              |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Resize Mode / ``Resize_Mode``                 | Choice  | Dynamic            | |                                           |
|                                               |         |                    | | **Fixed (Inplace)**                       |
|                                               |         |                    | | **Dynamic**                               |
|                                               |         |                    | | **Downsample 1/2**                        |
|                                               |         |                    | | **Downsample 1/4**                        |
|                                               |         |                    | | **Downsample 1/8**                        |
|                                               |         |                    | | **Downsample 1/16**                       |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Ignore Alpha / ``Ignore_Alpha``               | Boolean | Off                |                                             |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Preview/Draft Mode / ``PreviewDraft_Mode``    | Boolean | Off                |                                             |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Global Random Seed / ``Global_Random_Seed``   | Integer | 0                  |                                             |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Animate Random Seed / ``Animate_Random_Seed`` | Boolean | Off                |                                             |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
| Log Verbosity / ``Log_Verbosity``             | Choice  | Off                | |                                           |
|                                               |         |                    | | **Off**                                   |
|                                               |         |                    | | **Level 1**                               |
|                                               |         |                    | | **Level 2**                               |
|                                               |         |                    | | **Level 3**                               |
+-----------------------------------------------+---------+--------------------+---------------------------------------------+
