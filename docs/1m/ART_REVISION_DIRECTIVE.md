# ART REVISION DIRECTIVE — STOP auf Linos Anweisung (28.10., Abend)

## Die Direktive
Lino: „Ein gelblich-grünes Raster mit einer einfachen Pixel-Wortmarke ist keine angemessene
Umsetzung der geforderten 1-MiB-Produktion. Weder ein bestandener Build noch die korrekte
Dateigröße sind ein Qualitätsnachweis."

## Status der bisherigen Produktion: ARCHIVIERT, nicht verworfen
- Binary `errorwtf-1m` @ `94f10d2f…`/`7a0786dd…` bleibt im Release v0.1.0-alpha + v0.2.0-media (Archivstand).
- Kein weiterer „Gate-PASS"-Claim für die alte Produktion: **Gate 9/9 beweist nur Technik
  (Größe/Audio/Szenen/Laufzeit), NICHT künstlerische Qualität.** Diese Trennung ist ab jetzt bindend.
- Produktionszweig für die Revision: `revision/art-rework` (dieser Branch).

## Root-Cause-Analyse (Warum ist das Ergebnis schwach? — aus dem Quellcode)

1. **Architektonische Decke:** Die gesamte Optik ist EIN Fullscreen-Triangle mit EINEM
   Fragment-Shader, dessen ganze Sprache `lm()` (Linien auf `fract()`) ist — flaches 2D-Gitter,
   keine Kamera, keine Geometrie, keine Tiefenrechnung. Szenen unterscheiden sich nur durch
   Parameter (Dichte/Drehung/Farbe). Das Vision-Review sagte es selbst: „essentially one shader
   with varying parameters" — 40 s der Mitte wirken statisch.
2. **„Türme" sind Rect-Step-Patterns** (`step()` auf Zellkoordinaten), keine Körper — deshalb
   lesen sie als Balken-/Scanline-Artefakte, nicht als Welt.
3. **Fracture ist sinusförmiger Warp**, keine Bruchgeometrie (das Review: „liquefaction, not fracture").
4. **Wortmarke ist 5×7-Bitmatrix** — für 4 KiB okay, für 1 MiB ohne Inszenierung (kein Licht,
   kein Material, keine Bühne).
5. **Verfahrensfehler (Linos Diagnose, bestätigt):** Die Gate-Kriterien waren messbar, das
   Kriterium „beeindruckend/eigenständig/atmosphärisch" war nicht im Gate — und die
   Vision-Reviews bewerteten innerhalb des von mir gesetzten Rahmens („ist der Turm lesbar"),
   nicht gegen den eigentlichen Zweck („ist das eine beeindruckende 1MiB-Demo").

## Neue Maßstäbe (bindend für alles Folgende)
Keine großflächigen Raster- oder Pixeltext-Szenen als Hauptgestaltung. Gefordert: filmisch
gestaltete Echtzeitwelten, räumliche Tiefe, präzise mathematische Transformationen,
intensive Rot-/Cyan-Kontraste, musikalisch synchronisiertes Finale. Drei deutlich
verschiedene 12–15-s-Prototypen mit Original-Score-Extrakten, Vision-Review gegen
Linos Kriterien, schwache Konzepte werden verworfen. Erst dann Rebuild der 1MiB.

## Dokumentierte Follow-ups (ohne Handlung in dieser Direktive)
- BEST_OF/v1.0-Release: BLOCKED bis die Revision ein menschlich sichtbar besseres Werk liefert.
- ERROR-WATCH-Mirror-Löschung: wartet weiterhin auf Linos explizites Go.
