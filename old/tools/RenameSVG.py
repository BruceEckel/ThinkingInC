# Only used once, run from directory above "Chapters"
from pathlib import Path
import re

for f in Path().rglob("*.SVG"):
  new_path = f.with_suffix('.svg')
  print(f, new_path)
  f.rename(new_path)
