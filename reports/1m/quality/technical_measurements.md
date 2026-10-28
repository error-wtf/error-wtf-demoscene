# TECHNICAL MEASUREMENTS — alte 1MiB-Produktion (Fehleranalyse §3)

Quelle: `errorwtf-1m` @ `7a0786dde1946455…` (1048576 B), Commit `5eef119…`
Messungen: Gate-Läufe (2026-10-28), 120 per-second Captures, MP4-Decode-Vergleich.

## 1. Shader-Kompilierung
- Alle Fragment-/Vertex-Shader der Produktion kompilieren ohne GLSL-Fehler
  (Gate-Log: 0 FS/VS-Fehler über 8 Szenen + Offline-Pass). **Kein technisches
  Shader-Versagen** — die Schwäche ist gestalterisch (Struktur), nicht kaputt.

## 2. GPU / Pipeline
- Renderer: NVIDIA GeForce RTX 4060 Ti, EGL-offscreen + GL 3.3 core.
- Live-Desktop: 56,7 fps (vsync) · Headless-Durchsatz 170.898 fps.
- Kein GPU-Engpass, keine Treiber-Fehler (GL error 0x0 in Diagnose-Läufen).

## 3. NaN / Inf
- Keine NaN-Indikatoren: Alle 120 per-second-Frames haben luma-min ≥ 0 und
  luma-max ≤ 255, ohne Sprung-Anomalien; Audio-Peak −0,72 dB (kein Clipping,
  keine Inf-Marker in astats). Shader-Rechenpfade (pow/normalize) gaben in
  keinem Capture Anlass (keine schwarzen Loch-Frames außer beabsichtigtem Fade).

## 4. Uniforms
- Aktiv: `u_time` (float), `u_scene` (int). Locations gültig (≥0, geprüft durch
  funktionierende Szenen-Umschaltung). **Nur zwei Uniforms** — das ist selbst
  die gestalterische Diagnose: die gesamte Welt hängt an zwei Parametern.

## 5. Framebuffer / Auflösung / Farbraum
- EGL pbuffer 1280×720, GL_RGB-Readback; MP4-Export yuv420p **ohne explizite
  BT.709/BT.601-Flags** (ffmpeg-Default) — dokumentierte Einschränkung: Farbraum-
  Metadaten nicht gesetzt. Kein Cropping, keine schwarzen Balken.

## 6. Zeitabhängige Berechnungen
- Alle Szenen-Cues messbar an Timeline-Positionen (12/28/45/64/78/100/112 ±0,1 s
  im Live-Lauf). Keine Frame-Drops im Offline-Pass (3600/3600 bzw. 7200/7200).
- **Befund:** Die Zeit-Berechnung funktioniert; die Szenen unterscheiden sich nur
  durch Parameter-Dosen desselben 2D-Gitter-Shaders (Root-Cause, siehe
  ART_REVISION_DIRECTIVE.md).

## 7. Fehlerort: Originalprogramm vs. Capture/Kodierung (§ Schritt 1)
- MP4-Decode-Frames vs. Offline-Referenz am exakten Frame-Index: **MAE 1,8–2,3**
  (nur yuv420p-Konversionsverlust) — siehe visual_quality_review.md.
- **Urteil: Die Bildfehler/die gestalterische Schwäche entstehen vollständig im
  Originalprogramm (Shader-Design), NICHT bei Aufnahme oder Kodierung.**
  Die Kette Build→Capture→Encode ist verlustarm und korrekt.

## 8. Sequenz-Qualitäts-Karte (messbar, 120 s)
Siehe `reports/1m/quality/frame_statistics.json`:
- **82/120 s ohne gesättigte Rot/Cyan-Pixel** („COLORLESS": sat < 2 %)
- 5 s LEER/FLACH-STATISCH (AFTERIMAGE-Fade, beabsichtigt, aber als Ende
  zusätzlich farblos)
- Szenen mit durchgehender Farblosigkeit: FIRST ORDER (16 s), FALSE PERFECTION
  (19 s), THE SIGNATURE (12 s — inkl. Wortmarke!), REWRITE REALITY (16/22 s)
- **Interpretation: Die ERROR.wtf-Identität (intensive Rot-/Cyan-Kontraste)
  existiert messbar in nur ~38/120 Sekunden.** Der Rest ist grau/blau-grau
  Gitter-Dosen — exakt Linos Screenshot-Befund.
