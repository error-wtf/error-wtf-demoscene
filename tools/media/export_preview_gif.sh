#!/bin/bash
# ERROR.wtf // 1MiB — silent preview GIF (§5 media prompt)
# Selection: THE SIGNATURE reveal (100–112 s): glitch-brick rebuild → clean
# ERROR.WTF wordmark on plate → breathe + sparkle — contains the wordmark,
# the fracture-language and the strongest colour contrast.
set -euo pipefail
cd "$(dirname "$0")/../.."
mkdir -p releases/1m/media
START="${START:-100}"
DUR="${DUR:-12}"
FPS="${FPS:-15}"
SRC=releases/1m/media/ERROR_wtf_ONE_MEGABYTE_full.mp4
echo "[gif] palette from the same selection ($START s +${DUR} s @${FPS}fps, 960px)..."
ffmpeg -hide_banner -loglevel error -y -ss "$START" -t "$DUR" -i "$SRC" \
  -vf "fps=$FPS,scale=960:-1:flags=lanczos,palettegen=stats_mode=diff" \
  releases/1m/media/preview_palette.png
echo "[gif] encode..."
ffmpeg -hide_banner -loglevel error -y -ss "$START" -t "$DUR" -i "$SRC" -i releases/1m/media/preview_palette.png \
  -filter_complex "[0:v]fps=$FPS,scale=960:-1:flags=lanczos[v];[v][1:v]paletteuse=dither=sierra2_4a:diff_mode=rectangle[out]" \
  -map "[out]" -loop 0 -an \
  releases/1m/media/ERROR_wtf_ONE_MEGABYTE_preview.gif
ls -la releases/1m/media/ERROR_wtf_ONE_MEGABYTE_preview.gif | awk '{print "gif size: "$5"B"}'
echo "[gif] DONE"
