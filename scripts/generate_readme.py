import os

README_FILE = "README.md"

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

total_solved = 0

readme = """# CSES Problem Set Solutions

Solutions to the CSES Problem Set in C++.

## Progress

| Category | Solved |
|---|---|
"""

section_data = {}

for section in sections:

    files = []

    if os.path.exists(section):

        files = sorted([
            file for file in os.listdir(section)
            if file.endswith(".cpp")
        ])

    section_data[section] = files
    total_solved += len(files)

    readme += f"| {section} | {len(files)} |\n"

readme += f"\n**Total Solved:** {total_solved}\n"

readme += "\n---\n"

for section in sections:

    files = section_data[section]

    readme += f"\n## {section}\n\n"

    readme += "| # | Problem | Solution |\n"
    readme += "|---|---|---|\n"

    for idx, file in enumerate(files, start=1):

        problem_name = file.replace(".cpp", "")

        section_path = section.replace(" ", "%20")
        file_path = file.replace(" ", "%20")

        readme += (
            f"| {idx} | {problem_name} | "
            f"[Code](./{section_path}/{file_path}) |\n"
        )

    readme += "\n"

with open(README_FILE, "w", encoding="utf-8") as file:
    file.write(readme)

print("README.md generated successfully!")