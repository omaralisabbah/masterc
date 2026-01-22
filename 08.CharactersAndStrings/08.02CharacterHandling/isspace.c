/*
    08 Characters And Strings: 02 Character Handling Library

    The isspace Function

    The isspace function is used to identify any standard white-space 
    characters. These are characters used for spacing and positioning 
    content, both horizontally and vertically.

    How It Works
    Input:
        An integer c (the character to be tested).

    Return Value:
        Non-zero (True): If the character is a space, tab, newline, 
                         vertical tab, form feed, or carriage return.
        Zero (False): For all printable glyphs (letters, digits, punctuation).

    Logic Breakdown

    isspace is the broad category for all "whitespace." It is more 
    inclusive than isblank, which only detects spaces and horizontal tabs.

    Input       Description             isspace Result      isblank Result
    ' '         Space                   True (non-zero)     True (non-zero)
    '\t'        Horizontal Tab          True (non-zero)     True (non-zero)
    '\n'        Newline                 True (non-zero)     False (0)
    '\v'        Vertical Tab            True (non-zero)     False (0)
    'A'         Letter                  False (0)           False (0)
    
*/



#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    printf("08 Characters And Strings: 02 Character Handling Library \n");
    printf("-------------------------------------------------------- \n");

    char text[] = "Hello,\n\tWorld 2026";
    int spaceCount = 0;

    for (int i = 0; text[i] != '\0'; i++) {
        if (isspace(text[i])) {
            spaceCount++;
        }
    }

    printf("Original text contains hidden whitespace.\n");
    printf("Total whitespace characters found: %d\n", spaceCount);
    
    // Output: 
    // Total whitespace characters found: 3 (the newline, the tab, and the space)

    return 0;
}