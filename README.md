# ERROR.wtf — BEYOND THE ERROR

> Out of noise, a signal. Out of failure, a new structure.
> Out of chaos, something nobody expected.

Demoscene-Produktionsreihe von **ERROR.wtf** (Lino Casu).

<p align="center">
  <img src="https://github.com/error-wtf/error-wtf-demoscene/releases/download/v0.2.0-media/ERROR_wtf_ONE_MEGABYTE_preview_readme.gif" alt="ERROR.wtf — BEYOND THE ERROR: 1MiB preview (silent loop)" width="640">
</p>

**Status: In aktiver Entwicklung.** Diese Datei reflektiert ausschließlich den realen Stand.

## 1MiB — „ONE MEGABYTE" (Folgeauftrag, aktuelles Werk)

Laufende Produktion mit **exakt 1.048.576 Bytes**, 120-s-AV-Timeline, Linux.

> **Video mit Original-Soundtrack:** [`ERROR_wtf_ONE_MEGABYTE_full.mp4`](https://github.com/error-wtf/error-wtf-demoscene/releases/download/v0.2.0-media/ERROR_wtf_ONE_MEGABYTE_full.mp4)
> (120 s · 60 fps · H.264/AAC — deterministischer Offline-Render aus demselben Produktionscode wie das Release-Binary)

<video controls preload="metadata" width="640" src="media/ERROR_wtf_ONE_MEGABYTE_web.mp4"></video>

| Phase | Stand |
|---|---|
| Baseline-Gate | BASELINE_PARTIAL dokumentiert (docs/1m/BASELINE_INVENTORY.md) |
| Concept Triad | 3 lauffähige Prototypen → Richtung **FRACTURED ORDER** (docs/1m/CONCEPT_DECISION.md) |
| Musik | Leitmotiv E→Bb(Tritonus)→G→B, Groove-Zustände; hörbare WAV-Evidenz (docs/1m/MUSIC_MASTERPLAN.md) |
| Produktion | **errorwtf-1m: exakt 1.048.576 B, 120-s-Lauf exit=clean, Audio 5.760.000/5.760.000 Samples** (docs/1m/PRODUCTION_V1.md) |

Artefakt-Build: `make 1m` (benötigt GLFW/GL/EGL/ALSA). Live-Modus: `./errorwtf-1m` (ESC beendet),
Headless-Evidenz: `ERRORWTF_HEADLESS=1 ./errorwtf-1m`.

## Ursprungs-Produktionen (Master-Auftrag, parallel)

| # | Titel | Größe | Status |
|---|---|---|---|
| 1 | SEED | exakt 4096 B | NOT_STARTED |
| 2 | FRACTURE | exakt 16384 B | NOT_STARTED |
| 3 | EMERGENCE | exakt 65536 B | NOT_STARTED |
| 4 | BEYOND THE ERROR (Ultimate) | offen | NOT_STARTED |

## Technische Referenz

Die Größe-, Self-contained- und Laufzeit-Constraints sind von der Engineering-Seite des
[MorphDemo-Benchmarks](https://github.com/TheMorpheus407/morphdemo-benchmark) abgeleitet (MIT, © Cedric Mössner).
Kunst, Musik, Branding und Code dieses Projekts sind eigenständig — siehe
`docs/REFERENCE_TECHNICAL_ANALYSIS.md` und `THIRD_PARTY_NOTICES.md`.

## Dokumentation

- `docs/1m/` — komplette 1MiB-Entwicklungsdoku (Baseline, Triade, Musik, Produktion)
- `docs/briefings/` — die verbindlichen Auftragsdokumente (Master Director's Cut, 1MiB-Folgeauftrag, Medien-Folgeauftrag) — Spec-Quelle dieses Projekts
- `docs/ENVIRONMENT_AUDIT.md` — gemessene Hardware/Stack-Realität
- `docs/PROVIDER_COST_AUDIT.md` — 0,00 €-Kostenprüfung
- `docs/AUFTRAG_KERNREGELN.md` — verbindliche Kernregeln
- `SPEC.md` — Projektspezifikation

## Repository

Primäres Repository: **github.com/error-wtf/error-wtf-demoscene** (dieses Repo).
Ein Entwicklungsspiegel existiert unter ERROR-WATCH/error-wtf-demoscene.

## License

MIT — siehe LICENSE. Releases erst nach bestandenen Release-Gates; Development-Builds
sind als solche klar gekennzeichnet (alpha).
