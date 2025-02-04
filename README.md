# Population Data Processor

## Overview
This C++ program reads a list of countries and their populations from a file (`Population.txt`), sorts them alphabetically into separate text files based on the first letter of each country’s name, and performs statistical analysis on the population data.

## Features
- Reads population data from `Population.txt`.
- Categorizes countries into individual files based on their first letter.
- Calculates total population, number of countries, average population, and number of countries with a population exceeding 100 million.

## Files
- `Population.cpp`: The main C++ source file containing the program logic.
- `Population.txt`: Contains country names and their populations.
- `Country/A.txt, Country/B.txt, ..., Country/Z.txt`: Each file contains countries starting with the corresponding letter and statistical summaries.

## Expected Output
Each letter-based file in `Country/` will contain:
```
CountryName Population

Total population: X
Number of countries: Y
Average population: Z
Number of countries with a population of more than 100 million: N
```

## Notes
- Ensure that the `Country/` directory exists before running the program.
- The input file should follow the format `CountryName Population` separated by a tab or space.
