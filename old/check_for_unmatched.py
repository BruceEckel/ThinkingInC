from pathlib import Path
from shutil import move


def find_and_move_unmatched_files(directory_path):
    terminal_directory = directory_path / "terminal"
    terminal_directory.mkdir(exist_ok=True)

    for subdirectory in directory_path.iterdir():
        if subdirectory.is_dir() and subdirectory.name != "terminal":
            mp3_files = set()
            svg_files = set()
            mp3_numbers = set()
            svg_numbers = set()

            for file in subdirectory.iterdir():
                if file.suffix == ".mp3":
                    mp3_files.add(file.stem)
                    mp3_numbers.add(int(file.stem[5:]))
                elif file.suffix == ".svg":
                    svg_files.add(file.stem)
                    svg_numbers.add(int(file.stem[5:]))

            terminal_subdirectory = terminal_directory / subdirectory.name
            terminal_subdirectory.mkdir(exist_ok=True)

            # Find and move unmatched mp3 files
            unmatched_mp3_files = mp3_files - svg_files
            for mp3_file in unmatched_mp3_files:
                num = int(mp3_file[5:])
                if num == max(mp3_numbers):
                    move(
                        str(subdirectory / (mp3_file + ".mp3")),
                        str(terminal_subdirectory / (mp3_file + ".mp3")),
                    )

            # Find and move unmatched svg files
            unmatched_svg_files = svg_files - mp3_files
            for svg_file in unmatched_svg_files:
                num = int(svg_file[5:])
                if num == max(svg_numbers):
                    move(
                        str(subdirectory / (svg_file + ".svg")),
                        str(terminal_subdirectory / (svg_file + ".svg")),
                    )


if __name__ == "__main__":
    directory_path = Path(".")

    if not directory_path.exists():
        print("The specified directory does not exist.")
    else:
        find_and_move_unmatched_files(directory_path)
        print("Unmatched terminal slides have been moved.")
