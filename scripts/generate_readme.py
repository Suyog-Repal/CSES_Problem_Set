import os
import re
from urllib.parse import quote

README_FILE = "README.md"
DATASTAR_FOLDER = "Datastar Coaching"

sections = [
    "Introductory Problems",
    "Sorting and Searching",
    "Dynamic Programming",
    "Graph Algorithms",
    "Range Queries",
    "Tree Algorithms",
    "Mathematics",
    "String Algorithms",
    "Geometry",
    "Advanced Techniques",
    "Sliding Window Problems",
    "Interactive Problems",
    "Bitwise Operations",
    "Construction Problems",
    "Advanced Graph Problems",
    "Counting Problems",
    "Additional Problems I",
    "Additional Problems II"
]


def natural_sort_key(name):
    match = re.match(r"^(Chapter)s?\s*(\d+)(?:-(\d+))?$", name, re.IGNORECASE)
    if match:
        first = int(match.group(2))
        second = int(match.group(3)) if match.group(3) else 0
        return (0, first, second, name.lower())

    if name.lower() == "additional tasks":
        return (1, 0, 0, name.lower())

    return (2, 0, 0, name.lower())


def gather_cpp_files(folder):
    return sorted(
        [file for file in os.listdir(folder) if file.endswith(".cpp")],
        key=lambda name: name.lower()
    )


def gather_datastar_chapters(base_folder):
    chapters = []
    if not os.path.isdir(base_folder):
        return chapters

    for item in os.listdir(base_folder):
        item_path = os.path.join(base_folder, item)
        if os.path.isdir(item_path):
            chapters.append(item)

    return sorted(chapters, key=natural_sort_key)


# Gather CSES data
cses_total = 0
section_data = {}

for section in sections:
    files = []
    if os.path.isdir(section):
        files = gather_cpp_files(section)

    section_data[section] = files
    cses_total += len(files)

# Gather Datastar Coaching data
datastar_chapters = gather_datastar_chapters(DATASTAR_FOLDER)
datastar_data = {}
datastar_total = 0

for chapter in datastar_chapters:
    chapter_folder = os.path.join(DATASTAR_FOLDER, chapter)
    files = gather_cpp_files(chapter_folder)
    datastar_data[chapter] = files
    datastar_total += len(files)

readme = """# Competitive Programming Solutions

## Overall Progress

| Platform | Solved |
|----------|---------|
"""
readme += f"| CSES | {cses_total} |\n"
readme += f"| Datastar Coaching | {datastar_total} |\n"
readme += f"| Total | {cses_total + datastar_total} |\n\n"
readme += "---\n\n"

readme += "# CSES Problem Set Solutions\n\n"
readme += "Solutions to the CSES Problem Set in C++.\n\n"
readme += "## Progress\n\n"
readme += "| Category | Solved |\n"
readme += "|---|---|\n"

for section in sections:
    readme += f"| {section} | {len(section_data[section])} |\n"

readme += f"\n**Total Solved:** {cses_total}\n\n"
readme += "---\n\n"

for section in sections:
    files = section_data[section]
    readme += f"## {section}\n\n"
    readme += "| # | Problem | Solution |\n"
    readme += "|---|---|---|\n"

    for idx, file in enumerate(files, start=1):
        problem_name = file.replace(".cpp", "")
        section_path = quote(section)
        file_path = quote(file)
        readme += (
            f"| {idx} | {problem_name} | "
            f"[Code](./{section_path}/{file_path}) |\n"
        )

    readme += "\n"

readme += "# Datastar Coaching\n\n"
readme += "## Progress\n\n"
readme += "| Chapter | Solved |\n"
readme += "|----------|---------|\n"

for chapter in datastar_chapters:
    readme += f"| {chapter} | {len(datastar_data[chapter])} |\n"

readme += f"\n**Total Solved:** {datastar_total}\n\n"
readme += "---\n\n"

for chapter in datastar_chapters:
    files = datastar_data[chapter]
    readme += f"## {chapter}\n\n"
    readme += "| # | Problem | Solution |\n"
    readme += "|---|---|---|\n"

    for idx, file in enumerate(files, start=1):
        problem_name = file.replace(".cpp", "")
        chapter_path = quote(DATASTAR_FOLDER)
        chapter_name = quote(chapter)
        file_path = quote(file)
        readme += (
            f"| {idx} | {problem_name} | "
            f"[Code](./{chapter_path}/{chapter_name}/{file_path}) |\n"
        )

    readme += "\n"

with open(README_FILE, "w", encoding="utf-8") as file:
    file.write(readme)

print("README.md generated successfully!")
