from bs4 import BeautifulSoup


def convert_old_html_to_css_friendly(input_file, output_file):
    with open(input_file, "r", encoding="utf-8") as f:
        soup = BeautifulSoup(f, "html.parser")

    # Update HEAD section
    head = soup.head
    css_link = soup.new_tag(
        "link", rel="stylesheet", type="text/css", href="styles.css"
    )
    head.append(css_link)

    # Update TITLE section
    title = soup.find("h1")
    title["class"] = "title-main"
    subtitle = title.find_next("font", size="3")
    subtitle["class"] = "subtitle"
    subtitle.name = "span"

    # Attempt to find the copyright
    copyright = subtitle.find_next_sibling("font", size="1")
    if copyright:
        copyright["class"] = "copyright"
        copyright.name = "span"
        link = copyright.find_next("a")
        link["class"] = "link-main"

    # Update NOTE section
    note_b_tag = soup.find("b", string="Note")
    if note_b_tag:
        note = note_b_tag.parent
        note["class"] = "note-text"
        for a in note.find_all("a"):
            a["class"] = "link-main"

    # Update Chapter details
    chapter1 = soup.find("a", href="lectures/Chap1.htm").parent
    chapter1["id"] = "Chapter1"
    if chapter1.span:
        chapter1.span["class"] = "chapter-title"
    if chapter1.font:
        chapter1.font["class"] = "chapter-duration"
    for a in chapter1.find_all("a"):
        if a.has_attr("href"):
            if "Low" in a["href"]:
                a["class"] = "lecture-link"
            else:
                a["class"] = "lecture-link"

    # Chapter description
    chapter_description = chapter1.find_next("p")
    chapter_description["class"] = "chapter-description"

    # Write to the output file
    with open(output_file, "w", encoding="utf-8") as f:
        f.write(str(soup.prettify()))


# Use the function
convert_old_html_to_css_friendly("index.html", "new_index.html")
