from pathlib import Path

header = """
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Thinking in C</title>
    <style>
        body { font-family: Arial, sans-serif; margin: 0; display: flex; flex-direction: column; height: 100vh; }
        img { max-width: 100%; max-height: 80vh; margin: auto; }
        footer {
            margin-top: auto;
            display: flex;
            justify-content: center;
            align-items: center;
            padding: 1em;
        }
        audio { 
            flex-grow: 0;   /* Ensure it doesn't grow beyond its width */
            width: 600px;   /* Fixed width for the audio control */
            margin-left: 1em;
        }
    </style>
</head>
<body>
"""

footer = """
</body>
</html>
"""


def generate_html_for_lecture(lecture_directory):
    # Get all SVG and MP3 files
    svg_files = sorted(lecture_directory.glob("*.svg"))
    mp3_files = sorted(lecture_directory.glob("*.mp3"))

    for idx, svg in enumerate(svg_files):
        mp3 = svg.with_suffix(".mp3")
        if mp3 not in mp3_files:
            print(f"No associated MP3 found for {svg.name}. Skipping...")
            continue

        with open(lecture_directory / f"slide_{idx + 1}.html", "w") as f:
            f.write(header)

            # SVG and MP3 content
            f.write(f'<img src="{svg.name}" alt="Slide {idx + 1}">')

            # Navigation and audio at the bottom
            f.write("<footer>")
            if idx != 0:
                f.write(
                    f'<a href="slide_{idx}.html">Previous</a>&nbsp;&nbsp;&nbsp;&nbsp;'
                )
            if idx != len(svg_files) - 1:
                f.write(f'<a href="slide_{idx + 2}.html">Next</a>')
            f.write(
                f'<audio controls autoplay><source src="{mp3.name}" type="audio/mpeg"></audio>'
            )
            f.write('&nbsp;&nbsp;&nbsp;<a href="../../Index.html">Home</a>')
            f.write("</footer>")

            f.write(footer)


def generate_html(directory="."):
    main_directory = Path(directory)
    lectures_directory = main_directory / "lectures"

    if not lectures_directory.exists() or not lectures_directory.is_dir():
        print("Lectures subdirectory does not exist. Exiting.")
        return

    for lecture_dir in lectures_directory.iterdir():
        if lecture_dir.is_dir():
            print(f"Generating slides for lecture: {lecture_dir.name}")
            generate_html_for_lecture(lecture_dir)

    print("HTML files generated successfully!")


if __name__ == "__main__":
    generate_html(Path("../../src"))
