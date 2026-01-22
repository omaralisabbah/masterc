/*
    08 Characters And Strings: 02 Character Handling Library

    The isxdigit Function

    The isxdigit function checks if a character is a valid hexadecimal digit. 
    Hexadecimal (base-16) uses the standard decimal digits plus the first 
    six letters of the alphabet.

    How It Works
    Input:
        An integer c (the character to be tested).

    Return Value:
        Non-zero (True): If the character is '0'-'9', 'a'-'f', or 'A'-'F'.
        Zero (False): For any other character.

    Logic Breakdown

    isxdigit is essential for parsing memory addresses, web color codes (HTML/CSS), 
    or any data represented in hex format.

    Input       Category                isxdigit Result
    '5'         Decimal Digit           True (non-zero)
    'a'         Lowercase Hex Letter    True (non-zero)
    'F'         Uppercase Hex Letter    True (non-zero)
    'g'         Letter (out of range)   False (0)
    '!'         Punctuation             False (0)
    
*/



#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    printf("08 Characters And Strings: 02 Character Handling Library \n");
    printf("-------------------------------------------------------- \n");

    char colorCode[] = "#FF5733";
    
    printf("Valid hex digits in '%s': ", colorCode);
    for (int i = 0; colorCode[i] != '\0'; i++) {
        if (isxdigit(colorCode[i])) {
            putchar(colorCode[i]);
        }
    }

    printf("\n");
    // Output: Valid hex digits in '#FF5733': FF5733

    return 0;
}