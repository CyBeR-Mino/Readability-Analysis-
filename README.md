
---

# Readability Program

## Overview

This program calculates the readability grade level of a given text using the Coleman-Liau index. The index assesses the complexity of the text based on the number of letters, words, and sentences, providing an estimated U.S. school grade level.

## Features

- Letter Count: Counts the number of letters in the input text.
- Word Count: Counts the number of words in the input text.
- Sentence Count: Counts the number of sentences in the input text.
- Readability Calculation: Computes the Coleman-Liau index to determine the grade level required to understand the text.

## Usage

1. Compile the Program:
   
  
   make readability
   
2. Run the Program:
   
  
   ./readability
   
   You will be prompted to enter text. The program will analyze the text and print the corresponding grade level.

## Example

For the input text "The quick brown fox jumps over the lazy dog.":

./readability
Text: The quick brown fox jumps over the lazy dog.
The program will output:

Grade 2
## Code Explanation

- Letter Count:
  - Letter_check function counts the number of alphabetic characters in the text.

- Word Count:
  - Word_check function counts the number of words by counting spaces and ensuring that consecutive spaces are not counted as multiple words.

- Sentence Count:
  - Sentence_check function counts the number of sentences by looking for sentence-ending punctuation marks (i.e., periods, exclamation marks, and question marks).

- Coleman-Liau Index:
  - The index is calculated using the formula: 0.0588 * L - 0.296 * S - 15.8, where L is the average number of letters per 100 words, and S is the average number of sentences per 100 words.

## License

This project is licensed under the MIT License. See the LICENSE file for details.

## Author

Ye Yint Aung

---
