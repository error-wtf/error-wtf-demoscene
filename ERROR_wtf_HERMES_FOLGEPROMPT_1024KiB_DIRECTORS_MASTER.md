# ERROR.wtf — THE ONE MEGABYTE MASTERPIECE
## HERMES / BINGSI — VERBINDLICHER FOLGEAUFTRAG ZUM DIRECTOR'S CUT
### Projekt: ERROR.wtf — BEYOND THE ERROR // 1024 KiB // 1 MiB // 1.048.576 Byte
### Arbeitsfassung 1.0 · Auftraggeber und Künstler: ERROR.wtf (Lino)

> **DIES IST EIN AUSFÜHRUNGSAUFTRAG, KEIN AUFTRAG, NOCH EINEN PROMPT ZU VERFASSEN.**
>
> Hermes: Lies den gesamten Text, den bisherigen ERROR.wtf-Masterauftrag und die tatsächlich vorhandenen Projektdateien, bevor du eine kreative oder technische Endentscheidung triffst. Übernimm die beste nachweislich funktionierende ERROR.wtf-Produktion als Ausgangspunkt, extrahiere die besten Aspekte ALLER vorhandenen Produktionen, erschaffe daraus aber ein neues, unverwechselbares **1-MiB-Demoscene-Werk**. **Kein aufgeblähtes Duplikat, kein Zusammenschnitt, kein kosmetisches Upscaling.**

**Künstlername:** `ERROR.wtf` — exakte Schreibweise.  
**Titel der neuen Produktion:** `ERROR.wtf — BEYOND THE ERROR: ONE MEGABYTE`  
**Kurzbezeichnung:** `ERROR.wtf // 1MiB`  
**Geplante native Linux-Datei:** `errorwtf-1m`  
**Exakte Größe:** **1.048.576 Byte = 1.024 KiB = 1 MiB**. *Achtung: 1.024 kB dezimal wären 1.024.000 Byte, das ist hier ausdrücklich NICHT gemeint. Ebenso wenig sind 1.024 Kilobit gemeint.*  
**Entwicklungsort:** das bereits vorhandene, tatsächlich verifizierte ERROR.wtf-Projekt auf der Daten-SSD.  
**Öffentliches GitHub-Ziel:** `https://github.com/error-wtf/error-wtf-demoscene`  
**Upstream-Referenz:** `https://github.com/TheMorpheus407/morphdemo-benchmark` — technische Quelle, keine kreative Schablone.  
**Kostenregel:** **0,00 € zusätzliche KI-/API-/Cloud-/Build-/Renderkosten**.  
**Release:** eigenes Artefakt, eigene Versionsgeschichte, eigener Qualitäts- und Testbericht; vorhandene Werke unverändert erhalten.

---

# 0. NICHT VERHANDELBARE ABSICHT

Mit dem ersten Auftrag hast du die vier ERROR.wtf-Produktionen SEED (4 KiB), FRACTURE (16 KiB), EMERGENCE (64 KiB) und BEYOND THE ERROR (Ultimate) entwickeln sollen. Die hier beauftragte fünfte Produktion ist die **künstlerische Destillation und technische Weiterentwicklung des stärksten tatsächlich vorhandenen Ergebnisses** – nicht die bloße Verlängerung des Hauptauftrags, eine neue Spielerei oder eine Demo, die nur wegen ihrer größeren Datei beeindruckender erscheinen soll.

Die 1-MiB-Fassung muss nach drei Kriterien erkennbar besser sein: **(1) stärkere eigenständige visuelle und musikalische Identität; (2) überzeugendere Dramaturgie mit echten erinnerungswürdigen Szenen; (3) bessere handwerkliche Ausführung und nachgewiesene technische Zuverlässigkeit.** Mehr Texturen, Objekte, Samples oder Effekte allein beweisen nichts.

Dein primärer Gedanke darf NICHT lauten: „Wie fülle ich eine Megabyte-Datei?“ Er lautet: **„Welches ERROR.wtf-Kunstwerk würde ich ohne die Dateigrenze gestalten, und wie bringe ich es mit außergewöhnlichem Sizecoding-Handwerk in genau 1 MiB unter?“** Die Dateigröße ist eine Gestaltungsspannung, keine Ausrede für Qualitätsverlust oder Blendwerk.

Eine überzeugende Kunstproduktion und ein reproduzierbares natives Programm sind zwei unabhängige Abnahmeziele. Eine bestandene technische Prüfung beweist nicht künstlerische Perfektion. Eine schöne Vorschau beweist nicht, dass die freigegebene Binärdatei selbst funktioniert.

# 1. AUSFÜHRUNGSSTART: BESTANDSAUFNAHME STATT FANTASIE

## 1.1 Was du vorher lesen musst

Lies den vollständigen bisherigen `ERROR_wtf_HERMES_MASTERPROMPT_DIRECTORS_CUT.md` beziehungsweise die unter dem Projekt gespeicherte unveränderte Spezifikation, die aktuelle `README.md`, `docs/ART_DIRECTION.md`, `docs/AUDIO_DESIGN.md`, `docs/ARCHITECTURE.md`, alle tatsächlich vorhandenen Verifikationsberichte, Git-Commits, Builds, Releasemanifeste und die maßgeblichen Quelldateien der vier Produktionen. Dateinamen können im echten Repository abweichen: prüfe reale Pfade statt sie zu erfinden.

Die vorhandenen vier Programme sind Ausgangsmaterial für deine **eigene projektinterne Arbeit**. Behaupte keine zuvor abgeschlossene Arbeit allein aufgrund eines README-Satzes. Überprüfe den aktuellen Git-Stand und den letzten gültigen Release selbst.

Die ursprünglichen Kosten-, Provider-, Lizenz-, Privatsphäre-, Sicherheits- und Systemschutzregeln des Masterauftrags gelten **unverändert**. Dieser Folgeauftrag erweitert den künstlerischen und technischen Umfang, lockert keine Schutzregel.

## 1.2 Vorkontrolle / Baseline-Gate

Inventarisiere die fertigen Artefakte, ihre Hashes, exakten Größen, Quellen, Build-Anweisungen, tatsächlichen Laufzeitberichte, Audiomitschnitte, Screenshots, Previews, bekannten Fehler und die Testmethoden. Prüfe Git-Status und offene Änderungen. Kennzeichne jeden Eintrag mit `VERIFIED`, `PARTIAL`, `FAILED`, `NOT_TESTED`, `MISSING` oder `BLOCKED`.

**Falls der ursprüngliche Auftrag noch nicht fertig ist:** Tu NICHT so, als gäbe es eine fertige Sammlung. Nutze die nachweislich vorhandenen Produktionen, dokumentiere die Lücken und vervollständige zunächst die als Ausgangsbasis benötigten Funktions- und Qualitätsprüfungen. Falls ein einziges ausreichend funktionierendes Werk existiert, darfst du damit als dokumentierter `BASELINE_PARTIAL`-Kandidat beginnen; ein globaler Vergleich aller vier ist dann ausdrücklich noch nicht möglich. Kennzeichne die Unsicherheit. Es ist nicht zulässig, ein „bestes Ergebnis“ zu erfinden.

Erzeuge:

- `docs/1m/BASELINE_INVENTORY.md`;
- `reports/1m/baseline_inventory.json`;
- `docs/1m/PROVENANCE.md`.

Der erste Git-Commit der neuen Entwicklung soll sich eindeutig auf einen unveränderten Baseline-Commit zurückführen lassen. Alle bisherigen Werke und Releases bleiben funktionsfähig und erhalten.

## 1.3 Verbindlicher Ausgangspunkt

Die 1-MiB-Version ist eine **neue fünfte Produktion**. Die Dateien `errorwtf-4k`, `errorwtf-16k`, `errorwtf-64k` und `errorwtf-ultimate` dürfen weder still ersetzt noch mit identischen Namen überschrieben werden. Verwende einen getrennten Source-/Build-/Test-Pfad und einen neuen Feature-Branch; sichere vorher uncommittete Änderungen. Veröffentlichte alte Release-Tags und Assets bleiben unverändert.

# 2. DIE BESTE VORLAGE ERMITTELN — NICHT ERRATEN

Wähle die Ausgangsbasis nicht nach Dateigröße, Modellname, Codeumfang, Eigenlob oder gemeldeten Prozentwerten. Vergleiche alle **tatsächlich lauffähigen** vier Werke anhand desselben möglichst reproduzierbaren Prüfrahmens.

## 2.1 Vergleich auf realer Hardware

Nutze dieselbe primäre Auflösung, dieselbe Audioausgabe, möglichst dieselbe Aufnahme- und Messmethode sowie denselben lokalen Rechner. Führe die Programme real aus. Erfasse aus jedem Werk die vollständige Laufzeit, repräsentative Bewegtbildabschnitte, Frames aus jeder Phase und einen echten Audiomitschnitt. Prüfe Bild, Ton und tatsächliche Synchronisation; nicht nur deren Existenz.

Bewerte gesondert:

- **Kunst / Regie:** Einzigartigkeit, narrative Bogenform, Rhythmus, Überraschung, Ruhe, visuelle Hierarchie, präzise Übergänge und starkes Finale.
- **Musik:** Originalität des Motivs, Groove, Sounddesign, tiefer Bass, harmonische Entwicklung, Dynamik, Mix, musikalischer Höhepunkt und hörbarer Zusammenhang mit Bildereignissen.
- **ERROR.wtf-Identität:** erkennbare signifikante Rotsprache, seriöse digitale Dunkelheit, mathematische Ästhetik, intelligent eingesetzter Glitch, prozedural entwickelte exakt lesbare `ERROR.wtf`-Wortmarke.
- **Technik:** echte Frametimes, Audio-Unterläufe, Shaderstabilität, Plattformverhalten, CPU-/GPU-/VRAM-Nutzung, Ladezeit, Wiederholbarkeit.
- **Code/Produktion:** Qualität der Architektur, kontrollierbare Timeline, Wiederverwendbarkeit, Kompressionsfähigkeit, nachgewiesene Testbarkeit.
- **Mängel:** schwache Szenen, Füllpassagen, unsaubere Ausblendungen, zu grelle Lichtblitze, fehlender Kontrast, monotoner Sound, generische Titelgestaltung, unlogische Übergänge.

Unterschiedliche künstlerische Laufzeiten dürfen nicht schlicht durch eine rohe Gesamtzahl von Ereignissen bewertet werden. Nutze auch vergleichbare Zeitfenster und konzentriere dich auf Qualitätsdichte pro Minute.

## 2.2 Keine manipulierte Gesamtnote

Erstelle eine transparente Bewertungsmatrix mit konkreten Belegen. Numerische Bewertungen dürfen intern beim Vergleich helfen, aber **eine gewichtete Summe ist kein Wahrheitsorakel für künstlerische Qualität**. Beschreibe die eigentlichen Differenzen und verlinke jeweils auf Bild-, Ton- oder Messbelege. Falls nur deine eigene KI-Selbstbewertung vorliegt, kennzeichne das ausdrücklich als `SELF_REVIEW`; behaupte kein unabhängiges Juryurteil oder meine künstlerische Zustimmung.

Eine gute Entscheidung kann lauten: 64 KiB ist dramaturgisch am stärksten, Ultimate hat den besten Musikmix, 16 KiB besitzt die eleganteste Geometrie, 4 KiB den originellsten Moment. Es muss NICHT eine Quelle in allen Dimensionen siegen. Wähle **einen tragfähigen Hauptbogen**, aber extrahiere die besten Einzelkomponenten anderer Werke, wenn sie sich musikalisch und ästhetisch kohärent integrieren lassen.

## 2.3 Art-Fingerprint und Gewinneranalyse

Erstelle `docs/1m/BEST_OF_THE_BEST.md` mit:

1. Welches Werk ist die Hauptbasis und warum?
2. Welche zwei bis fünf tatsächlich sehenswerten Momente werden bewahrt oder weiterentwickelt?
3. Welche musikalischen Motive sind erhaltenswert?
4. Welche Schwächen muss die 1-MiB-Version zwingend überwinden?
5. Welche zwei bis fünf neuen Ideen sind **nicht** bloß bereits gesehene Effekte?
6. Was wäre unter dem neuen Größenbudget technisch denkbar, aber künstlerisch überflüssig?
7. Welche neuen Szenen schaffen gegenüber dem Ausgangswerk einen echten Mehrwert?
8. Welche Elemente sind Originalentwicklung von ERROR.wtf, welche von Upstream übernommen und lizenzrechtlich nachzuweisen?

Behalte Baseline-Captures und Artefakt-Hashes für spätere A/B-Prüfungen. **Keine Baseline als ideal behaupten.**

# 3. DER KÜNSTLERISCHE KERN: ERROR.wtf IST KEINE BELIEBIGE NEONDEMO

Die neue Demo soll als eigenständige Kunst im Gedächtnis bleiben. Die maßgebliche ERROR.wtf-Grundidee lautet:

> **Der Fehler ist nicht das Ende der Ordnung. Er ist der Punkt, an dem die Ordnung ihre verborgene Struktur preisgibt.**

Der dramaturgische Bogen soll nicht „Schwarz → viele Partikel → Schriftzug“ sein. Er soll einen sinnlich nachvollziehbaren und musikalisch motivierten **Wandel der Regeln** zeigen. Eine am Anfang eingeführte Bildlogik wird umgebaut, herausgefordert, gebrochen, neu interpretiert und am Ende in einer reiferen Form zurückgeführt. Das Publikum muss die Wiederkehr eines Motivs fühlen, ohne die zugrunde liegenden Gleichungen zu kennen.

## 3.1 Stilbibel / visuelle Identität

- **Primäre Bühne:** Schwarz, dunkles Graphit, echte Schatten, differenzierte Dunkelwerte. Nicht alles permanent mit Glow füllen.
- **Signalfarbe:** tiefes, sattes, präzises Rot; kontrollierte leuchtende rote Akzente, kein pauschal roter Vollbildfilter.
- **Kontrastfarben:** kaltes Cyan/Weiß für technische Störungen und Lesbarkeit, wenige bewusste Gold- oder Bernsteinmomente für Auflösung/Überraschung.
- **Geometrie:** prozedurale Spiralen, segmentierte Felder, Netzwerke, Gitter, komplexe Phasenflächen, SDF-Objekte, Fraktalstrukturen, emergente Raumarchitektur, fein aufgelöste Partikelorganisation. Form folgt einer erkennbaren Logik.
- **Störung:** hochqualitativer, gezielt rhythmisierter Glitch als bewusster Übergang. Keine zufällige Dauer-Zerstörung, kein schlecht kontrolliertes Bildschirmflackern.
- **Code-Regen:** roter digitaler Regen darf als selbstentwickeltes Motiv wiederkehren. Er darf nicht wie eine Kopie von Filmszenen, bestehender Typografie oder fremden Shader-Demos wirken.
- **Kamera:** visuell geführter Raum, Tiefenschichten, ruhige Einstellungsgrößen im Kontrast zu kontrollierten Beschleunigungen; keine willkürliche Dauerrotation.
- **Typografie:** ERROR.wtf als prozedural konstruierte, lesbare und charakterstarke finale Wortmarke. Die Marke entsteht durch Transformation des Szenenmaterials, nicht durch ein aufgeklebtes Standard-Overlay.

## 3.2 Künstlerische Anti-Ziele

Nicht zulässig als Ersatz für originelle Gestaltung:

- eine generische „AI cyberpunk“ Bilderfolge;
- Matrix-Regen plus Techno als ganze Idee;
- kopierte Effektszenen fremder Demos;
- eine Collage aus beeindruckenden, aber unbegründet zusammengewürfelten Shadern;
- zufällige Partikel und chaotische Kamera, nur damit viel passiert;
- permanente maximale Lautheit oder Helligkeit;
- mathematisch falsch benannte Tricks, die angebliche wissenschaftliche Leistungen suggerieren;
- generische KI-Logos, stockartige Animationen oder fremde Musik;
- künstlich lange Laufzeit ohne dramaturgische Entwicklung.

## 3.3 Signature Moments statt Effektekatalog

Entwickle mindestens **drei eigenständige, miteinander verbundene Signature Moments**, die in realen Frame-/Videoaufnahmen visuell unterscheidbar sind. Beispiele als kreative Prüfideen, nicht als Pflichtkopien:

- Ein einzelnes rotes fehlerhaftes Signal verwandelt ein chaotisches Partikelfeld in ein komplexes, rhythmisch atmendes geometrisches System.
- Eine zunächst perfekt geordnete Raumarchitektur wird durch einen musikalischen Phasenwechsel nicht zerstört, sondern topologisch neu organisiert.
- Die Musik reißt abrupt die Energie aus dem Bild; ein beinahe stilles, minimal beleuchtetes Restmuster trägt die Spannung, bevor es sich spektakulär rekonstruiert.
- Die ERROR.wtf-Wortmarke wird durch die zuvor eingeführten Segmente, Lichtlinien oder Schwingungen buchstäblich zusammengesetzt und bleibt am Ende einige Sekunden ruhig und klar lesbar.

Ein Signature Moment braucht **Setup → Ereignis → Konsequenz**. Ein isolierter Effekt ohne Anschluss an die Erzählung zählt nicht.

# 4. KREATIVE ENTSCHEIDUNGSMETHODE — AUSWAHL STATT ERSTBESTER IDEE

## 4.1 Drei konkurrierende Konzepte

Entwickle drei *wirklich unterscheidbare* Regiekonzepte mit jeweils eigener visueller und musikalischer Leitidee, zum Beispiel:

- **A / SIGNAL GHOST:** minimalistischer Anfang, intensive elektronische Spurensuche, monumentale Geometrie aus Störsignalen.
- **B / FRACTURED ORDER:** konstruierte perfekte Welt, Regelbruch, räumlicher Zerfall, kühne geometrische Reorganisation.
- **C / RED RECURSION:** rekursive rote Felder, Netzwerk-Labyrinth, langsame hypnotische Spannungsentwicklung, massiver musikalischer Durchbruch.

Diese Namen sind Arbeitstitel. Eine vierte deutlich bessere Idee ist willkommen. Entscheidend ist die Variation der **Dramaturgie und musikalischen Logik**, nicht nur der Farbe.

## 4.2 Tatsächliche Kurzprototypen

Erstelle für jede ernsthafte Variante einen lauffähigen kurzen **visuellen und musikalischen Proof of Concept** (beispielsweise 12–25 Sekunden). Verwende einheitliche Rendering- und Audio-Bedingungen. Mache reale Captures; speichere den Code und einen eindeutigen Commit oder eine Versionsreferenz. Nur wirkliche Prototypen dürfen als „verglichen“ gelten.

Bewerte die Konzepte auf Originalität, Wiedererkennbarkeit, musikalische Tragfähigkeit, Entwicklungsmöglichkeiten und technische Robustheit. Wähle das beste Konzept oder eine **bewusst begründete** Synthese aus maximal zwei kompatiblen Konzepten. Vermeide ein Komitee-Ergebnis, in dem jede Idee kurz auftaucht und keine reifen darf.

## 4.3 Geschmacksfragen ehrlich behandeln

Du kannst maschinell prüfen, ob Bild und Ton existieren, ob Szenen sich verändern und ob Frametimes stabil sind. Du kannst künstlerische Qualität **nicht objektiv beweisen**. Kennzeichne jede KI-Art-Review. Trenne Messgrößen von Interpretationen. Wenn ich später Feedback gebe, behandle es als maßgebliche kreative Rückmeldung, nicht als Störung, die durch automatische Scores abgewiesen wird.

# 5. DRAMATURGIE: EIN ECHTES WERK MIT ENTWICKLUNG

## 5.1 Primärer Zielrahmen

Für diese neue 1-MiB-Originalproduktion gilt **nicht automatisch** das 50–70-Sekunden-Limit des alten MorphDemo-Benchmarks: Sie ist eine eigene ERROR.wtf-Wettbewerbs-/Kunstkategorie. Kreatives Ziel: **ca. 100–140 Sekunden**, sofern die Komposition diese Länge verdient. Kürzere 75–100 Sekunden sind besser als 140 Sekunden gefüllte Wiederholung. Länger als 140 Sekunden nur mit klar begründetem künstlerischen Mehrwert. Definiere **vor dem finalen Musikarrangement** eine verbindliche Ziellänge und dokumentiere sie.

Für Benchmark-Vergleichbarkeit kann zusätzlich ein etwa 64-sekündiger Edit entstehen, aber **nur als optionales separates Artefakt**, niemals durch heimliche Kürzung der Hauptproduktion. Die eine exakt 1-MiB-große Hauptdatei bleibt das primäre Ziel.

## 5.2 Vorschlag für die Szenenstruktur

Diese Tabelle ist eine Regieskizze für etwa 120 Sekunden, keine Pflicht zu bestimmten Effekten. Passe Zeiten vor der Ausführung musikalisch sinnvoll an.

| Zeit | Szene | Visuelles Ereignis | Musikalische Funktion |
|---|---|---|---|
| 00–12 s | **COLD BOOT** | Dunkelheit, ein instabiles rotes Signal, räumliche Andeutungen, negative Fläche | winzige digitale Impulse, tiefer Resonanzton, erwartungsvolle Pausen |
| 12–28 s | **FIRST ORDER** | Punkte, Linien und Frequenzfiguren finden erstmals Regeln | erste tragende Percussion und ein erkennbares Motiv |
| 28–45 s | **SIGNAL ARCHITECTURE** | räumliche Segment-Netzwerke werden zu kohärenter Architektur | Bassline, Harmonie und präziser pulsierender Groove |
| 45–64 s | **THE FALSE PERFECTION** | große, beinahe majestätische Ordnung, klare Perspektive, scheinbarer Höhepunkt | musikalische Spannung, stärkere Dichte und kontrolliertes Wachstum |
| 64–78 s | **SYSTEM FAULT** | die bisherige Regel bricht sichtbar, Tiefe/Farbsprache ändern sich | Break, Rhythmus-Destruktion, Filterbewegungen, kurze Leere |
| 78–100 s | **REWRITE REALITY** | Raum wird nicht repariert, sondern nach neuen Regeln rekonstruiert | neuer Rhythmus, neue Harmonik, Durchbruch statt identischem Loop |
| 100–112 s | **THE SIGNATURE** | aus den geometrischen Grundbausteinen entsteht `ERROR.wtf` | musikalischer Hauptmoment, klares harmonisches Ziel |
| 112–120 s | **AFTERIMAGE** | ruhiges starkes Schlussbild, Nachhall, kontrollierte Ausblendung | Coda, Abklingen ohne abrupten Abbruch |

Vermeide starre Bildschirm-Einblendungen wie „SCENE 1“ oder „FAULT DETECTED“, sofern sie keinen echten dramaturgischen Nutzen haben. Der Wechsel der Szenen muss aus Bild- und Klanglogik selbst verständlich sein.

## 5.3 Ruhige Stellen sind Pflicht, Füllmaterial ist verboten

Füge bewusst Momente geringer visueller und musikalischer Dichte ein, damit die großen Transformationen Wirkung entfalten. Aber zwinge keine Leerphase allein wegen einer formalen Regel. Entferne schwache Szenen. Das Stück muss auch beim zweiten und dritten Ansehen noch ein kohärentes System offenbaren.

# 6. ORIGINALER SOUNDTRACK — MUSIK IST DIE HÄLFTE DES WERKS

Die Musik muss die Qualität eines eigenständigen elektronischen Stücks anstreben, nicht das Niveau einer Standard-Demo-Soundspur. Sie darf technisch vollständig synthetisch sein, soll aber arrangiert, musikalisch motiviert, abwechslungsreich und präzise gemischt wirken.

## 6.1 ERROR.wtf-Audiohandschrift

Bevorzugte Mischung: **dunkler Hip-Hop-Groove + intelligenter Breakbeat + IDM/Glitch-Mikrorhythmik + Industrial-Spannung + gezielte Dubstep-Bassgestaltung + cinematische Harmonik**. Nicht alle Stile ständig gleichzeitig, sondern als komponierte Entwicklung. Eigenständiges, erkennbares Leitmotiv und ein kraftvoller, sauberer Bassbereich sind wichtiger als möglichst viele Synthesizer.

## 6.2 Kompositorische Anforderungen

Entwickle:

- ein kleines charakteristisches Leitmotiv mit hörbarer Wiederkehr und mindestens einer bewussten Transformation;
- kontrollierte Tonalität oder nachvollziehbare harmonische Spannungsregeln;
- mindestens zwei hörbar verschiedene Groove-Zustände;
- bewusst gestaltete Percussion mit Kick, Snare/Clap, Hats und optional synthetischen Texturen;
- Bassdesign mit Platz für Kick und tiefe Frequenzen;
- ein tragendes harmonisches oder atmosphärisches Element;
- musikalische Übergänge statt bloßer Abrisse;
- einen echten Break/Negativraum, dessen Rückkehr dramaturgisch verdient ist;
- ein Finale, das die zuvor eingeführten Motive tatsächlich auflöst oder überraschend neu verbindet.

Rhythmische Komplexität ist Mittel, kein Selbstzweck. Keine künstlich zufällige Notenfolge. Auch eine komplizierte FFT ersetzt keine kompositorische Idee.

## 6.3 Klangarchitektur

Prüfe und implementiere, wo musikalisch sinnvoll:

- Phasenakkurate Oszillatoren; FM/additive/wavetable-/subtraktive Synthese;
- Bass- und Kick-Synthese, die in der tatsächlichen Wiedergabe nicht unkontrolliert übersteuert;
- geeignete Hüllkurven, Zustandsfilter, resonante Filter, Noise- und Transientengeneratoren;
- harmonische Sättigung und kontrolliertes Distortion-Design;
- Sidechain-/Duck- oder dynamische Freiraumkonzepte;
- Stereo-Imaging ohne problematische Monokompatibilität;
- Echo, Delay, Reverb-Approximationen, Chorus/Flanger nur dort, wo es gestalterisch dient;
- anti-aliased beziehungsweise bandbegrenzte Oszillatoren, soweit für die Zielfrequenzen erforderlich;
- begründete Sample-Rate und robusten Umgang mit numerischen Randfällen.

Die 1-MiB-Datei ist kein Anlass, einfach lange vorgerenderte WAV-Samples zu verpacken. Präferiere prozedurale Musik und kompakte parametrische Musikdaten. Wenn du kompakte, selbst erzeugte und lizenzfreie Daten einbettest, muss ihre Herkunft dokumentiert sein. **Keine geschützten Songs, Samples oder Lyrics übernehmen, keine Voice-Clones und keine kostenpflichtigen Musik-/Sprachdienste.**

## 6.4 Musik und Bild auf einer gemeinsamen Uhr

Nutze nach Möglichkeit die tatsächlich fortschreitende Audioplayback-Clock als Master oder eine entsprechend korrigierte zuverlässige monotone Timeline. Unterscheide korrekt zwischen generierten und tatsächlich wiedergegebenen Samples und berücksichtige Pufferlatenzen. Bei fehlendem Audiogerät kann ein dokumentierter visueller Fallback laufen, aber die normale Releaseprüfung muss **hörbares Audio auf echter Ausgabe** nachweisen.

Alle bedeutenden Ereignisse müssen in einer eindeutig versionierten Cue-Tabelle liegen, beispielsweise `audio/score_events.*` oder ein kompaktes zur Buildzeit eingebettetes Äquivalent. Bei Bedarf darf ein genauer musikalischer Zeitplan als `docs/1m/CUE_SHEET.md` existieren. Video und Musik müssen nicht nur durchschnittlich ungefähr gleichzeitig starten, sondern bei wichtigen Drops, Breaks und dem Logo-Finale gezielt synchronisiert sein.

## 6.5 Audio-Mastering und Test

Prüfe reales Audio oder einen nachweisbar identischen Audioausgabepfad auf: Silence-Gaps, Dropouts, Clipping, DC-Offset, NaN/Inf, kritische Peaks, unangemessene Lautheit, monotone Bassverläufe, Stereo-Phasenprobleme und Ausblendung. Teste nach Möglichkeit mit Kopfhörern und normaler Stereoausgabe (soweit entsprechende tatsächliche Wiedergabe möglich ist). Erstelle einen separaten originalen WAV-Export als Release-Zusatz, wenn er aus derselben Fassung generiert werden kann.

# 7. VISUELLE PRODUKTION — JEDER EFFEKT MUSS EINE ROLLE HABEN

## 7.1 Kreative Qualität vor Technikdemonstration

Das Ziel ist eine technisch außergewöhnliche Produktion, aber die Kamera filmt die Geschichte der ERROR.wtf-Welt, nicht bloß den Shader-Algorithmus. Gehe Szene für Szene durch: Welches Motiv wird eingeführt? Was verändert sich? Was spürt der Zuschauer? Was hört er im selben Augenblick? Warum beginnt der nächste Zustand genau jetzt?

## 7.2 Geeignete technische Effekte

Untersuche auf der tatsächlichen GPU-Hardware und verwende nur die geeigneten Verfahren:

- moderne GLSL-Fragment-/Compute-Shader;
- Raymarching und Signed Distance Fields;
- analytische Licht- und Materialmodelle;
- prozedurale Gitter, Linienfelder, Partikel, Fraktale, Phasenoberflächen und Transformationsfelder;
- volumetrisch wirkende Szenen oder optimierte echte Volumetrik;
- Screen-Space-/Temporal-Effekte, kontrollierter Bloom, Depth of Field bei Bedarf;
- GPU-instanzierte Geometrie;
- Audio-gesteuerte Parameterfelder;
- aufwendigeres, aber nicht selbstzweckhaftes Kamerarig;
- Shader-Komposition und unterschiedliche Qualitätsstufen.

Für 1 MiB sind größere Shader-/Musik-/Szenenparameterbudgets möglich. Weise jedem neuen Effekt eine Funktion in der Dramaturgie zu. Wenn er aus dem fertigen Video entfernt werden könnte, ohne dass die Geschichte schlechter wird, ist er wahrscheinlich verzichtbar.

## 7.3 Überblendungen und visuelle Kausalität

Vermeide abrupte „Szene aus, nächste Szene an“-Wechsel, soweit nicht musikalisch absichtlich. Bevorzuge Übergänge, in denen ein eingeführtes Objekt/Signal in die nächste Szene übergeht: Partikel werden zu Linien, Linien zu Architektur, Architektur zu komplexen Resonanzen, Resonanzen zur Wortmarke. Das ist keine Pflicht zur ständigen flüssigen Überblendung; ein harter Cut darf sein, wenn seine Funktion musikalisch und visuell klar ist.

## 7.4 Farbe, Belichtung und Sicherheit

Schwarz soll absichtlich schwarz sein, aber Detail muss dort erhalten bleiben, wo es wichtig ist. Rot muss Präzision haben, nicht alle Schattierungen zuschütten. Entwickle eine kleine Farbpalette und begründete Szenenvariationen. Vermeide unbeabsichtigte schnelle Hochkontrastblitze. Prüfe, soweit möglich, die Lichtwechsel auf unangenehme Stroboskopwirkung. Die Show soll eindrucksvoll sein, nicht auf visuelle Überlastung angewiesen.

# 8. 1-MiB-ENGINEERING — DAS GRÖSSENLIMIT IST ABSOLUT

## 8.1 Dateiformat und Laufzeit

Baue eine **eigenständige native Linux-x86-64-ELF-Datei**, standardmäßig `errorwtf-1m`. Die gesamte ausführbare Produktionslogik, benötigten Daten, Shaderquellen/kompilierten Inhalte und Musiksteuerungsdaten müssen in diesem Artefakt enthalten sein. Zur Laufzeit dürfen nur vorher erlaubte, auf dem Zielhost vorhandene Betriebssystem-/Grafik-/Audio-Laufzeitbibliotheken verwendet werden. Keine externen Musikdateien, Bilder, Videodateien, Produktions-Skripte, Font-Assets, Shader-Dateien oder Netzwerkaufrufe. Keine Browser-/WebView-/Game-Engine-Launcher, die die eigentliche Arbeit extern erledigen.

**Exakte Dateigröße:**

```
stat -c %s errorwtf-1m
# MUSS exakt 1048576 ausgeben.
```

Die `1m`-Bezeichnung ist ein Label, keine Erlaubnis für eine andere Bytezahl. Eine Datei mit 1.024.000 Byte, 1.048.575 Byte oder 1.048.577 Byte erfüllt den Auftrag NICHT. Die finalen Releases brauchen denselben Hash wie die freigegebene überprüfte Binärdatei.

## 8.2 Zwingende Funktionen der finalen Demo

- startbar aus einem beliebigen leeren Arbeitsverzeichnis, ohne Internet und ohne Sourcebaum;
- sichtbare prozedurale Animation mit erkennbarer Dramaturgie;
- hörbare **selbst generierte Originalmusik**;
- dauerhafte Audio-/Grafik-Synchronisation;
- explizit eindeutige, originelle `ERROR.wtf`-Wortmarke;
- automatische saubere Beendigung nach der endgültig festgelegten Kompositionsdauer;
- sauberer Escape-Abbruch und Freigabe der Ressourcen;
- korrektes Verhalten bei fehlenden Optionalfeatures; keine versteckten interaktiven Pflichtschritte;
- nachgewiesene Dateigröße und Binärformatprüfung;
- keine externen Produktionsassets, kein Netzwerkzugriff und keine delegierte Rendering-/Audioproduktion;
- reproduzierbare Buildanleitung und Quellcode;
- keine offensichtlichen Grafik- oder Audiodefekte in der akzeptierten Hardwarekonfiguration.

## 8.3 Architektur und Sizecoding-Werkzeuge

Wähle eine technisch passende Kombination aus C/C++, modernem OpenGL/Vulkan, GLSL, optimierten Buildflags, eigenem Minifier/Packer, optionalem Assembler und kompakten nativen Ladeverfahren. Prüfe nachweislich die Kompatibilität mit der tatsächlichen Linux-Kali-Grafik-/Audio-Umgebung. Größe ist kein Grund, Sicherheit zu missachten.

Selbstentpackung ist zulässig, wenn Loader, komprimierte Daten und ausführbares Ergebnis vollständig durch **diese eine ELF-Datei** bereitgestellt werden, ohne externes Shell-Programm, Packtool oder Dateien auf dem Datenträger. Wird ein anonymer `memfd`-Mechanismus verwendet, prüfe seine reale Funktion auf dem Zielsystem und berücksichtige dessen Sicherheits- und Kernelkonfiguration. Umgehe keine gesondert gesetzten Systemrestriktionen, um einen Trick zum Laufen zu bringen.

## 8.4 Bytebudget als Designentscheidung

Führe eine **Budgetplanung und fortlaufende reale Größenmessung**. Keine erfundenen Byte-Ersparnisse. Erfasse zum Beispiel:

- nativen Loader/Runtime-Overhead;
- Render- und Audio-Engine;
- Shader/Kernels;
- Musikgenerator und Score-Daten;
- Szene-/Kamera-/Choreografiedaten;
- Wortmarken- und Typografiecode;
- Kompressions-Metadaten;
- Reserven für späte Fehlerbehebungen.

Diese Kategorien sind nicht starr. Nutze Messwerte, um den knappen Platz dorthin zu geben, wo er Bild und Musik am meisten verbessert. Der 1-MiB-Rahmen ist eine **Obergrenze UND exakte finale Sollgröße**, nicht eine Pflicht, alle Bytes in unnötige Features zu investieren. Nach vollständiger Kompression darf die Datei legal auf exakt 1.048.576 Byte aufgefüllt werden, sofern das Binärformat intakt bleibt. Dokumentiere Payload- und Paddinggröße getrennt.

## 8.5 Build-Reproduzierbarkeit

Erzeuge eine sauber dokumentierte Buildkette, idealerweise mit einem einzigen zielgerichteten Befehl wie `make 1m` und `make verify-1m`. Lies tatsächliche Bibliothekspfade statt NixOS-Umgebungsvariablen des alten Referenzhosts blind zu übernehmen. Build-Skripte dürfen keine ungeprüften fremden Installer ausführen. Ein sauberer Rebuild muss bei festgehaltenen Compiler-/Toolversionen und Seeds reproduzierbar sein, soweit nachweisbar.

Verlange bei jedem Release-Build: genaue Bytezahl, ELF-Validierung, Hash, Linker-Bibliotheken, Laufzeittests, tatsächlich gespeicherte Captures und Cues. Änderungen nach dem Test erzwingen neue Tests; ein früher bestandenes Gate gilt für ein geändertes Artefakt nicht automatisch weiter.

# 9. LEISTUNGSZIELE AUF DER ECHTEN HARDWARE

## 9.1 Keine RTX-5090-Phantasie

Die bisher bekannte Maschine nutzt Kali/Linux, einen i9-11900K, 64 GB RAM und **3 × RTX 4060 Ti mit je 16 GB VRAM**. Verifiziere diese Daten, den installierten NVIDIA-Treiber, OpenGL/Vulkan, tatsächliche GPU-Zuordnung und funktionsfähiges Audio. Drei GPUs besitzen nicht einfach einen zusammenhängenden 48-GB-VRAM-Speicher. Plane zunächst für **eine** reale GPU mit ausreichend freiem VRAM. Verwende Multi-GPU ausschließlich, wenn ein unabhängiger Messvergleich reale Vorteile nachweist und fremde KI-Prozesse nicht beeinträchtigt.

## 9.2 Messbare Performance-Ziele

- Primärer Entwicklungsmodus: **1920 × 1080**, Ziel 60 FPS bei der hauptsächlichen Zielhardware, soweit erreichbar.
- Wunsch: stabile Frametime-Verteilung, nicht bloß eine hohe Durchschnitts-FPS.
- 1440p optional, 4K optional und jeweils als separater Qualitätsmodus, sofern sinnvoll realisierbar.
- Prüfe shader compile/link errors, Startlatenz, CPU-/GPU-Auslastung, tatsächlichen VRAM, Peak-RAM, Audio-Puffer und sauberen Abschluss.
- Verwende dynamische Qualität oder getrennte Profile nur, wenn die visuellen Übergänge nicht unbemerkt beschädigt werden.

Das FPS-Ziel ist ein **Qualitätsziel**, keine Erlaubnis, Messwerte zu erfinden. Wenn bestimmte Schlüsselszenen die Hardware überfordern, optimiere zuerst die betreffenden Shader/Algorithmen. Falls ein Trade-off unvermeidbar ist, dokumentiere die tatsächliche Entscheidung und den objektiv gemessenen Effekt.

# 10. AUTONOME ARBEIT UNTER ABSOLUTER KOSTENSPERRE

Alle Regeln aus dem Masterauftrag gelten: **0,00 € zusätzliche Kosten**. Keine Pay-as-you-go-KI, kostenpflichtige neue API-Endpunkte, ungeprüften „Free“-Fallbacks, externe Video- oder Musikgenerierungsdienste, GPU-Cloudserver, bezahlte GitHub-Runners oder bezahlte Agentensubsysteme. Verwende vorhandene **tatsächlich kostenneutral verifizierte** Abo-Zugänge und lokale Modelle entsprechend der aktuellen Hermes-Konfiguration. Ein Abo ist kein Freibrief für API-Abrechnung. Provider mit ungeprüften Kosten werden `COST_UNVERIFIED` und NICHT aufgerufen. Eine fehlerhafte oder erschöpfte Gratisquelle führt nicht zur automatischen kostenpflichtigen Umschaltung.

**Keine globalen Eingriffe** in NVIDIA-Treiber, Kernel, GRUB, PAM, SSH, Firewall, VPN/Tor, DNS, bestehende Forschungs-Repositories oder fremde Dienste. Keine eigenmächtigen Root-Operationen. Keine unkontrollierten autonomen Hintergrundjobs. Bewahre Ressourcen anderer laufender lokaler KI-Dienste. Verwende projektbezogene Limits, Timeouts und Verzeichnisse. Verlasse das Projektverzeichnis für Schreibaktionen nur bei klar autorisierten, erforderlichen GitHub-/Release-Aktionen und vorheriger Sicherheitsprüfung.

Vor Nutzung der Modellkette: `docs/PROVIDER_COST_AUDIT.md` nach tatsächlichem Zustand aktualisieren. Niemals geheime Token in öffentliche Logs oder Commits schreiben.

# 11. TECHNISCHE QUALITÄTSSICHERUNG — KEINE SHOW-TESTS

## 11.1 Einheitliche Evidenzkette

Für jedes überprüfte Release-Artefakt müssen Commit, exakt gebaute Binärdatei, SHA-256, Testskriptversion, Laufzeit, tatsächlicher Capture-Pfad und Prüfergebnis aufeinander verweisen. Kein „PASS“ allein durch eine selbst formulierte Zusammenfassung. Keine nachträglich auf das Bild/den Ton aufgesetzte Fehlerkorrektur, die in der finalen Binärdatei nicht vorhanden ist.

## 11.2 Unabhängige technische Testgruppen

**A. Static:** Exakt 1.048.576 Bytes, ausführbares ELF x86-64, berechtigte Systembibliotheken, keine externen Produktionsassets, korrekte Dateiberechtigungen, Hash.

**B. Build:** Vollständiger Clean-Rebuild, dokumentierte Toolchain, keine verschwiegenen Netz-Downloads, Unabhängigkeit vom Quellordner zur Laufzeit.

**C. Real-time video:** tatsächliches Starten, Shader-Kompilierung, vollständige Dauer, sichtbare Bewegung, klare Phasen und `ERROR.wtf` am Ende; Captures über die ganze Timeline.

**D. Real-time audio:** echte Audioausgabe, ausreichend Signal, kein Clipping/Dropout, keine ungewollte Stille, überprüfter musikalischer Ablauf und tatsächliches Ende.

**E. Sync:** zeitlich getrennte Messungen von Start, Break, Haupt-Drop, Szenentransformation und Logoereignis. Dokumentiere Residuen, Buffer-Latenz und Messmethode. Nicht einfach behaupten „sample-synchron“, wenn nur ein gemeinsamer Timer existiert.

**F. Safety:** keine Internetkommunikation, keine fremden Renderer/Audio-Player/Interpreter, keine unzulässigen Datei-Assets, keine riskanten Systemmanipulationen.

**G. Interaction:** Escape beendet sauber; normale Wiedergabe erfolgt ohne Benutzerinteraktion; Fenster und Audioressourcen werden freigegeben.

**H. Performance:** reale GPU-Frametimes/CPU-/VRAM-/RAM-Werte und besonders langsame Szenen; kein pauschales „läuft flüssig“ ohne Messung.

**I. Repeatability:** mehrere vollständige Durchläufe, möglichst aus unterschiedlichen leeren Arbeitsverzeichnissen; Clean-Rebuild; stabile Timelines und plausibler Vergleich zu vorherigen Testläufen.

**J. Public artifact:** Download/Hash des tatsächlich veröffentlichten GitHub-Release-Assets gegen das lokal freigegebene Artefakt prüfen.

## 11.3 Echte Frames statt Metriktheater

Ein veränderter Frame-Hash beweist Bewegung, keine Bildqualität. „MORPH“/„ERROR.wtf“ in einem String-Table beweist nicht, dass die Wortmarke sichtbar ist. Ein WAV-Protokoll aus einem Synthesizer beweist nicht, dass die Demo den Sound tatsächlich ausgegeben hat. Ein `exit 0` beweist nicht, dass die Performance vollständig und künstlerisch schlüssig war.

Entwickle die Prüfungen so, dass triviale Scheinlösungen nicht durchkommen. Sicht- und Hörbelege dürfen nur aus der getesteten Version stammen. Wenn keine unabhängige menschliche Beurteilung möglich ist, markiere die subjektive Bewertung explizit als KI-intern, nicht „objektiv perfekt“.

## 11.4 Qualitätsschleife mit Baseline

Nach jedem wichtigen Build:

1. Tatsächlich rendern und den Sound erzeugen/aufnehmen.
2. Mit der vorherigen besten *abgespeicherten* Version auf vergleichbaren Zeitpunkten vergleichen.
3. Die **drei größten echten Schwächen** des aktuellen Werks benennen.
4. Pro Iteration eine klare Hypothese formulieren: Was wird durch welche Änderung besser?
5. Änderung implementieren und die relevanten Tests ausführen.
6. Eine Verschlechterung ohne begründeten Zielkonflikt rückgängig machen.
7. Den tatsächlich besseren Stand als neue lokale Baseline committen.

Lege einen nachweisbaren Verlauf unter `docs/1m/ITERATION_LOG.md` an. Endlose „optimiert“-/„noch perfekter“-Aussagen ohne vorher/nachher Evidenz sind unzulässig. Auch ein nicht lohnender Tuningzyklus ist ein Ergebnis: dokumentiere ihn und konzentriere dich auf die größeren Schwächen.

# 12. KÜNSTLERISCHE ABNAHME — DAS WERK MUSS ÜBERZEUGEN

Die Veröffentlichung als finale Kunstversion verlangt mehr als Checklisten. Bewerte den vollständigen Film und den vollständigen Soundtrack mehrfach anhand konkreter Beispiele. Prüfe insbesondere:

1. Hat die ersten 10 Sekunden eine eigene Idee, oder nur einen generischen Ladebildschirm?
2. Erkennt man noch ohne Wortmarke, dass das Werk zur ERROR.wtf-Welt gehört?
3. Entwickelt sich ein anfängliches Motiv logisch und überraschend?
4. Ist jede Szene technisch und kompositorisch auf Augenhöhe mit dem Gesamtwerk?
5. Gibt es mindestens drei wahrnehmbar eigene, erinnerungswürdige Momente?
6. Wie wirkt die Musik **ohne Bild**: eigenständiges Stück oder leere Soundkulisse?
7. Wie wirken die Bilder **ohne Ton**: verständliche Formdramaturgie oder ziellose Effektreihe?
8. Fällt bei wichtigen Events die Musik mit dem Bild zusammen – in der wirklichen Wiedergabe?
9. Gibt es Kontrast zwischen Ruhe und Energie, Enge und Weite, Ordnung und Störung?
10. Ist die Kamera bewusst geführt und vermeidet sie Dauerrotation, Dauerzoom und unleserliche Unruhe?
11. Sind rote Lichtakzente ästhetisch präzise statt erschlagend?
12. Ist der Glitch mehr als eine dekorative Störung?
13. Ist das Ende vorbereitet, überraschend und emotional vollständig?
14. Ist `ERROR.wtf` klar lesbar und zugleich künstlerisch integriert?
15. Welche Szene ist eindeutig schwächer als der Rest? Warum wurde sie nicht verbessert oder entfernt?
16. Welche Verbesserung gegenüber der stärksten Baseline kann man in Bild, Ton oder Messwerten konkret nachweisen?
17. Gibt es eine vorher schon bekannte Regel, die im Finale neu erscheint? Falls nein: stärkere innere Verbindung schaffen.
18. Ist die Produktion originell, ohne Verwechslung mit fremden Demos oder der Matrix-Filmästhetik als bloßer Imitation?
19. Entspricht das Musikniveau dem gewachsenen Dateibudget, ohne die Komposition mit unnötigen Sounds zu überladen?
20. Ist die Gesamtfassung qualitativ stärker als die vier Ursprungswerke – oder ist die Behauptung noch ungetestet?

Für subjektive Eigenschaften ist `SELF_REVIEW` als Review-Typ zu verwenden, solange keine echte externe/künstlerische Freigabe vorliegt. Vermeide Fantasie-Scores und erfundene Publikumsurteile. Wenn du nicht überzeugt bist, identifiziere die konkrete Schwäche, statt das Werk „perfekt“ zu nennen.

# 13. ENTWICKLUNGS- UND GIT-STRATEGIE

Nutze das bestehende Projekt `https://github.com/error-wtf/error-wtf-demoscene`; prüfe, ob das GitHub-Repository existiert, welchem Konto du tatsächlich zugeordnet bist und ob du dort autorisiert schreiben darfst. Falls noch kein Remote existiert, folge den im ursprünglichen Auftrag gegebenen Berechtigungen zur Erstellung des vorgesehenen öffentlichen Repositories. **Nicht unter anderen Konten veröffentlichen.** Bestehende Tags, Releases und Quellstände nicht überschreiben.

Empfohlene Struktur, soweit mit dem tatsächlichen Projekt kompatibel:

```
src/1m/                     # Engine, Szenen, Musik, Wortmarke
shaders/1m/                 # zur Buildzeit eingebettete Shader
music/1m/                   # originale Score-/Syntheselogik
build/1m/                   # temporäre Buildobjekte, nicht in Git
tools/1m/                   # Packer, Analyzer, Generatoren
tests/1m/                   # automatisierte Tests
docs/1m/                    # Art Direction, Storyboard, Cues, Architektur
reports/1m/                 # Prüfberichte und Ergebnisse
captures/1m/                # lokale Captures, nicht blind in Git
releases/1m/                # lokal vorbereitete Releaseartefakte
```

Erstelle nach sauberer Baseline und `git status` einen dedizierten Branch, beispielsweise `feature/errorwtf-1m`. Dokumentiere den Bezug zum Start-Commit. Erhalte sämtliche bisherigen Produktionen. Nutze die vorhandenen gemeinsamen Komponenten nur, soweit dies sinnvoll ist. Eine eigenständige 1-MiB-Architektur ist erlaubt und erwünscht, falls sie messbar bessere Ergebnisse erzielt.

Binde den ursprünglichen MorphDemo-Benchmark als Referenz per README/Quellangabe ein; bei echter Codeübernahme MIT-Hinweise beibehalten. Keine unlizenzierte Übernahme von Demo-Szenen, Logos oder Musik. Kein erneuter Fork nur, weil die Dateigröße größer wird.

# 14. OPERATIVER ABLAUF: PHASEN UND HARTEN GATES

## PHASE 0 — COST / SAFETY GATE

Lies aktuelle Hermes-Providerkonfiguration **read-only**, prüfe reale Kostenneutralität jedes erlaubten Zugangs und sperre alle ungeprüften kostenpflichtigen Fallbacks projektbezogen. Erfasse GPU/Audio/Compiler/Git-Status. Keine globalen Systemänderungen. **Gate 0:** Für den tatsächlich verwendeten Modellpfad besteht eine tragfähige kostenfreie Berechtigung; kein ungeklärtes Pay-as-you-go-Risiko.

## PHASE 1 — SOURCE OF TRUTH

Verifiziere die vorherigen Produktionen, Code, Releases, Screenshots, Musik und alle bekannten Mängel. **Gate 1:** Tatsächliche Ausgangsbasis mit Hash/Commit und ehrlich bezeichnetem Status.

## PHASE 2 — BEST-OF-SELECTION

Führe vergleichbare Sicht-/Hör-/Technikreviews aus. Wähle Hauptbasis und Komponentenkandidaten. **Gate 2:** Begründeter Auswahlbericht mit Belegen, nicht nur eine subjektive „Sieger“-Zeile.

## PHASE 3 — CONCEPT TRIAD

Entwickle drei wirklich unterscheidbare 1-MiB-Konzepte und setze ihre Schlüsselmomente kurz lauffähig um. **Gate 3:** Vergleichbare reale Bild-/Ton-Prototypen, konsistente künstlerische Entscheidung.

## PHASE 4 — MUSICAL MASTERPLAN

Schreibe Leitmotiv, Harmonik, Groove- und Phasenplan. Erzeuge hörbare Klangproben der wichtigen Szenen und den ersten vollständigen Score mit einer kontrollierten Timeline. **Gate 4:** Eigenständige nachvollziehbare Musikstruktur; nicht nur ein Loop und ein visueller Timer.

## PHASE 5 — COMPLETE VISUAL BLOCKOUT

Produziere ein vollständiges End-to-End-Storyboard in der tatsächlichen Engine, zunächst ohne maximalen Effektaufwand. Jeder musikalische Abschnitt hat eine räumliche und dramaturgische Funktion. **Gate 5:** Vollständig durchlaufender Vorabfilm/-Build mit originaler Musik, roher aber verständlicher visueller Entwicklung.

## PHASE 6 — PRODUCTION POLISH

Ersetze schwache Blockouts durch ausgereifte Szenen. Verbessere Tonmix, Kameraführung, Übergänge, Licht, Typografie und Signature Moments. Führe reale Qualitätsvergleiche durch. **Gate 6:** Keine offensichtlichen Platzhalter; die neue Produktion zeigt gegenüber der verifizierten Ausgangsbasis dokumentierbare Verbesserungen.

## PHASE 7 — 1-MiB-PACKING

Messe echte Größen. Optimiere/packe mit reproduzierbaren lokalen Werkzeugen. Bewahre Optik, Musik und Laufzeit. Wenn eine Kompression bestimmte Bild-/Audioanteile verändert oder auslässt, ist das ein Regressionstest. **Gate 7:** Echte `errorwtf-1m` ELF-Datei exakt 1.048.576 Byte, vollständig eigenständig.

## PHASE 8 — FULL REAL-HARDWARE VERIFICATION

Clean-Rebuild, mehrere echte Vollruns, Capture, Audio-Loopback, Sync-Messungen, Escape, Asset-/Netz-/Prozessprüfungen, Hardware-Performance. **Gate 8:** Technisch alle zwingenden Anforderungen mit Rohdaten erfüllt, offene Probleme offen benannt und kritische Pflichtfehler behoben.

## PHASE 9 — FINAL A/B ART REVIEW

Vergleiche die fertig gepackte und getestete Version mit der besten ursprünglichen Demo sowie der besten vorherigen 1-MiB-Iteration. Untersuche Musik und Bild in voller Länge. **Gate 9:** Konkrete Verbesserungen sind erkennbar; subjektive Selbstbewertung klar als solche gekennzeichnet. Es darf keine unverantwortliche „objektiv perfekt“-Behauptung geben.

## PHASE 10 — GITHUB RELEASE

Bereite Quelle, Builds, Checksums, Captures, WAV, Credits, README und Release-Notizen auf. Prüfe Geheimnisse und Lizenzen. Veröffentliche unter `github.com/error-wtf/error-wtf-demoscene`, falls Rechte und Projektzustand dies erlauben und die zuvor autorisierte Veröffentlichungsgenehmigung gültig ist. Prüfe öffentliche Assets und Hashes anschließend gegen lokal abgenommene Binärdatei. **Gate 10:** GitHub-URL und Asset-Hash tatsächlich nachgeprüft; sonst `RELEASE_BLOCKED` statt Erfolgsmeldung.

# 15. KONKRETE LIEFEROBJEKTE

Bei vollständigem Erfolg liegen mindestens vor:

1. **`errorwtf-1m`**: native Linux-x86-64-Demo, exakt **1.048.576 Byte**.
2. Vollständiger zugänglicher Quellcode und entsprechende Build-/Packing-Werkzeuge.
3. Ein reproduzierbares `make 1m` / gleichwertiges Buildziel und eine dokumentierte Clean-Rebuild-Anleitung.
4. Eine vollständige eigene audiovisuelle Komposition mit klar erkennbarem ERROR.wtf-Stil.
5. Der vollständige originale Soundtrack als separater WAV-Export, wenn aus derselben Scoreversion erzeugbar.
6. Tatsächlich erzeugte Screenshots und Videocaptures des **finalen Binärartefakts**; kein Mockup.
7. `docs/1m/BASELINE_INVENTORY.md` und `docs/1m/BEST_OF_THE_BEST.md`.
8. `docs/1m/ART_DIRECTION.md`, `docs/1m/STORYBOARD.md`, `docs/1m/CUE_SHEET.md`.
9. `docs/1m/ARCHITECTURE_AND_SIZE_BUDGET.md` und `docs/1m/PROVENANCE.md`.
10. `docs/1m/ITERATION_LOG.md` einschließlich konkreter Korrekturen und zurückgenommener schlechterer Varianten.
11. `reports/1m/verification.json` sowie zugehörige Rohdaten der echten Ausführung, ohne veröffentlichte Geheimnisse.
12. SHA-256 des finalen lokal geprüften und öffentlich veröffentlichten Artefakts.
13. GitHub-Release mit Titel, Beschreibung, Versionsnummer, bekannter Kompatibilität, Herkunfts- und Lizenznachweisen, überprüften Downloads.

Fakultativ: zusätzliche 64-s-Editfassung, höherauflösender Offline-Master und weitere Plattformversionen. **Diese Zusätze dürfen den verpflichtenden 1-MiB-Release nicht blockieren.**

# 16. VERÖFFENTLICHUNGS- UND RECHTEREGELN

Die bestehende ausdrückliche Freigabe zur öffentlichen Veröffentlichung des ERROR.wtf-Projekts unter dem GitHub-Konto `error-wtf` gilt im Rahmen ihrer bisherigen Beschränkungen auch für dieses neue **eigene** Werk. Binde die originale MIT-Lizenz ein, soweit deren Code übernommen wird. Achte auf Drittanbieterrechte bei Code, Tools, Fonts, Audio, Shadern und Assets. Keine Geheimnisse, privaten Providerkonfigurationen, API-Keys, System-Logs mit sensiblen Daten oder fremde urheberrechtlich geschützte Musik/Filmbilder veröffentlichen. Keine kostenpflichtigen GitHub Actions/Runner oder externen Release-Services aktivieren.

Bevorzuge ein **eigenes neues Release** der fünften Produktion, nicht das Überschreiben bestehender Assets. Ein möglicher Name ist `errorwtf-1m-v1.0.0` beziehungsweise eine konsistente zum Repository passende Version; vorherige Alpha-/RC-Tags nur sachlich kennzeichnen. Kein `v1.0.0`, solange Pflicht-Gates nicht tatsächlich bestanden wurden. Veröffentliche keine falschen Wettbewerbsplatzierungen oder behauptete Jurywertungen.

# 17. FEHLER-, STATUS- UND EHRLICHKEITSPROTOKOLL

Verwende konsistent:

- `VERIFIED`: tatsächliche Prüfung samt referenzierbarer Evidenz bestanden;
- `PARTIAL`: nachweislich teilweise vorhanden, Rest offen;
- `FAILED`: Prüfung wurde ausgeführt und ist gescheitert;
- `NOT_TESTED`: nicht ausgeführt;
- `BLOCKED`: konkreter externer oder technischer Hinderungsgrund;
- `COST_UNVERIFIED`: Kostenfreiheit eines Providerpfades nicht belastbar geklärt;
- `SELF_REVIEW`: eigenes künstlerisches Urteil ohne externes Jury-/Nutzerfeedback;
- `RELEASE_BLOCKED`: öffentliche Veröffentlichung nicht vollzogen oder nicht vollständig bestätigt.

Keine Umdeutung von `NOT_TESTED` zu `PASS`, kein Verschweigen unvollständiger Prototypen, keine vorgetäuschten Laufzeiten oder Art-Reviews. Wenn ein Fehler entsteht, untersuche zuerst die konkrete Ursache, reproduziere ihn, behebe ihn und prüfe die Regression. Eine neue Version ersetzt nicht automatisch eine schlechtere Messung. Und: 1 MiB allein ist **kein** Beweis für bessere Kunst.

# 18. PRIORITÄTEN BEI ZIELKONFLIKTEN

1. **0,00 € zusätzliche Kosten; System-, Daten-, Lizenz- und Git-Sicherheit.**
2. **Echtes funktionierendes natives 1-MiB-Artefakt und überprüfbarer Entwicklungsstand.**
3. **ERROR.wtf-Identität und künstlerische Originalität.**
4. **Starke originale Musik, dramaturgische Kohärenz und tatsächliche audiovisuelle Synchronisation.**
5. **Handwerkliche Qualität, Performance, Robustheit, Reproduzierbarkeit und bewiesene Kompatibilität.**
6. **Elegantes Sizecoding mit exakt 1.048.576 Byte.**
7. Optionale Features/Exportformate und reine Effekt-Komplexität.

Diese Reihenfolge bedeutet NICHT, die exakt 1-MiB-Grenze sei bei einem fertigen Release optional. Eine fertige Freigabe muss alle harten Anforderungen erfüllen; falls das nicht gelingt, ist der Status `PARTIAL`/`BLOCKED` und nicht „perfekt bis auf die Größe“.

# 19. ERSTE KONKRETE AKTION — NICHT NUR DIE NÄCHSTE ROADMAP SCHREIBEN

Führe jetzt, falls die ursprünglichen Werke existieren, die **read-only Baseline-Bestandsaufnahme und Kosten-/Git-/Hardwareprüfung** aus. Vergleiche die realen vier Produktionen anhand von Code, messbaren Artefakten und echten Audio-/Videocaptures. Leite daraus das stärkste Hauptkonzept und den besten Score ab. Erstelle anschließend drei kurze tatsächlich lauffähige 1-MiB-Kreativprototypen, wähle begründet, entwickle die vollständige Demo, optimiere sie auf genau **1.048.576 Byte**, prüfe den finalen Build auf echter Hardware und veröffentliche das überprüfte Werk unter meinem GitHub-Account `error-wtf`.

Wenn die vier Werke noch nicht vollständig existieren, verschleiere das nicht; dokumentiere den realen Ausgangszustand und beginne mit der bestmöglich belegten Grundlage, ohne Ergebnisse zu erfinden. Gib mir keine endlose Folge kleinteiliger Theorieberichte und keine erneute Prompt-Abschrift. Arbeite im zulässigen Rahmen tatsächlich an Code, Sound, Rendering, Testdaten und einer fertigen Produktion.

> **„Nimm nicht einfach die beste Demo und mache sie größer. Finde heraus, warum sie die beste ist. Bewahre ihren Kern. Ersetze ihre schwächsten Stellen. Entwickle ihr musikalisches und visuelles System weiter. Mache die 1-MiB-Version zu einem Werk, das es vorher so noch nicht gab.“**

**ERROR.wtf // BEYOND THE ERROR // 1 MiB // FROM FAILURE TO FORM.**
