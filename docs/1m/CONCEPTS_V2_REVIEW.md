# CONCEPT TRIAD v2 — REVIEW (unabhängig, GLM-4.5V, nach Linos Kriterien)
Datum: 28.10. · Strips: captures/1m/c2_{A,B,C}_strip.png · Videos: releases/1m/concepts/concept_{A,B,C}.mp4

## Ergebnisse

| Konzept | Technologie | Score | Stärkster Beleg | Schwäche (Reviewer-Wortlaut gekürzt) |
|---|---|---|---|---|
| A CATHEDRAL OF SIGNALS | SDF-Raymarch-Korridor | **4/10** | „genuine forward translation, parallax — unquestionably a raymarched 3D scene" | „~90 % crushed near-black, cyan never registers, symmetric tunnel cliché" |
| B PARTICLE COLLAPSE | analytisches Partikelfeld (320 Glows) | **5/10** | „cyan→red + hot core: genuine beat" | „uniform Gaussian blur fuses particles; 2.5D ribbon" |
| C SIGNAL TERRAIN | Heightfield-Flug | **2/10 → VERWORFEN** | — | „no horizon, no relief, no motion — proves almost nothing" |

## Bewertung gegen Linos Kriterien
1. Räumliche Tiefe: A stark bewiesen (Perspektive/Parallax) · B teilweise · C nicht
2. Filmisch statt Screensaver: noch alle drei unter dem Ziel (Lighting/AA/Komposition fehlen)
3. Rot/Cyan-Kontrast: A halb (rot ja, cyan fehlt) · B ja (temporaler Swap) · C fehlend
4. Distinkt zum alten Raster-Look: A ja · B ja · C marginal

## ENTSCHEIDUNG (nach Direktive: schwache Konzepte verwerfen)
- **Lead-Kandidat: A** (stärkste 3D-Basis; Review liefert konkreten Fix-Katalog:
  Exposure/Key, sichtbares Cyan-Endportal, Bloom+Tone-Mapping+2×2 AA, Banding-Reduktion,
  SDF-Ornament für Kathedralen-Identität)
- **B bleibt Sekundär** mit Fix-Pfad (schärfere Kerne, nur mildes DOF, thermischer Gradient
  rot-im-cyan statt palette swap)
- **C verworfen** als Richtung; Terrain-Idee nur als späterer Redesign-Kandidat mit
  sichtbarem Horizont/Sonne

## Verfahrensnotiz (Schneier-Korrektur)
Diese Reviews bewerten NUR gegen Linos Kriterien — nicht gegen messbare Gate-Kriterien.
Ein Gate-PASS der technischen Bausteine (SHA/Größe/Audio) bleibt notwendige, aber NICHT
hinreichende Bedingung. Die 1MiB-Rebuild-Phase startet erst, wenn A/B-Polish in einem
unabhängigen Vision-Review gegenüber dem Archivstand (94f10d2f…-Look) als klar besser
bewertet wird UND Lino die Sichtung bestätigt.
