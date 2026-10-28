# HERMES / BINGSI — FINALER FOLGEAUFTRAG: ERROR.wtf 1 MiB → GIF + MP4
## ERROR.wtf — BEYOND THE ERROR: ONE MEGABYTE
### Verbindliche Medienproduktion, Qualitätskontrolle und GitHub-Veröffentlichung

**Auftraggeber / Künstler:** ERROR.wtf (Lino)  
**Originalproduktion:** `ERROR.wtf — BEYOND THE ERROR: ONE MEGABYTE`  
**Quellprogramm:** Die bereits vollständig entwickelte, freigegebene **1-MiB-Demo** (`errorwtf-1m`, oder ihr tatsächlich dokumentierter Name), exakt **1.048.576 Byte**  
**Ziel-Repository:** `https://github.com/error-wtf/error-wtf-demoscene`  
**Zusatzkostenlimit:** **0,00 €**  
**Output:** **ein stummes, hochwertiges GIF** als bewegte visuelle Vorschau **und ein vollständiges MP4-Video mit dem tatsächlichen Originalton** der 1-MiB-Demo. Optional zusätzlich ein vollständiges Lang-GIF, sofern Ressourcen und Dateigröße sinnvoll bleiben.  
**Grundsatz:** Dieses ist ein **Ausführungsauftrag**. Nicht bloß einen Plan oder weiteren Prompt schreiben.

---

# 0. DIE NICHT VERHANDELBARE ABSICHT

Hermes, die 1024-KiB-/1-MiB-ERROR.wtf-Demo ist eine native, eigenständige audiovisuelle Demoscene-Produktion. Jetzt sollst du diese **echte finale Produktion** professionell für Betrachter, GitHub, Projektseiten und soziale Vorschauen zugänglich machen.

Erstelle zwei verbindliche Medienartefakte:

1. **`ERROR_wtf_ONE_MEGABYTE_preview.gif`** – **stummes**, hochwertig gestaltetes, in sich schlüssiges, nahtlos oder bewusst dramaturgisch gelooptes animiertes GIF. Es soll den besten *tatsächlichen* visuellen Abschnitt der Demo zeigen und ERROR.wtf als künstlerische Identität transportieren. Primär ein **10–18 Sekunden langes Vorschau-GIF**; die optimale Länge anhand des realen Materials entscheiden. Ein GIF kann keine Tonspur besitzen. Es ist **keine** vollständige Repräsentation der audiovisuellen Arbeit und darf nicht als solche vermarktet werden.
2. **`ERROR_wtf_ONE_MEGABYTE_full.mp4`** – die **gesamte Demo vom ersten Frame bis zum letzten**, einschließlich aller Szenen und des **unveränderten Original-Soundtracks**, zeitlich korrekt synchronisiert. Keine abgekürzte Timeline, kein Trailer, keine Ersatzmusik, keine stummgeschaltete Wiedergabe, keine zusätzlichen Werbeeinblendungen, keine fremde Videomontage.

Optional: Ein **`ERROR_wtf_ONE_MEGABYTE_full_silent.gif`** mit der vollständigen Laufzeit, aber **nur**, wenn die tatsächliche Dateigröße, Bildqualität und Darstellung sinnvoll sind. Dieses Zusatzartefakt darf die zwei Pflichtdateien nicht verzögern oder deren Qualitätsniveau verschlechtern. Das Voll-GIF ist nicht erforderlich, weil lang laufende GIFs extrem ineffizient sein können.

**Wichtig:** Die 1.048.576-Byte-Grenze gilt ausschließlich für die **native Demo-Binärdatei**, **nicht** für Video oder GIF. Manipuliere weder die Binärdatei noch die künstlerische Fassung, um kleinere Exportdateien zu erzwingen. Das MP4 darf beliebig größer als 1 MiB sein; die Bild- und Tonqualität hat Vorrang vor künstlicher Dateigrößenkosmetik.

**Nicht tun:** Aus Einzelbildern eine neue KI-Animation zusammenphantasieren, eine andere Demo filmen, Screenshots als angebliche Live-Frames ersetzen, künstlichen Sound unterlegen oder das Rendering gegenüber der freigegebenen 1-MiB-Version inhaltlich verändern.

---

# 1. VERBINDLICHE AUSGANGSPRÜFUNG

Bevor du capturst oder konvertierst:

1. Öffne das **bestehende** ERROR.wtf-Projekt. Erstelle **kein neues Konkurrenz-Repository**.
2. Prüfe reale Pfade; `errorwtf-1m` ist ein erwarteter Name, **keine Garantie**. Verwende den nachweislich zuletzt freigegebenen Produktions-Build.
3. Lies die ursprünglichen ERROR.wtf-Masteraufträge, den 1-MiB-Folgeauftrag, die vorhandenen Build- und Verifikationsberichte, Release-Notizen und die künstlerische Stilbibel.
4. Prüfe Git-Status, Commit-ID, vorhandene Releases und die exakte Binärdatei mittels SHA-256.
5. Verifiziere, dass die Produktionsdatei tatsächlich **1.048.576 Byte** groß, ausführbar, vollständig und technisch freigegeben ist. Notiere tatsächlichen Pfad, Build-Hash, Git-Commit, Laufzeit, Auflösung, Audio-Samplerate und die relevanten bekannten Einschränkungen.
6. Führe die Demo selbst aus oder inspiziere ihren echten Offline-Renderer. Wenn kein funktionierender, freigegebener Build existiert, melde **`SOURCE_DEMO_NOT_READY`**. Erfinde keine Medien, keine Bildqualität und keinen Erfolg; behebe projektinterne nichtdestruktive Exportprobleme soweit sicher möglich.
7. Prüfe `ffmpeg` und `ffprobe` sowie vorhandene Capture-Tools, `xrandr`/Wayland, PipeWire/PulseAudio/ALSA, Verfügbarkeit der GPU und freien Platz auf `/mnt/DATEN`. Installiere keine zweifelhaften oder kostenpflichtigen Tools; wenn nötig nur sichere kostenlose projektlokale Alternativen.
8. Prüfe, ob die Demo einen **deterministischen Offline-Frame- und Audioexport** unterstützt. Falls ja, untersuche, ob dieser exakt denselben visuellen und musikalischen Produktionscode und dieselbe Timeline wie der veröffentlichte ausführbare Build verwendet.

**Source-of-Truth:** Die Freigabe gilt für eine **konkrete Build-Datei + Hash + Git-Commit + Audio-/Video-Timeline**. Ein Entwicklungsbuild mit abweichenden Farben, Szenen, Musik oder Laufzeit ist kein gültiger Ersatz.

Erstelle einen kurzen, maschinenlesbaren Provenienzbericht, zum Beispiel:

`reports/1m/media/source_provenance.json`

Felder: `source_path`, `source_sha256`, `source_bytes`, `source_git_commit`, `source_version`, `measured_duration_seconds`, `video_source`, `audio_source`, `capture_method`, `export_date`, `status`.

---

# 2. RECHTE, KOSTEN, INFRASTRUKTUR, SCHUTZ

Es gelten weiterhin sämtliche ursprünglichen Sicherheits- und Kostenregeln:

- **0,00 € zusätzliche API-, Cloud-, KI-, Video-, Musik-, GPU-, GitHub-Runner- oder Renderingkosten.**
- Nutze ausschließlich die bereits vorhandene, für den konkreten Zugang nachweislich kostenneutrale Hermes-Modellkette und lokal installierte Gratissoftware.
- Ein Abonnement ist kein Freibrief für zusätzliche API-Abrechnung. Unbekannte Providerkosten: `COST_UNVERIFIED`, **nicht aufrufen**.
- Keine neue Cloud-GPU, kein kommerzieller Encoding-Service, keine Bezahl-API, keine neue Modellregistrierung, keine kostenpflichtigen GitHub-Aktionen.
- Keine Treiber-, Kernel-, GRUB-, PAM-, Netzwerk-/Firewall-, VPN-/Tor-, DNS- oder SSH-Änderungen.
- Keine Root-Eingriffe ohne gesonderte Freigabe.
- Keine globalen Änderungen an laufenden anderen KI- und Forschungsdiensten.
- Keine destruktiven Git-Operationen, keine fremden Repositories überschreiben.
- Keine Geheimnisse, private Systemlogs oder persönliche Daten in öffentlichen Release-Artefakten.
- Bei der Wiedergabe keine Netzwerkanforderung, wenn die ursprüngliche Demo offline ausgelegt ist.
- Fremdtools/Skripte nur nach Prüfung und möglichst ohne erhöhte Rechte ausführen.

Die Veröffentlichung der **eigenen fertigen ERROR.wtf-Medien** unter `github.com/error-wtf/error-wtf-demoscene` ist im Rahmen des bisherigen Auftrags autorisiert. Bei fehlender GitHub-Berechtigung keine andere Identität verwenden, sondern `PUBLISH_BLOCKED` dokumentieren. Vorhandene alte Releases und Tags erhalten.

---

# 3. WAHRE WIEDERGABE — ECHTE FRAMES, ECHTER TON

Du darfst aus zwei technisch sauberen Quellen schöpfen:

**A. Direkter Capture der freigegebenen Anwendung** – visuelle Aufnahme des tatsächlich geöffneten, laufenden 1-MiB-Programms und Mitschnitt seines tatsächlich ausgegebenen Audiosignals, mit nachgewiesenen Timestamps. Bevorzugt, wenn ein hochwertiger, stabiler und störungsfreier Mitschnitt möglich ist.

**B. Deterministischer Offlineexport aus demselben Produktionscode** – derselbe Renderer, dieselben Parameter, dieselbe Musik, derselbe Seed und dieselbe Timeline; nur die Ausgabe wird zur verlustarmen Datenerfassung in Frames und PCM-Audio geschrieben. Dies ist bei Echtzeit-Framedrops oft die bessere technische Lösung, **aber nur**, wenn die Gleichheit mit der freigegebenen Demo nachprüfbar ist. Unzulässig wäre eine qualitativ geschönte alternative Demo, die nicht dem Original entspricht.

Falls für die Exportfunktion Codeänderungen erforderlich sind, müssen diese im **separaten Export-/Tooling-Zweig** erfolgen. Der freigegebene 1-MiB-Build darf dabei **nicht** unbemerkt verändert werden. Quellidentität, Timeline-Identität und relevante Capture-Differenzen müssen dokumentiert werden. Keine Herausrechnung von Szenen, Umdeutung der Musik, neue Logos, veränderte Shaderparameter oder zusätzliche visuelle Effekte.

**Verbotene Scheinerfolge:**

- Rendern einer anderen Szene als der tatsächlichen 1-MiB-Demo.
- Ersatz der echten generierten Musik durch einen generischen KI-Track.
- Nutzung einer Videosequenz aus dem alten MorphDemo-Benchmark statt ERROR.wtf.
- Ausgeben statischer Bilder als angebliche kontinuierliche Animation.
- Nur den attraktivsten Teil als angebliches Vollvideo ausgeben.
- Nachbearbeitung, die den künstlerischen Charakter verfälscht.
- Eine MP4-Datei mit Audio-Stream, dessen Pegel faktisch 0 ist, als „mit Ton“ deklarieren.
- Ein MP4, in dem Sound und Bild deutlich auseinanderlaufen, als `PASS` melden.

---

# 4. DAS VOLLSTÄNDIGE MP4 — TECHNISCHER MASTER

## 4.1 Vollständigkeit

Das MP4 muss die komplette final freigegebene 1-MiB-Produktion zeigen:

- Beginn bei der tatsächlichen ersten relevanten Szene beziehungsweise dem definierten Produktionsstart.
- Alle Szenen, Übergänge, Pausen, Breakdowns, Signature Moments und das `ERROR.wtf`-Finale.
- Keine versehentlichen Black-Screen-Ränder, Desktop-Einblendungen, Mauszeiger, Terminalfenster, Debug-HUDs oder Benachrichtigungen.
- Keine abgeschnittene Schlussausblendung, kein fehlendes Schlussaudio.
- Keine vorgespulte, verlangsamte oder zur Ziel-Länge gestreckte Wiedergabe.
- **Gemessene Video- und Audiolaufzeit** muss mit der originalen Produktion übereinstimmen, abgesehen von eindeutig erklärten technischen Start-/Endtoleranzen.

## 4.2 Qualitätsziel

Standard-Zielprofil für das öffentlich nutzbare Full-MP4, **sofern das Original und die Hardware das hergeben**:

- Originalauflösung oder **1920×1080** bei 16:9, sofern tatsächlich originalgetreu; keine künstliche Bildinhaltsänderung durch Cropping.
- **60 fps** bei 60-fps-Quelle; sonst die tatsächliche originale Bildrate sauber respektieren. Kein künstlicher Framerate-Score durch Duplizieren von Frames.
- H.264/AVC im MP4-Container für breite Kompatibilität.
- `yuv420p` für alltägliche Player; **BT.709-Metadaten** bei tatsächlicher Rec.709-Quelle und korrekt behandelter Umwandlung.
- Qualitätsorientiertes Encoding über `libx264` (`-preset slow`, beispielhaft **CRF 16–18**). Bei Qualitätseinbußen CRF und Encoderoptionen anhand von Vergleichsframes verbessern, keine starren Zahlen blind erzwingen.
- AAC-LC-Stereo mit **48 kHz** und hoher Qualität, beispielsweise **256–320 kbit/s**, sofern die Quelle dies unterstützt.
- `+faststart` für direkte Web-Wiedergabe.
- Korrekte Pixel-Seitenverhältnisse, keine Streckung.
- Keine unnötigen schwarzen Balken.
- Keine eingebrannten Wasserzeichen, Untertitel oder neuen Texte. Das Original-Logo `ERROR.wtf` bleibt Bestandteil der Szene.

Es ist zulässig, zusätzlich ein **10-bit/HEVC- oder verlustarmes Archivmaster** zu produzieren, falls die Inhalte davon profitieren; dieses **ersetzt nicht** das kompatible H.264/AAC-Pflicht-MP4. Zusatzformate sind optional.

## 4.3 Schwierige visuelle Inhalte

Die ERROR.wtf-Bildsprache enthält potenziell feine rote Lichtlinien, tiefes Schwarz, schnelle Bewegungen, Glitches, Partikel und geometrische Details. Diese sind für Videokompression anspruchsvoll. Kontrolliere ausdrücklich:

- Banding in dunklen Farbverläufen;
- verlorene feine Linien und Details;
- Blockartefakte um rote Leuchtkanten;
- verschmierte Glitch-Elemente;
- sichtbare Makroblöcke im Schwarzbereich;
- Farbraum- und Gamma-Verschiebungen;
- geklemmte Lichter;
- unerwünschte Bewegungsruckler;
- unsaubere Skalierung und Halbbild-/Frameratefehler.

Prüfe Originalframes gegen dekodierte MP4-Frames an dramaturgisch relevanten Zeitpunkten. Nicht nur Bitrate und Datei-Hash prüfen.

## 4.4 Originalton, nicht Ersatzton

Der Ton muss aus der **tatsächlichen originalen ERROR.wtf-1-MiB-Musik** stammen.

Wenn getrenntes Audio aus derselben Engine als PCM/WAV gerendert wird, dokumentiere und prüfe dessen Identität beziehungsweise Abweichung zur tatsächlich abgespielten Originalmusik. Ein extern neu erzeugter oder fremder Soundtrack ist unzulässig.

Prüfe:

- Stereo-Kanalbelegung;
- Sample-Rate;
- durchgängige Musik, auch bei leisen dramaturgischen Stellen;
- keine NaN-/Inf-Werte;
- keinen unbeabsichtigten Digital-Clipping;
- keine Verzerrung durch Resampling;
- echte Audio-Video-Synchronisation;
- richtige Lautstärke ohne willkürlich aggressives Limiting;
- Schlussakkord/Nachhall/Ausblendung vollständig vorhanden.

Nutze Lautheits- und Peak-Messung als Diagnose, aber verändere den Originalmix nicht ohne dokumentierten technischen Grund. Optional darf ein transparenter, vorab gemessener Pegelausgleich erstellt werden; er darf nicht als neues Mastering des Originalwerks ausgegeben werden.

## 4.5 Synchronisation und Zeitstempel

Bevorzugt Video und Audio auf **einer gemeinsamen Original-Zeitbasis** erfassen. Bei einem Live-Capture müssen reale Capture-Timestamps erhalten oder sorgfältig korrigiert werden.

- Konstante gewünschte Wiedergabebildrate, keine verdeckte Beschleunigung/Verlangsamung.
- Keine offensichtlichen Frametime-Drops in der finalen Aufnahme.
- Drifts und Offsets über Anfang, Mitte und Ende prüfen.
- Mindestens fünf markante Musik-/Bildereignisse vergleichen, darunter Intro, erster Rhythmuswechsel, Übergang, Peak und Finale.
- Audio-Video-Versatz als Messwert notieren; bei visueller Unschärfe oder uneindeutigen Ereignissen keine exakten Zahlen vortäuschen.
- Bei nicht vertretbarer Drift erneute Erfassung beziehungsweise ein Originalcode-konformer Offlineexport.

Empfohlener Abnahmemaßstab: der absolute Zeitversatz eindeutig korrespondierender Ereignisse sollte **im Regelfall unter 40 ms** liegen; falls Audioausgabelatenz oder Exportauflösung dies nicht zulassen, die konkrete Abweichung messen, erklären und nicht verschweigen. Ein willkürliches `-itsoffset`, das nur am Anfang synchronisiert, reicht nicht als Nachweis einer über die gesamte Laufzeit stabilen Synchronisation.

## 4.6 Zeitbasierte Kontrolle

Fertige einen framegenauen oder möglichst präzisen Shot-Index an. Prüfe repräsentative Stellen:

- erste 1–3 Sekunden;
- erste erkennbare Struktur;
- erste musikalische Zäsur;
- Hauptteil;
- visuelles und musikalisches Maximum;
- ERROR.wtf-Signatur;
- Finale und Ausblendung.

Nicht die MP4-Laufzeit auf eine in alten Dokumenten genannte Zielzahl beschneiden; relevant ist die **tatsächliche freigegebene Laufzeit**.

---

# 5. DAS STUMME GIF — KUNSTVOLLE VORSCHAU, KEIN ZUFALLSAUSSCHNITT

## 5.1 Inhaltliche Gestaltung

Das GIF ist die bewegte Visitenkarte des 1-MiB-Werks.

Wähle aus den tatsächlichen Frames **eine zusammenhängende, künstlerisch starke Sequenz** von bevorzugt **10–18 Sekunden**. Entscheide nach Sichtung des gesamten MP4, nicht aufgrund eines willkürlichen `-ss`-Werts. Idealerweise bietet der Ausschnitt:

- einen sofort erkennbaren ERROR.wtf-Charakter;
- die markante Rot-/Schwarz-/Cyan-Bildsprache, soweit im Original vorhanden;
- sichtbar prozedurale Transformation statt bloßer statischer Bewegung;
- ausreichend räumliche Tiefe;
- eine verständliche Entwicklung auf kurzer Dauer;
- mindestens einen einzigartigen visuellen Höhepunkt;
- möglichst auch eine sichtbare, gut lesbare `ERROR.wtf`-Wortmarke, **sofern tatsächlich in dem ausgewählten Originalabschnitt enthalten**.

Falls das Logo außerhalb des stärksten Ausschnitts liegt, entscheide anhand künstlerischer Abwägung zwischen einer zusammenhängenden Signature-Sequenz und einem zweiten optionalen Branding-GIF. **Keine nachträglich gefälschten Originalframes.** Ein Zusatz-GIF ist kein Ersatz für das eine verpflichtende Vorschau-GIF.

## 5.2 GIF-Technik

Empfohlene Ausgangseinstellungen, **an tatsächliche Bewegung und Dateigröße anpassen**:

- **960 px Breite** (oder 720–1024 px, mit erhaltenem Seitenverhältnis);
- ungefähr **12–20 fps**, abhängig von Bewegungsqualität und Speicherbedarf;
- GIF mit optimierter **256-Farben-Palette** und geeigneter Dithering-Strategie;
- Palette **aus genau der ausgewählten Sequenz**, nicht aus einem fremden Bild;
- sinnvoll optimierte Frame-Differenzen;
- **Loop-Wiedergabe** für GitHub/README;
- kein Audio und keine als Tonspur interpretierbaren Metadaten;
- keine Veränderung der Bildgeometrie.

Die Palette muss insbesondere die dunklen roten Lichtdetails und Farbverläufe möglichst gut erhalten. Teste verschiedene `palettegen`-/`paletteuse`-Strategien visuell. Zu aggressives Dithering kann ERROR.wtf-typische feine Linien zerstören; zu wenig Dithering führt zu hässlichen Abstufungen.

### Loop-Qualität

Wähle nach Möglichkeit einen Clip, bei dem der Übergang vom letzten zum ersten Frame nicht störend wirkt. Nutze bevorzugt natürliche musikalisch-visuelle Bewegungsperioden oder eine tatsächliche zyklische Bildbewegung. Ein künstlicher Crossfade oder eine optische Rückwärtswiedergabe ist **nur für das GIF** zulässig, falls ausdrücklich als Preview-Bearbeitung dokumentiert und kein falscher Eindruck der Originalproduktion entsteht. Primär echter Original-Clip.

### Dateigrößen

Strebe für das in GitHub-README eingebettete Standard-GIF eine praxistaugliche Dateigröße an, **idealerweise unter etwa 10–15 MiB**, sofern dabei die künstlerische Qualität erhalten bleibt. Das ist ein Ziel, **keine starre Obergrenze**. Wenn ein hochwertiges GIF größer wird, liefere das qualitätsstarke Original und optional eine optimierte leichte README-Fassung.

**Nicht** Qualität nur deshalb zerstören, um eine erfundene Größenanforderung zu erfüllen. Größere GIFs gehören gegebenenfalls in GitHub Releases statt direkt in den README-Quellbaum.

## 5.3 Voll-GIF optional

Wenn sinnvoll, kannst du zusätzlich die **vollständige stumme 1-MiB-Demo** als GIF exportieren. Diese Datei darf deutlich größer sein, aber sie muss die volle Laufzeit korrekt enthalten und offen als `full_silent` benannt werden. Prüfe vorher Speicherbedarf, CPU-Zeit und erwartbare Größe. **Kein Voll-GIF erstellen, wenn dessen Erstellung die zwei Pflichtartefakte gefährdet.**

---

# 6. EMPFOHLENE TECHNISCHE PIPELINE

Verwende das bereits vorhandene lokale `ffmpeg`/`ffprobe` oder vergleichbar geeignete **kostenfreie lokale** Werkzeuge. Die folgenden Befehle sind **Illustrationen**, keine ungeprüft wörtlich auszuführenden Kommandos: Ermittle vorher reale Dateinamen, Zeitbereiche, Frameraten, Source-Pixelformate und verfügbare Encoder.

## 6.1 Rohdaten bevorzugt unverändert sichern

Falls verfügbar, speichere zuerst:

- verlustarme oder verlustfreie Frame-Sequenz mit stabilen Originalzeitstempeln;
- tatsächliches PCM/WAV-Audio aus derselben Engine oder eine entsprechend dokumentierte echte Audioaufnahme;
- einen Bericht über Bildrate, Dauer, Samples, Auflösung und Timestamps.

Speichere große temporäre Mediendaten auf der Daten-SSD in einem klar abgegrenzten Arbeitsverzeichnis. Temporäre Captures gehören nicht unbesehen ins Git-Repository. Prüfe verfügbaren Platz und begrenze temporäre Daten sinnvoll.

## 6.2 MP4-Encoding (Beispielstruktur)

Für eine bereits korrekt synchronisierte, freigegebene Audio-/Video-Quelle:

```bash
ffmpeg -hide_banner -y -i VERIFIED_SYNCHRONIZED_SOURCE.mkv \
  -map 0:v:0 -map 0:a:0 \
  -c:v libx264 -preset slow -crf 17 -pix_fmt yuv420p \
  -movflags +faststart \
  -c:a aac -b:a 320k -ar 48000 \
  ERROR_wtf_ONE_MEGABYTE_full.mp4
```

Die hier verwendete Quelle ist ein **Platzhalter**. Falls Bild- und Tonquellen getrennt vorliegen, müssen sie anhand des **nachweislichen gemeinsamen Zeitnullpunkts** korrekt zusammengeführt werden; nicht blind gleichzeitig bei `0` beginnen. Zusätzliche Framerate-/Farbkonvertierungen nur nach tatsächlicher Quellenprüfung. Falls in `ffmpeg` ein Eingabefile nicht existiert oder Audio fehlt: `FAIL`, kein stummer Ersatz.

## 6.3 GIF-Palette und GIF-Encoding (Beispielstruktur)

Bestimme erst die tatsächliche Position des besten Preview-Ausschnitts in Sekunden und seine Dauer. Verwende **denselben genauen Ausschnitt** für Palette und GIF:

```bash
# Beispiel: START_SECONDS und DURATION_SECONDS nach echter Sichtung setzen.
ffmpeg -hide_banner -y -ss START_SECONDS -t DURATION_SECONDS \
  -i ERROR_wtf_ONE_MEGABYTE_full.mp4 \
  -vf 'fps=15,scale=960:-1:flags=lanczos,palettegen=stats_mode=diff' \
  preview_palette.png

ffmpeg -hide_banner -y -ss START_SECONDS -t DURATION_SECONDS \
  -i ERROR_wtf_ONE_MEGABYTE_full.mp4 -i preview_palette.png \
  -filter_complex '[0:v]fps=15,scale=960:-1:flags=lanczos[v];[v][1:v]paletteuse=dither=sierra2_4a:diff_mode=rectangle[out]' \
  -map '[out]' -loop 0 -an \
  ERROR_wtf_ONE_MEGABYTE_preview.gif
```

`START_SECONDS` und `DURATION_SECONDS` sind **Platzhalter**, keine Shell-Variablen. Sie sind erst durch reale numerische Werte zu ersetzen. Die Kommandos gegebenenfalls an die tatsächlich installierte FFmpeg-Version anpassen. Teste eine zusätzliche Palette/Dithering-Variante und wähle anhand **visuell geprüfter Frames** statt allein nach Dateigröße.

Verwende nicht aus Versehen die gesamte Quelle beim ersten Befehl und nur den Ausschnitt beim zweiten, weil die Palette dadurch für die Vorschau suboptimal werden kann.

---

# 7. QUALITÄTSNACHWEISE, KEINE BLINDEN TESTS

## 7.1 Pflichtprüfung des MP4

Führe `ffprobe` oder eine gleichwertige überprüfbare Medienanalyse aus. Verlange:

- Videostream vorhanden;
- Audiostream vorhanden;
- bekannte unterstützte Codecs;
- Auflösung und Bildrate korrekt;
- plausible vollständige Laufzeit;
- tatsächlich hörbares Audiosignal;
- keine stummen/defekten oder abgeschnittenen Audiopassagen außerhalb beabsichtigter Pausen;
- keine unerwarteten Sprünge im Timestamp-Verlauf;
- Ende vollständig;
- abspielbar mit lokal vorhandenem Player und Decoder;
- Dateihash berechnet.

Prüfe den MP4-Abschluss und das letzte Bild. Ein vorhandener AAC-Stream genügt **nicht**, wenn keine hörbare Musik vorhanden ist.

## 7.2 Pflichtprüfung des GIF

Prüfe:

- animiertes GIF statt statischer Einzelbilddatei;
- mehrere unterscheidbare Frames;
- richtige Dauer und Loop-Einstellung;
- angemessenes Seitenverhältnis;
- keine Audio-Streams;
- sichtbare ERROR.wtf-Identität;
- keine ungewollte Palette- oder Ditheringzerstörung;
- keine Text-/Logo-Unlesbarkeit;
- korrekter ausgewählter Original-Zeitabschnitt.

## 7.3 Manuelle beziehungsweise visuelle Qualitätskontrolle

Die automatische Prüfung ersetzt keine Sichtung. Kontrolliere dekodierte Bildabschnitte und **höre den exportierten MP4-Sound**. Vergleiche mindestens fünf markante Bildereignisse mit dem Original. Prüfe den GIF-Loop mehrfach. Dokumentiere, wer bzw. welches Werkzeug welche Aspekte tatsächlich überprüft hat und was nicht wahrnehmungsbasiert geprüft werden konnte.

## 7.4 Technische Akzeptanzkriterien

| Punkt | PASS-Bedingung |
|---|---|
| Quelle | Freigegebene 1-MiB-Demo anhand SHA-256 und Git-Commit identifiziert |
| MP4-Dauer | Gesamte Original-Timeline ohne verlorene Szenen, nachvollziehbar gemessen |
| MP4-Video | Dekodierbar, Bildinhalt und zeitliche Reihenfolge korrekt |
| MP4-Audio | Echter Originalton, hörbar, Stereo falls Quelle Stereo, synchron |
| MP4-Qualität | Keine auffälligen neuen Kompressionsartefakte, nur begründete notwendige Umwandlungen |
| GIF | Animiert, stumm, erkennbar, sinnvoll geloopt, tatsächliche Originalbilder |
| Herkunft | Provenienz und Encoding-Parameter dokumentiert |
| Reproduzierbarkeit | Render-/Encode-Skripte und echte Eingabeparameter dokumentiert |
| Rechte | Keine fremden unautorisierten Medien oder geheimen Daten |
| Kosten | Keine zusätzlichen kostenpflichtigen Dienste eingesetzt |
| GitHub | Release-Assets tatsächlich öffentlich abrufbar und Hashvergleich bestanden |

Wenn ein Test nicht ausgeführt wurde, ist das `NOT_TESTED`. Bei Fehler `FAIL`. Keine automatische Umdeutung in `PASS`.

---

# 8. VERÖFFENTLICHUNG BEI GITHUB UNTER ERROR.wtf

Ziel: `https://github.com/error-wtf/error-wtf-demoscene`.

1. Arbeite im bestehenden Projekt; erhalte Quellcode, alte Builds, alte Tags und bestehende Releases.
2. Lege die Medienexport-Werkzeuge in `tools/media/` oder einer gleichwertigen klaren Projektstruktur ab.
3. Lege maschinenlesbare Messberichte in `reports/1m/media/` ab.
4. Speichere die fertigen Mediendateien lokal in `releases/1m/media/` (oder bereits etabliertem Release-Pfad).
5. Berechne SHA-256 für beide Medien.
6. Dokumentiere Exportcodec, Auflösung, FPS, Laufzeit, Audiocodec, Preview-In-/Out-Punkte, Quellbinary und Source-Commit.
7. Prüfe Lizenz, Rechte, Git-Diff und Geheimnisse.
8. Veröffentliche die fertige MP4 und das GIF als **Assets eines geeigneten neuen oder bestehenden 1-MiB-Releases** unter `error-wtf` – ohne alte Release-Dateien unbeabsichtigt zu ersetzen. Nutze vorzugsweise einen medienbezogenen Ergänzungsrelease oder ergänze das passende bestehende Release nur nach Prüfung auf Namenskollisionen und bestehende Veröffentlichungsregeln.
9. In der README soll das GIF als **kleine visuelle Vorschau** eingebunden werden können; binde nach Möglichkeit den **tatsächlich veröffentlichten Link** ein, nicht einen erfundenen Pfad. Für große GIFs nur direkten Download-Link beziehungsweise ein separates schlankes README-GIF.
10. Verlinke die vollständige **MP4 mit Originalton** als offizielle Videoaufzeichnung der Demo. Bezeichne sie nicht als Echtzeit-Benchmark-Resultat, falls der Weg ein nachweislich identischer Offlineexport war; erkläre den Capture- oder Exportweg korrekt.
11. Lade nach Upload die öffentlichen GitHub-Assets nach Möglichkeit nochmals herunter oder überprüfe auf vergleichbar belastbare Weise ihre Inhalte; vergleiche SHA-256 mit den lokal abgenommenen Dateien. Erst dann `PUBLISHED_VERIFIED`.
12. Falls GitHub-Berechtigung, Netzwerk oder freies Kontingent nicht ausreichen: lokale fertige Medien sichern, `PUBLISH_BLOCKED` dokumentieren; nicht unter einem anderen Konto veröffentlichen und keine Kosten verursachen.

Empfohlene Dateien:

```text
releases/1m/media/ERROR_wtf_ONE_MEGABYTE_preview.gif
releases/1m/media/ERROR_wtf_ONE_MEGABYTE_full.mp4
releases/1m/media/SHA256SUMS
reports/1m/media/source_provenance.json
reports/1m/media/mp4_probe.json
reports/1m/media/gif_probe.json
reports/1m/media/av_sync_report.md
reports/1m/media/visual_quality_review.md
reports/1m/media/export_manifest.json
tools/media/export_full_video.sh
tools/media/export_preview_gif.sh
```

Zusätzliche Dateien sind nur nötig, wenn sie eine konkrete Funktion erfüllen. Lege nicht viele leere Berichtsdateien an, um Vollständigkeit vorzutäuschen.

---

# 9. KÜNSTLERISCHE REGIE: NICHT EINMAL MEHR ALLES VERSCHLECHTERN

Die Medien müssen den erreichten ERROR.wtf-Stil **bewahren**:

- dunkle elegante Dramaturgie statt aufgehelltem Standard-Encoding;
- korrektes Rot und feine geometrische Linien;
- musikalische Spannungsbögen und Subbass erhalten;
- keine Bildbeschneidung der prozedural entstehenden Wortmarke;
- keine verkürzten Pausen, die für die Wirkung wesentlich sind;
- keine künstlichen Übergänge im MP4;
- keine eingeblendeten URLs oder Logos zusätzlich zur Originalproduktion;
- keine allgemeine Videovorlage oder fremdes Stock-Footage.

Das GIF braucht einen anderen Auswahlmaßstab als das MP4: **Es muss ohne Ton verständlich und visuell sofort stark sein.** Das bedeutet nicht, die Demo durch ein beliebig schnelles „Best of“-Montage-GIF zu ersetzen. Verwende einen echten zusammenhängenden Ausschnitt, vorzugsweise einen eigenständig lesbaren visuellen Spannungsbogen. Wenn es keinen passenden Abschnitt gibt, wähle die stärkste tatsächlich vorhandene Passage und erkläre die Auswahl sachlich.

**Die Qualität des Videos darf nicht unter einer GIF-Optimierung leiden.** Beide Formate unabhängig für ihren Zweck optimieren.

---

# 10. OPERATIVER ABLAUF — BIS ZUR WIRKLICHEN AUSLIEFERUNG

**Phase 0 – Lock & Preconditions:** Kostenfreiheit, Rechte, GPU/Audio/FFmpeg, freier Speicher, gültiger Source-Build und Git-Status prüfen.

**Phase 1 – True Source:** 1-MiB-Demo identifizieren, Hash fixieren, Laufzeit, Timeline und Audioquelle messen.

**Phase 2 – Capture Plan:** Beste Methode auswählen: echter Live-Capture oder nachweislich äquivalenter Offlineexport. Testaufnahme durchführen und gegen Original vergleichen.

**Phase 3 – Complete Master Capture:** Die ganze Demo mit echter Grafik und Originalton erfassen. Bild- und Audiotimestamps kontrollieren.

**Phase 4 – MP4:** Qualitätsorientierte H.264/AAC-MP4 erzeugen. Das gesamte Werk muss erhalten bleiben. Kein Short-Cut.

**Phase 5 – GIF:** Das gesamte Werk sichten, den besten zusammenhängenden 10–18-Sekunden-Ausschnitt auswählen, Palette erstellen, hochwertiges stummes Loop-GIF rendern. Bei Bedarf eine schlanke README-Variante ergänzen.

**Phase 6 – Review:** MP4 tatsächlich abspielen und anhören; GIF abspielen und mehrfach loopen; Audio-/Video-Sync, visuelle Fidelity, technische Metadaten, Dateigrößen und Hashes prüfen. Fehler korrigieren, nicht verstecken.

**Phase 7 – Git/Release:** Quellen, Encode-Skripte, Provenienz und Berichte committen; beide finalen Mediendateien unter `github.com/error-wtf/error-wtf-demoscene` veröffentlichen; GitHub-Asset-Integrität prüfen.

**Phase 8 – Abschluss:** Zwei echte öffentliche Download-URLs, lokale Pfade, Hashes, Maße, Laufzeiten, Encoder, Audioformat, Preview-Zeitfenster, Git-Commit, getestete Medienqualität, Einschränkungen und Kostenstatus nennen. Wenn Veröffentlichung blockiert ist, nur lokale Ergebnisse und präzisen Blocker melden.

Arbeite die Phasen selbstständig im Rahmen der bestehenden Freigaben durch. Bei fehlerhaften Zwischenständen behebe die konkrete Ursache. Keine neuen theoretischen Roadmaps, keine endlosen Agentenjobs und keine Erfolgsmeldung ohne echte Mediendateien.

---

# 11. ABSCHLUSSMELDUNG — VERBINDLICHES FORMAT

Der tatsächliche Endbericht muss präzise diese Angaben enthalten:

**Quellwerk**
- Titel und Version der 1-MiB-Demo;
- Git-Commit;
- SHA-256 und exakte Größe der Original-Binärdatei;
- gemessene tatsächliche Produktionslaufzeit.

**GIF**
- vollständiger Dateiname und lokaler Pfad;
- öffentlicher GitHub-Download-Link, falls veröffentlicht;
- Dauer, Frame-Anzahl, FPS, Dimensionen, Dateigröße;
- tatsächlicher Anfangs-/Endzeitpunkt innerhalb der Originaldemo;
- Palette/Dithering, Loop-Einstellung;
- Bestätigung: **stumm / kein Audio**;
- SHA-256.

**MP4**
- vollständiger Dateiname und lokaler Pfad;
- öffentlicher GitHub-Download-Link, falls veröffentlicht;
- Laufzeit, Auflösung, Framerate, Codec, Farbraum, Bitrate beziehungsweise Qualitätsparameter;
- Audioformat, Samplingrate, Kanalzahl und hörbares Originalsignal;
- konkret gemessene Synchronisation, soweit zuverlässig messbar;
- SHA-256.

**Qualität & Veröffentlichung**
- tatsächliche Capture-/Render-Methode;
- durchgeführte Prüfungen mit Ergebnissen;
- wichtige Abweichungen und Grenzen;
- GitHub-Release-Tag;
- öffentliche Asset-Hashes verglichen: ja/nein;
- tatsächlich entstandene zusätzliche Kosten: **0,00 € oder nicht verifiziert** (niemals erfundenes Null-Ergebnis).

Ein `PASS` ist nur erlaubt, wenn die jeweilige Prüfung wirklich ausgeführt wurde. Die Aussage **„fertig und veröffentlicht“** erst nach Überprüfung der veröffentlichten Dateien verwenden.

---

# 12. DEIN ERSTER KONKRETER SCHRITT — JETZT AUSFÜHREN

Hermes: Geh in das vorhandene ERROR.wtf-Projekt. Finde den **tatsächlich freigegebenen 1-MiB-Build** und seine Version. Prüfe die 0-€-Kostenregel, die Aufnahmemöglichkeiten und die GitHub-Berechtigung. Erfasse die komplette Originalproduktion. Erstelle das vollständige MP4 **mit echtem Soundtrack** und ein visuell sorgfältig ausgewähltes **stummes Loop-GIF**. Prüfe beides. Veröffentliche die beiden überprüften Medien in einem GitHub-Release unter `github.com/error-wtf/error-wtf-demoscene` und aktualisiere die Projektdokumentation.

**Keine neue musikalische Komposition, keine neue Demo, keine angebliche Verbesserung durch verfälschten Export. Das Originalwerk ist die Quelle. Die Medien sind seine hochwertige, überprüfte Präsentation.**

## ERROR.wtf — BEYOND THE ERROR
### ONE MEGABYTE. ONE COMPLETE VIDEO. ONE SILENT SIGNATURE.
### REAL FRAMES. REAL SOUND. NO SHORTCUTS. NO EXTRA COSTS.
