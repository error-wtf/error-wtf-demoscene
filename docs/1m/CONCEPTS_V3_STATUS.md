# Concept Triad v3 — Status nach Runde 1 (technische Reviews, KEINE künstlerische Freigabe)

Verfahren per Direktive: Bingsi misst und repariert technisch; die künstlerische
Abnahme entscheidet ALLEIN Lino. Vorlage nach abgeschlossener technischer Runde.

## Score v2 (düster: Breakbeat/IDM/Dubstep-Wobble) — GEBaut + bewiesen
- music_engine.c: score2_sample (Breakbeat-Kicks 0/0.375, Snares syncopated,
  IDM-Hats, Dubstep-Wobble-Bass mit LFO-Rate pro Szene, Glitch-Stutter in
  Fault/Rewrite-Fenstern, dunkles E-Moll-Pad)
- seg2-Modus: 3 Konzept-Segmente WAV (12 s, Peak 0.52–0.93, normalisiert ≤0.92)

## Konzepte v3 (concepts3.c, alle mit Reinhard-Tonemap + Dither + u_res)
- A3 NEURAL SANCTUM (SDF-Raymarch + fbm-Domain-Warp, gefaltete Säulen,
  Signal-Ringe, volumetrische Schächte, Cyan-Portal): **6,5/10** technisch
  (3D-Tiefe ✓, Cyan als Licht ✓; FEHLER: Rot existiert nur als Albedo,
  kein volumetrisches Rot-Bleed; Korridor-Trope)
- B3 GLYPH SWARM (480 Beat-Glyph-Partikel, 2 Tiefenschichten, cyan→rot,
  Collapse): **5/10** technisch (Farb-Arc ✓, Makro-Motion ✓; FEHLER:
  Glyphen lesen als Dots — zu klein, Bloom schluckt Silhouetten, weiße
  Kerne clippen)
- C3 WOBBLE BASIN (Domain-Warp-Terrain, tiefe Kamera, rote Sonne):
  **3/10** technisch (Sonnen-Richtungs-Bug gefixt: stand HINTER der Kamera;
  jetzt Glow sichtbar, aber Disc noch horizontverdeckt; Terrain-Relief liest
  als flache Sheets; ein Strip-Mittelfeld leer — verifizieren)

## Nächste Runde (Fix-Kataloge vor der Vorlage an Lino)
1. A3: rote Emission/Fog-Dichte links + Bleed auf Säulen/Boden; Komposition
   von der Korridor-Symmetrie weg (asymmetrischer Kameraswing, Fokus-Säule)
2. B3: Glyph-Mindest-Screenspace-Größe + dark-edge Halos, Bloom/Clipping dämpfen,
   Depth-Schichten per Parallaxe/Größe trennen
3. C3: Sonne über Horizont heben (y 0.09→0.2), Terrain-Topo-Lesbarkeit
   (Schattierung, sekundäre Relief-Skala), Strip-Mux-Fehler prüfen

## Abnahme
- Videos: releases/1m/concepts_v3/concept3_{A,B,C}.mp4 (12 s, h264+AAC)
- Frames/Strips: captures/1m/c3_{A,B,C}_t{1,6,11}.png, c3_*_strip.png
- KEIN Release-Upload, KEIN „fertig" — Vorlage erst nach Fix-Runde 2.

## Runde 3 — VORLAGE-STAND (Qualitäts-Gate an Lino)
- A3 NEURAL SANCTUM: **7/10** — rotes Fog-Bleed ✓, Glow-Banding gelöst ✓;
  Rest: horizontale comb-striping auf Flächen, rote/warme Fog-Systeme noch getrennt
- B3 GLYPH SWARM: **6/10** — roter Kern jetzt pink-getönt (vorher neutral-weiß);
  Rest: Hotspot clippt weiterhin (Reviewer: Sättigung vor Tonemap / chroma-erhaltend)
- D3 NEON MITOSIS (NEU, ersetzt C3 in der Vorlage): **7/10** — kaleido-IFS
  (6 animierte Fold-Iterationen = kontinuierliche Transformation), rotes Neon als
  diegetisches Membran-Licht, Mikro-Bio-Morphologien, „authored not default";
  Rest: Makro-Geste/Event-Hierarchie (Division-Event auf Phrase-Grenzen),
  Cyan-Entladung zu selten sichtbar, IFS-Perfkosten
- C3 WOBBLE BASIN: VERWORFEN für die Vorlage (t≈6-March-Ausfall, Relief schwach)
- Technische Reviews = Messwerkzeug; künstlerische Freigabe = Lino allein.
