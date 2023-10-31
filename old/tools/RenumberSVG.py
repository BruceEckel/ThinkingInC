# Only used once, run from directory above "Chapters"
from pathlib import Path
import re

for f in Path().rglob("Slide*.SVG"):
  if re.match("Slide\d.SVG", f.name):
    old_name = f.name
    number = f.name[5:6]
    new_name = f"Slide0{number}.SVG"
    print(old_name, new_name)
    new_path = f.with_name(new_name)
    print(f, new_path)
    f.rename(new_path)
