from pathlib import Path


def remove_slide_html_files(lecture_directory: Path) -> None:
    # Pattern to match files like "slide_1.html", "slide_2.html", etc.
    pattern = "slide_*.html"

    # Loop through each file matching the pattern and remove it
    for slide_file in lecture_directory.glob(pattern):
        slide_file.unlink()
        print(f"Removed {slide_file.name}")


def remove_all_slides(directory: str = ".") -> None:
    main_directory = Path(directory)
    lectures_directory = main_directory / "lectures"

    # Check if the lectures directory exists
    if not lectures_directory.exists() or not lectures_directory.is_dir():
        print("Lectures subdirectory does not exist. Exiting.")
        return

    # Iterate through each subdirectory and remove slide HTML files
    for lecture_dir in lectures_directory.iterdir():
        if lecture_dir.is_dir():
            print(f"Removing slide files in: {lecture_dir.name}")
            remove_slide_html_files(lecture_dir)

    print("All slide HTML files have been removed.")


if __name__ == "__main__":
    remove_all_slides(Path("../../src"))
