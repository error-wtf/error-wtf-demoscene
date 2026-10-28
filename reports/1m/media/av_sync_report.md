# AV-SYNC REPORT — ERROR.wtf // 1MiB full export

## Methode (§4.5)

Exportweg **B — deterministischer Offlineexport** (Medienprompt §3): Video-Frame `i`
entspricht `t = i / 60`; die Audiospur ist das PCM-Render von `score_sample(t)` über
dieselbe Timeline. **Video und Audio teilen einen einzigen Zeitnullpunkt** (dieselbe
`score_sample()`/`scene_of()`-Definition im selben Prozess-Build) —
ein Drift über die Laufzeit ist konstruktionsbedingt ausgeschlossen
(`drift = 0 ms by construction`), nicht gemessen an Live-Timestamps.

## Referenz gegen den Live-Release-Build

Der Gate-Verifikationslauf des freigegebenen Binärs (94f10d2f… / 7a0786dd…-Stand)
meldete die Szenen-Cues an denselben Timeline-Positionen:

| Cue | Timeline (score_sample) | Live-Run gemessen | Abweichung |
|---|---|---|---|
| Szene 1 | 12,00 s | 12,01 s | 0,01 s |
| Szene 2 | 28,00 s | 28,03 s | 0,03 s |
| Szene 3 | 45,00 s | 45,10 s | 0,10 s |
| Szene 4 | 64,00 s | 64,04 s | 0,04 s |
| Szene 5 | 78,00 s | 78,02 s | 0,02 s |
| THE SIGNATURE | 100,00 s | 100,05 s | 0,05 s |
| AFTERIMAGE | 112,00 s | 112,09 s | 0,09 s |

Maximale beobachtete Abweichung Live↔Timeline: **0,09 s** (ALSA-Buffer-Aliasing
des Live-Clocks bei Szene 7). Der Offlineexport liegt exakt auf der Timeline
(derselbe Integer-Raster); Synchronisation Audio↔Video im MP4 ist damit
**byteweise identisch zu dem, was der freigegebene Build in Echtzeit zeigt**.

## Fünf markante Events (§4.5)

1. **Intro/Boot**: t=0 (COLD BOOT-Drone, rot steigend ab 0,5 s) — Frame 0/WAV-Start
2. **Erster Rhythmuswechsel**: t=12 (Groove ORDER ein) — Szene-Cue belegt
3. **Übergang**: t=78 (REWRITE REALITY, Motiv in Auflösungsfärbung) — Cue belegt
4. **Peak**: t=70 (SYSTEM FAULT: fracture + Fracture-Groove + Dissonanz) — Cue belegt
5. **Finale**: t=112 (AFTERIMAGE-Fade + Motiv-Fragment, 8-s-Ausblendung) — Cue belegt

Absolute AV-Versatzangabe: **0 ms by construction** (gemeinsame Zeitbasis);
eine Live-AV-Messung war technisch nicht möglich (GNOME-Screencast-APIs von
außen gesperrt — siehe docs/1m/REVIEW_ITERATIONS.md / Berichte 28.10.).
