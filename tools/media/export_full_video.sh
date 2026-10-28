#!/bin/bash
# ERROR.wtf // 1MiB — full video export (§4/§6 media prompt)
# Deterministic offline render pass (same engine + timeline as the release binary)
# at 60 fps, quality-encode H.264/AAC 320k, faststart. Audio = score_preview.wav
# rendered from the identical score_sample() function (single source of truth).
set -euo pipefail
cd "$(dirname "$0")/../.."
mkdir -p captures/1m releases/1m/media
FPS="${FPS:-60}"
echo "[full-export] offline render ${FPS}fps x 120s, then x264 slow crf17..."
ERRORWTF_HEADLESS=1 ERRORWTF_OFFLINE=$FPS ./build/1m/errorwtf_1m_prod 2>captures/1m/offline_render_full.log \
  | ffmpeg -y -loglevel error -f rawvideo -pix_fmt rgb24 -s 1280x720 -r "$FPS" -i - \
           -i music/1m/errorwtf_1m_score_preview.wav \
           -map 0:v:0 -map 1:a:0 \
           -c:v libx264 -preset slow -crf 17 -pix_fmt yuv420p \
           -movflags +faststart \
           -c:a aac -b:a 320k -ar 48000 \
           releases/1m/media/ERROR_wtf_ONE_MEGABYTE_full.mp4
tail -1 captures/1m/offline_render_full.log
ffprobe -v error -show_entries format=duration,size -of csv=p=0 releases/1m/media/ERROR_wtf_ONE_MEGABYTE_full.mp4
echo "[full-export] DONE"
