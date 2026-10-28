/* ERROR.wtf // 1MiB — Music Engine v1 (Phase 4 Musical Masterplan)
 * Central score function score_sample(t) over the 120s timeline; offline
 * WAV renderer for audible evidence samples. score_sample() is THE function
 * that later runs in the live demo's ALSA thread (single source of truth).
 *
 * Direction: FRACTURED ORDER.
 * Leitmotiv: E4 -> Bb4 (tritone, "the error") -> G4 -> B4 (resolution).
 * States: ORDER (precise groove, pure motif) / FRACTURE (jitter, dissonance,
 * slowed motif) / RESOLUTION (major-colored motif, calm).
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>

#define SR 48000
#define DUR 120
#define PI 3.14159265358979323846

/* scene boundaries (regie bible §5.2) */
static const double SC[] = { 0, 12, 28, 45, 64, 78, 100, 112, 120 };
#define NS 9
static int scene_of(double t) { int s = 0; while (s + 1 < NS && t >= SC[s + 1]) s++; return s; }

/* leitmotiv: E4 329.63 | Bb4 466.16 (tritone) | G4 392.00 | B4 493.88 | D5 587.33 */
static const double MOTIV_F[5] = { 329.63, 466.16, 392.00, 493.88, 587.33 };
static const double MOTIV_T[5] = { 0.00, 0.25, 0.55, 1.30, 1.30 }; /* onset times; last = resolution dyad */
static const double MOTIV_D[5] = { 0.22, 0.26, 0.70, 0.85, 0.85 };

/* one motif voice: sine + soft saw partial, exp decay */
static double tone(double t, double f, double amp, double decay, double saw) {
    if (t < 0 || t > decay * 3.2) return 0.0;
    double env = exp(-t / decay * 3.0);
    double s = sin(2 * PI * f * t) + saw * 0.35 * sin(2 * PI * 2 * f * t + 0.7)
             + 0.15 * sin(2 * PI * 3 * f * t + 1.3);
    return amp * env * s;
}

/* motif instance at global time t, pattern start t0, state-transformed */
static double motif(double t, double t0, int mode) {
    /* mode 0 = pure (order), 1 = fracture (slowed, tritone stacked), 2 = resolution (dyad major) */
    double rate = mode == 1 ? 0.55 : 1.0;
    double tl = (t - t0) / rate;
    double out = 0.0;
    int n = (mode == 2) ? 5 : 4;
    for (int i = 0; i < n; i++) {
        double f = MOTIV_F[i];
        if (mode == 1 && i == 2) f *= 0.985;            /* drift */
        if (mode == 2 && i == 3) f = 392.00;            /* G4 under B4: major third pair */
        out += tone(tl - MOTIV_T[i], f, 0.16, MOTIV_D[i], 0.5);
        if (mode == 1) out += tone(tl - MOTIV_T[i], f * 1.0595, 0.05, MOTIV_D[i], 0.2); /* semitone ghost */
    }
    if (mode == 2) out += tone(tl - MOTIV_T[3], MOTIV_F[3] * 1.5, 0.10, MOTIV_D[3], 0.3); /* B5 shimmer */
    return out;
}

static uint64_t rstate = 42;
static double rnd(void) { rstate = rstate * 6364136223846793005ULL + 1442695040888963407ULL; return (double)(rstate >> 40) / 16777216.0; }

static double kick(double t, double amp) {
    if (t < 0 || t > 0.45) return 0.0;
    return amp * exp(-t * 9.0) * sin(2 * PI * (120.0 * exp(-t * 14.0) + 45.0) * t);
}
static double hat(double t) { return (t >= 0 && t < 0.03) ? 0.10 * exp(-t * 90.0) * (rnd() * 2 - 1) : 0.0; }
static double drone(double t, double base) {
    return 0.11 * sin(2 * PI * base * t) * (0.75 + 0.25 * sin(t * 0.45))
         + 0.07 * sin(2 * PI * base * 1.5 * t + 0.5) * (0.75 + 0.25 * sin(t * 0.31 + 1.0));
}
static double bass(double t, double f, double amp) {
    return amp * sin(2 * PI * f * t) * (0.7 + 0.3 * sin(t * 0.9));
}

/* THE score function — also drives the live demo later */
double score_sample(double t) {
    int s = scene_of(t);
    double out = 0.0;
    double bt = fmod(t, 0.5);

    /* drone bed throughout, fading at end */
    double dfade = (s == 7) ? 1.0 - (t - 112.0) / 8.0 : 1.0;
    if (s != 4) out += drone(t, 82.41) * dfade * (s < 2 ? 0.7 : 1.0);

    if (s <= 1) {                                    /* COLD BOOT / FIRST ORDER */
        out += motif(t, 3.0, s == 0 ? 1 : 0) * 0.8;  /* boot: fractured motif, then pure */
        if (s == 1) out += kick(bt, 0.34) + hat(fmod(t + 0.25, 0.5)) + bass(t, 82.41, 0.16);
    } else if (s == 2) {                             /* SIGNAL ARCHITECTURE: order groove full */
        out += kick(bt, 0.40) + hat(fmod(t + 0.25, 0.5)) + bass(t, 82.41 * (1.0 + 0.0 * 0), 0.20);
        int bar = ((int)(t / 2.0)) % 4;
        static const double bl[4] = { 82.41, 92.50, 98.00, 82.41 };
        double bt2 = fmod(t, 2.0);
        if (bt2 < 1.6) out += bass(t - (t - bt2), bl[bar], 0.16);
        out += motif(t, 29.5, 0) + motif(t, 38.5, 0);
        out += 0.05 * (sin(2 * PI * 329.63 * t) + sin(2 * PI * 392.00 * t));
    } else if (s == 3) {                             /* FALSE PERFECTION: calm, slow motif */
        out += kick(bt, 0.16) + 0.09 * sin(2 * PI * 123.47 * t);
        out += motif(t, 47.0, 0) * 0.7;
        out += 0.08 * (sin(2 * PI * 164.81 * t) + 0.6 * sin(2 * PI * 196.00 * t));
    } else if (s == 4) {                             /* SYSTEM FAULT: fracture groove */
        double jit = (rnd() - 0.5) * 0.04;
        double btj = fmod(t + jit, 0.5);
        out += kick(btj, 0.30) * (0.8 + 0.2 * rnd());
        out += 0.22 * bass(t, 82.41 * (1.0 + 0.04 * sin(t * 2.7)), 1.0);
        out += 0.14 * bass(t, 87.31, 1.0);           /* dissonant neighbor */
        out += motif(t, 65.0, 1) + motif(t, 71.0, 1);
    } else if (s == 5) {                             /* REWRITE REALITY: groove returns, transformed */
        out += kick(bt, 0.38) + hat(fmod(t, 0.5)) + bass(t, 98.00, 0.18);
        out += motif(t, 80.0, 2) + motif(t, 88.0, 2);
        out += 0.10 * sin(2 * PI * 523.25 * t) * (0.6 + 0.4 * sin(t * 0.8));
    } else if (s == 6) {                             /* THE SIGNATURE: full resolution */
        out += kick(bt, 0.24);
        out += motif(t, 101.0, 2) + motif(t, 104.5, 2) + motif(t, 108.0, 2);
        out += 0.10 * (sin(2 * PI * 329.63 * t) + sin(2 * PI * 392.00 * t) + sin(2 * PI * 493.88 * t));
    } else {                                         /* AFTERIMAGE: motif fragment + fade */
        double fade = 1.0 - (t - 112.0) / 8.0;
        out += motif(t, 113.0, 2) * 0.7 * fade;
        out += drone(t, 82.41) * 0.5 * fade;
    }
    return out;
}

/* ---- offline WAV renderer (audible evidence) ---- */
static void wav_write(const char *fn, double t0, double t1) {
    size_t n = (size_t)((t1 - t0) * SR);
    int16_t *pcm = malloc(n * 2 * sizeof(int16_t));
    double peak = 0.0;
    double *L = malloc(n * sizeof(double)), *R = malloc(n * sizeof(double));
    for (size_t i = 0; i < n; i++) {
        double t = t0 + (double)i / SR;
        double s = score_sample(t);
        L[i] = s; R[i] = s * 0.88;
        if (fabs(s) > peak) peak = fabs(s);
    }
    double norm = peak > 0.92 ? 0.92 / peak : 1.0;
    for (size_t i = 0; i < n; i++) {
        pcm[2 * i] = (int16_t)(L[i] * norm * 32767.0);
        pcm[2 * i + 1] = (int16_t)(R[i] * norm * 32767.0);
    }
    FILE *f = fopen(fn, "wb");
    uint32_t sr = SR, sz = (uint32_t)(n * 2 * sizeof(int16_t)), br = sr * 4;
    uint16_t ch = 2, bits = 16, fmt_pcm = 1, ba = 4;
    uint32_t riff = 36 + sz, fmt_size = 16;
    fwrite("RIFF", 1, 4, f); fwrite(&riff, 4, 1, f); fwrite("WAVE", 1, 4, f);
    fwrite("fmt ", 1, 4, f); fwrite(&fmt_size, 4, 1, f); fwrite(&fmt_pcm, 2, 1, f);
    fwrite(&ch, 2, 1, f); fwrite(&sr, 4, 1, f); fwrite(&br, 4, 1, f);
    fwrite(&ba, 2, 1, f); fwrite(&bits, 2, 1, f);
    uint32_t ds = sz; fwrite("data", 1, 4, f); fwrite(&ds, 4, 1, f);
    fwrite(pcm, sizeof(int16_t), n * 2, f);
    fclose(f);
    printf("WAV: %s (%.1fs, peak %.2f -> norm %.3f, %u bytes)\n", fn, t1 - t0, peak, norm, sz);
    free(pcm); free(L); free(R);
}

int main(int argc, char **argv) {
    if (argc >= 5 && !strcmp(argv[1], "seg")) { /* seg <t0> <t1> <outfile> */
        wav_write(argv[4], atof(argv[2]), atof(argv[3]));
        return 0;
    }
    if (argc >= 2 && !strcmp(argv[1], "full")) {
        wav_write("music/1m/errorwtf_1m_score_preview.wav", 0, DUR);
    } else {
        /* audible evidence: motif / order groove / fracture / break-return */
        wav_write("music/1m/samples/01_motif_boot.wav", 0, 8);
        wav_write("music/1m/samples/02_groove_order.wav", 28, 36);
        wav_write("music/1m/samples/03_groove_fracture.wav", 64, 72);
        wav_write("music/1m/samples/04_break_return.wav", 76, 88);
    }
    return 0;
}
