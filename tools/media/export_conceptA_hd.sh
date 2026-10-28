#!/bin/bash
# ERROR.wtf // 1MiB — concept A "CATHEDRAL OF SIGNALS" HD reference export
# 2x supersampled offline render (2560x1440) -> downscale 1280x720, score segment muxed.
set -euo pipefail
cd "$(dirname "$0")/../.."
gcc -O2 -Wall -Wextra -DEW_W=2560 -DEW_H=1440 -DDUR=12 src/1m/concepts2.c -o build/1m/concepts2_A_hd -lglfw -lGL -lasound -lEGL -lm
mkdir -p releases/1m/concepts captures/1m
echo "[ref-A] supersampled offline render 30fps x 12s at 2560x1440..."
ERRORWTF_HEADLESS=1 timeout 300 ./build/1m/concepts2_A_hd A 2>captures/1m/refA_render.log \
  | ffmpeg -y -loglevel error -f rawvideo -pix_fmt rgb24 -s 2560x1440 -r 30 -i - \
           -i music/1m/segments/conceptsA.wav \
           -filter_complex "[0:v]scale=1280:720:flags=lanczos[v]" \
           -map "[v]" -map 1:a:0 \
           -c:v libx264 -preset slow -crf 18 -pix_fmt yuv420p \
           -c:a aac -b:a 320k -ar 48000 -movflags +faststart \
           releases/1m/concepts/concept_A2_hd.mp4
tail -1 captures/1m/refA_render.log
ffprobe -v error -show_entries format=duration,size -of csv=p=0 releases/1m/concepts/concept_A2_hd.mp4
echo "[ref-A] DONE"
