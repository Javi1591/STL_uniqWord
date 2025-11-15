# Unique Words – Chapter 17 Programming Assignment

## Summary
This program reads a user-specified text file and extracts all of the unique words found within the file. It uses the
C++ Standard Template Library (STL), specifically the set container, to automatically handle and store only unique values.
For this assignment, the program is intended to be used with the provided Chapter 12 text file, forChap12.txt.

## Program Behavior
- The program begins by prompting the user to enter the name of a text file.
- It attempts to open the specified file with an input file stream.
- If the file cannot be opened, an error message is displayed and the program ends.
- If the file opens successfully, the program reads one word at a time from the file.
- Each word is inserted into an STL set, which ensures all stored words are unique.
- After reading the entire file, the program displays each unique word found.
- The total number of unique words is then printed at the end of the output.

## Key Concepts
- File Input (ifstream): Reading text from a file one word at a time.
- STL set Container: Prevents duplicate entries and stores items in sorted order.
- Looping with Input Streams: Using while (infile >> word) to process file content.
- Error Handling for Files: Checking if the file successfully opened before reading.
- Counting Elements: Using set.size() to determine how many unique words were stored.

## How to Compile and Run
### Compile
Use the following command in a terminal or command prompt:
g++ -o UniqueWords UniqueWords.cpp

### Run
After compiling, run the program with:
./UniqueWords

When prompted, enter the name of the file you want to analyze:
forChap12.txt

Make sure the text file is stored in the same directory as the program’s executable.
