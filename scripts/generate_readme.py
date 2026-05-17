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
    "Additional Problems"
]

readme = """
# CSES Problem Set Solutions

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-17-blue.svg" />
  <img src="https://img.shields.io/badge/Platform-CSES-green.svg" />
  <img src="https://img.shields.io/badge/Status-Active-success.svg" />
</p>

---

## 📌 About

This repository contains my solutions to the CSES Problem Set in C++.

The goal of this repository is to improve:

- Data Structures & Algorithms
- Competitive Programming
- Problem Solving Skills
- Pattern Recognition
- Interview Preparation

---

# 📊 Progress Tracker

| Category | Solved |
|---|---|
"""

total_solved = 0

section_counts = {}

for section in sections:

    count = 0

    if os.path.exists(section):

        count = len([
            file for file in os.listdir(section)
            if file.endswith(".cpp")
        ])

    section_counts[section] = count
    total_solved += count

    readme += f"| {section} | {count} |\n"

readme += f"\n## ✅ Total Problems Solved: {total_solved}\n"

readme += "\n---\n"

for section in sections:

    readme += f"\n# 📂 {section}\n\n"

    readme += "| # | Problem | Solution |\n"
    readme += "|---|---|---|\n"

    if os.path.exists(section):

        files = sorted([
            file for file in os.listdir(section)
            if file.endswith(".cpp")
        ])

        for idx, file in enumerate(files, start=1):

            problem_name = file.replace(".cpp", "")

            section_path = section.replace(" ", "%20")
            file_path = file.replace(" ", "%20")

            readme += (
                f"| {idx} | {problem_name} | "
                f"[Code](./{section_path}/{file_path}) |\n"
            )

    readme += "\n"

readme += """
---

# 🛠️ Language Used

- C++17

---

# 🎯 Goal

To complete the full CSES Problem Set while mastering DSA and competitive programming patterns.

---

⭐ If you like this repository, consider giving it a star.
"""

with open(README_FILE, "w", encoding="utf-8") as file:
    file.write(readme)

print("README.md generated successfully!")