# generate.py
# Generates "slides.html" for each lecture directory in "Thinking in C"
from pathlib import Path
import json


def generate_html_with_javascript(lecture_directory: Path) -> None:
    svg_files = sorted(lecture_directory.glob("*.svg"))
    mp3_files = sorted(lecture_directory.glob("*.mp3"))
    slides = [
        {"svg": svg.name, "mp3": svg.with_suffix(".mp3").name}
        for svg in svg_files
        if svg.with_suffix(".mp3") in mp3_files
    ]
    slides_json = json.dumps(slides)
    html_content = f"""
    <!DOCTYPE html>
    <html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Thinking in C</title>
        <style>
            /* Add your CSS styles here */
        </style>
    </head>
    <body>
        <img id="slideImage" alt="Slide" style="max-width: 100%; max-height: 80vh; margin: auto;">
        <br/>
        <button id="previousButton" onclick="previousSlide()">Previous</button>
        <button id="nextButton" onclick="nextSlide()">Next</button>
        <audio id="slideAudio" controls style="width: 600px; margin-left: 1em;"></audio>
        <button onclick="goHome()">Home</button>
        <script>
            const slides = {slides_json};
            let currentSlide = 0;

            function showSlide(index) {{
                const slide = slides[index];
                document.getElementById('slideImage').src = slide.svg;
                document.getElementById('slideAudio').src = slide.mp3;
                currentSlide = index;
                document.getElementById('slideAudio').play();
                updateNavigationButtons();
            }}

            function nextSlide() {{
                if (currentSlide < slides.length - 1) {{
                    showSlide(currentSlide + 1);
                }}
            }}

            function previousSlide() {{
                if (currentSlide > 0) {{
                    showSlide(currentSlide - 1);
                }}
            }}

            function updateNavigationButtons() {{
                document.getElementById('previousButton').style.display = currentSlide === 0 ? 'none' : 'inline';
                document.getElementById('nextButton').style.display = currentSlide === slides.length - 1 ? 'none' : 'inline';
            }}

            function goHome() {{
                window.location.href = '../../Index.html';
            }}

            document.getElementById('slideAudio').addEventListener('ended', nextSlide);

            window.onload = () => {{
                showSlide(0);
                updateNavigationButtons();
            }};
        </script>
    </body>
    </html>
    """

    with open(lecture_directory / "slides.html", "w") as f:
        f.write(html_content)

    print(
        f"Single HTML file with JavaScript created successfully for {lecture_directory.name}!"
    )


def generate_single_html(directory: str = ".") -> None:
    main_directory = Path(directory)
    lectures_directory = main_directory / "lectures"

    if not lectures_directory.exists() or not lectures_directory.is_dir():
        print("Lectures subdirectory does not exist. Exiting.")
        return

    for lecture_dir in lectures_directory.iterdir():
        if lecture_dir.is_dir():
            print(f"Generating single HTML for lecture: {lecture_dir.name}")
            generate_html_with_javascript(lecture_dir)

    print("All lectures have been processed.")


if __name__ == "__main__":
    generate_single_html(Path("../../src"))
