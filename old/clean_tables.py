from bs4 import BeautifulSoup
from pathlib import Path


def convert_table_to_div(input_html):
    soup = BeautifulSoup(input_html, "html.parser")
    tables = soup.find_all("table")
    for table in tables:
        chapter_tag = table.find(id=lambda x: x and x.startswith("Chapter"))

        # If there is no chapter tag, skip this table
        if chapter_tag is None:
            continue

        chapter_title = chapter_tag.text.strip()

        # Create new div
        new_div = soup.new_tag("div")
        new_div["class"] = "chapter-container"

        # Extract content from table and place into div
        for row in table.find_all("tr"):
            for cell in row.find_all(["td", "th"]):
                new_div.append(cell)

        # Replace the table with the new div
        table.replace_with(new_div)

    # Return the updated HTML content
    return str(soup)


# Read the HTML file using pathlib
input_file_path = Path("tables.html")
output_file_path = Path("tables_cleaned.html")

input_html = input_file_path.read_text()

# Convert the tables to divs
converted_html = convert_table_to_div(input_html)

# Write the converted HTML back to a file
output_file_path.write_text(converted_html)
