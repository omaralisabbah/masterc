/*
    08 Characters And Strings: 02 Character Handling Library

    The isdigit Function
    
    The isdigit function is used to determine if a character is a standard 
    decimal digit (0 through 9).

    How It Works
    Input:
        An integer c (the character to be tested).
    Return Value:
        Non-zero (True): If the character is a digit ('0'–'9').
        Zero (False): For all other characters (letters, spaces, punctuation).

    Logic Breakdown

    isdigit checks specifically for the numeric range in the character set.
    It does not recognize Roman numerals or written-out numbers.

    Input,      Description,            isdigit Result
    '0',        Digit Zero,             True
    '9',        Digit Nine,             True
    'A',        Letter,                 False (0)
    '!',        Punctuation,            False (0)
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    printf("08 Characters And Strings: 02 Character Handling Library \n");
    printf("-------------------------------------------------------- \n");

    char str[] = "Year 2026";
    
    printf("Digits found in string: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            putchar(str[i]);
        }
    }
    printf("\n");
    // Output: Digits found in string: 2026

    return 0;
}