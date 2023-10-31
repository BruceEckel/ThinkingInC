from pathlib import Path


def find_unmatched_files(directory_path):
    unmatched_files = []

    for subdirectory in directory_path.iterdir():
        if subdirectory.is_dir():
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

            # Find unmatched mp3 files
            unmatched_mp3_files = mp3_files - svg_files
            for mp3_file in unmatched_mp3_files:
                num = int(mp3_file[5:])
                if num == max(mp3_numbers):
                    unmatched_files.append(
                        f"Unmatched last MP3: {subdirectory / (mp3_file + '.mp3')}"
                    )
                else:
                    unmatched_files.append(
                        f"Unmatched MP3: {subdirectory / (mp3_file + '.mp3')}"
                    )

            # Find unmatched svg files
            unmatched_svg_files = svg_files - mp3_files
            for svg_file in unmatched_svg_files:
                num = int(svg_file[5:])
                if num == max(svg_numbers):
                    unmatched_files.append(
                        f"Unmatched last SVG: {subdirectory / (svg_file + '.svg')}"
                    )
                else:
                    unmatched_files.append(
                        f"Unmatched SVG: {subdirectory / (svg_file + '.svg')}"
                    )

    return unmatched_files


if __name__ == "__main__":
    directory_path = Path(".")

    if not directory_path.exists():
        print("The specified directory does not exist.")
    else:
        unmatched_files = find_unmatched_files(directory_path)

        if unmatched_files:
            print("Unmatched files found:")
            for file in unmatched_files:
                print(file)
        else:
            print("No unmatched files found.")
