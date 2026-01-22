/*
    08 Characters And Strings: 02 Character Handling Library

    How it Works
    All functions in <ctype.h> take an integer as an argument (representing the ASCII/Unicode value of a character) and return an integer.
    Test functions: Return a non-zero value (true) if the condition is met, and 0 (false) otherwise.
    Manipulation functions: Return the converted character code.

    Key Categories of Functions

    1. Character Testing Functions
    These functions allow you to determine what "type" a character is.

    Function,               Checks if the character is...,                      Examples
    isalpha(c),             An alphabetic letter,                               "'a', 'Z'"
    isdigit(c),             A decimal digit,                                    '0' - '9'
    isalnum(c),             Alphanumeric (letter or digit),                     "'5', 'B'"
    islower(c),             A lowercase letter,                                 'g'
    isupper(c),             An uppercase letter,                                'M'
    isspace(c),             "A whitespace (space, tab, newline)",               "' ', \n, \t"
    ispunct(c),             A punctuation mark (not space/alnum),               "'!', '.', ','"
    isxdigit(c),            A hexadecimal digit,                                "'0'-'9', 'A'-'F'"

    2. Character Case Mapping
    These functions are used to transform the case of a letter.
    If the character is not a letter or is already in the target case, they return the character unchanged.

    tolower(c): Converts an uppercase letter to lowercase.
    toupper(c): Converts a lowercase letter to uppercase.
*/


#include <stdio.h>
#include <stdlib.h>


int main() {
    printf("08 Characters And Strings: 02 Character Handling Library \n");
    printf("-------------------------------------------------------- \n");


    return 0;
}
