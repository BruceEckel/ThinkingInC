from bs4 import BeautifulSoup


def convert_to_new_style(input_file, output_file):
    with open(input_file, "r", encoding="utf-8") as f:
        old_html = f.read()

    soup = BeautifulSoup(old_html, "html.parser")

    # Get the <body> tag
    body = soup.find("body")

    # Remove old styles and background attributes
    if body.has_attr("background"):
        del body["background"]
    if body.has_attr("bgcolor"):
        del body["bgcolor"]

    # Wrap the old body content in a new div with class 'content'
    new_content = soup.new_tag("div", **{"class": "content"})
    body_children = list(body.children)
    for child in body_children:
        new_content.append(child.extract())

    body.append(new_content)

    # Update <h1> tags
    h1_tags = soup.find_all("h1")
    for h1 in h1_tags:
        h1["class"] = "title-main"

    # Update <font> tags and convert them to <p> tags with proper classes
    font_tags = soup.find_all("font")
    for font in font_tags:
        new_tag = soup.new_tag("p")

        # Check if the content is None before setting the string
        if font.string is not None:
            new_tag.string = font.string

        size = font.get("size")
        if size == "5":
            new_tag["class"] = "subtitle"
        elif size == "3":
            new_tag["class"] = "web-link"
        elif size == "2":
            new_tag["class"] = "note"

        font.replace_with(new_tag)

    # Save the updated content to a new HTML file
    with open(output_file, "w", encoding="utf-8") as f:
        f.write(str(soup))


# Call the function
convert_to_new_style("old_index.html", "new_index.html")
