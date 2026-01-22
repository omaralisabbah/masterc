/*
    08 Characters And Strings: 02 Character Handling Library

    The isblank Function
    
    The isblank function is used to identify standard blank characters.
    Specifically, it targets the characters used to separate words or items within a single line of text.

    How It Works
    Input:
        An integer c (the character to be tested).
    Return Value:
        Non-zero (True): If the character is a space (' ') or a horizontal tab ('\t').
        Zero (False): For all other characters, including "vertical" whitespace like newlines.

    Logic Breakdown

    It is important to distinguish isblank from isspace.
    While isspace includes things like newlines (\n) and vertical tabs (\v), isblank is much more restrictive.

    Input,      Description,            isblank Result,     isspace Result
    ' ',        Space,                  True,               True
    '\t',       Horizontal Tab,         True,               True
    '\n',       Newline (Line feed),    False (0),          True
    'A',        Letter,                 False (0),          False (0)
*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main() {
    printf("08 Characters And Strings: 02 Character Handling Library \n");
    printf("-------------------------------------------------------- \n");

    char line[] = "   \t  Hello World";
    int i = 0;

    // Skip all leading spaces and tabs
    while (line[i] != '\0' && isblank(line[i])) {
        i++;
    }

    printf("The first non-blank character is: '%c'\n", line[i]);
    // Output: The first non-blank character is: 'H'

    return 0;
}
