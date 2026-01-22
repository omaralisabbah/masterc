/*
    08 Characters And Strings: 02 Character Handling Library

    The islower and isupper Functions

    The islower function checks if a character is a lowercase letter (a-z).
    The isupper function checks if a character is an uppercase letter (A-Z).

    How It Works
    Input:
        An integer c (the character to be tested).

    Return Value:
        Non-zero (True): If the character matches the specific case.
        Zero (False): If the character is of the opposite case, or not a letter.

    Logic Breakdown

    These functions are case-sensitive. If a character is not an alphabetic 
    letter (like a digit or a symbol), both functions will return zero.

    Input       Category                islower Result      isupper Result
    'a'         Lowercase Letter        True (non-zero)     False (0)
    'A'         Uppercase Letter        False (0)           True (non-zero)
    '1'         Digit                   False (0)           False (0)
    '!'         Punctuation             False (0)           False (0)
    
*/



#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    printf("08 Characters And Strings: 02 Character Handling Library \n");
    printf("-------------------------------------------------------- \n");

    char text[] = "C Programming 2026";
    int lowerCount = 0;
    int upperCount = 0;

    for (int i = 0; text[i] != '\0'; i++) {
        if (islower(text[i])) {
            lowerCount++;
        } else if (isupper(text[i])) {
            upperCount++;
        }
    }

    printf("Original String: %s\n", text);
    printf("Lowercase letters: %d\n", lowerCount);
    printf("Uppercase letters: %d\n", upperCount);
    
    // Output: 
    // Lowercase letters: 10
    // Uppercase letters: 2

    return 0;
}