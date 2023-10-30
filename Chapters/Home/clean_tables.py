from bs4 import BeautifulSoup
from pathlib import Path


def read_html(file_path):
    return file_path.read_text(encoding="utf-8")


def write_html(file_path, content):
    file_path.write_text(content, encoding="utf-8")


def convert_table_to_div(input_html):
    soup = BeautifulSoup(input_html, "lxml")
    table = soup.find("table")

    if table:
        chapter_header = soup.new_tag("div", **{"class": "chapter-header"})

        chapter_header.append(soup.new_tag("hr", **{"class": "hr-left"}))

        chapter_name = table.find("font", {"class": "chapter-duration"}).text.strip()
        chapter_header.append(soup.new_tag("h2", id="Chapter1", string=chapter_name))

        duration = table.find_all("font", size="2")[0].text.strip()
        chapter_header.append(
            soup.new_tag("p", string=duration, **{"class": "chapter-duration"})
        )

        lecture_link_tag = table.find("a", {"class": "lecture-link"})
        lecture_links = soup.new_tag("div", **{"class": "lecture-links"})
        lecture_links.append(lecture_link_tag)
        chapter_header.append(lecture_links)

        toc_link_tag = table.find_all("a", href="#TOC")[0]
        chapter_header.append(
            soup.new_tag(
                "a", string=toc_link_tag.text, href="#TOC", **{"class": "back-to-toc"}
            )
        )

        table.replace_with(chapter_header)

    return str(soup)


if __name__ == "__main__":
    input_file_path = Path("index.html")
    output_file_path = Path("cleaned.html")

    input_html = read_html(input_file_path)
    converted_html = convert_table_to_div(input_html)
    write_html(output_file_path, converted_html)
