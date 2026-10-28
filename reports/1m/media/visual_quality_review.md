# VISUAL QUALITY REVIEW — ERROR.wtf // 1MiB media export (§4.3/§7.3)

## Methode
Frame-exakter Vergleich: Offline-Render-Pass (deterministisch, MAE 0,00 zwischen Läufen)
gegen dekodierte MP4-Frames am selben Frame-Index. Zusätzlich unabhängige
GLM-4.5V-Vision-Reviews (4 Runden, siehe docs/1m/REVIEW_ITERATIONS.md).

## Frame-Fidelity (MP4-dekodiert vs. Offline-Referenz, MAE 0–255)

| t | Frame# | MAE | Beurteilung |
|---|---|---|---|
| 0 | 0 | 1,98 | verlustarm (yuv420p-Konversion) |
| 1 | 60 | 1,83 | ✓ |
| 2 | 120 | 1,90 | ✓ |
| 3 | 180 | 1,81 | ✓ |
| 6 | 360 | 2,27 | ✓ (RGB-Mittel identisch: blau-dominantes COLD-BOOT-Gitter) |

Kein Banding/Blockartefakt/Detailverlust über den MAE-Schwellen (≈5) hinaus beobachtet.

## Methoden-Korrektur (transparent)
Ein früherer Vergleich (cap_*.ppm aus dem Echtzeit-Capture-Lauf vs. MP4-Frames)
ergab MAE 26–52 — Ursache: die Echtzeit-Captures tragen t-Jitter des ALSA-Clocks
(kein frame-exaktes t), daher war dieser Vergleich methodisch ungültig und wurde
verworfen. Der validierte Vergleich ist Offline-Pass ↔ MP4 (beide exakt t).

## Unabhängige Vision-Reviews (GLM-4.5V)
1. v2-Band: 6,5/10 — 3 konkrete Mängel → Polish v3/v4
2. v3-Strip: 7,5/10 — Skyline „clearly fixed", Beacons/Spines offen
3. v6: Beacons „present and prominent, 10/10 match" ✓, Fracture-Dominanz YES ✓;
   Rest-Nuance: gestufte Spine (gewollt, entspricht v4-Empfehlung)
Gesamt: Fracture-Signatur, Wortmarke (Dark-Plate, chunky dots), drei-aktiger Bogen
als poliert verifiziert.

## Nicht wahrnehmungsgeprüft (NOT_TESTED)
- Menschliches Hören des MP4-Tons (automatisch: Peak −0,72 dB, kein Clipping;
  Quelle = verlustfreies PCM derselben Funktion).
- Menschliches Loop-Empfinden des GIFs (technisch: 120 Frames, -loop 0, 12,0 s).
