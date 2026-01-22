/*
    08 Characters And Strings: 02 Character Handling Library

    The isalpha Function

    The isalpha function is used to check if a specific character is an alphabetic letter.
    It ignores numbers, punctuation, and whitespace entirely.

    How It Works
    Input:
        An integer c (the character to be tested).

    Return Value:
        Non-zero (True): If the character is a letter (A-Z or a-z).
        Zero (False): If the character is a digit, symbol, or space.

    Logic Breakdown

    In the standard "C" locale, isalpha is the combination of checking for uppercase and lowercase letters.

    Input       Category                isalpha Result
    'A'         Uppercase Letter        True (non-zero)
    'z'         Lowercase Letter        True (non-zero)
    '5'         Decimal Digit           False (0)
    '@'         Punctuation             False (0)
    ' '         Space                   False (0)
    
*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main() {
    printf("08 Characters And Strings: 02 Character Handling Library \n");
    printf("-------------------------------------------------------- \n");

    char name[] = "Agent 007";
    int letterCount = 0;

    for (int i = 0; name[i] != '\0'; i++) {
        if (isalpha(name[i])) {
            letterCount++;
        }
    }

    printf("The string contains %d letters.\n", letterCount);
    // Output: The string contains 5 letters. (A, g, e, n, t)

    return 0;
}
