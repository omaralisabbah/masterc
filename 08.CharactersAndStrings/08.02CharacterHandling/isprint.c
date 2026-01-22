/*
    08 Characters And Strings: 02 Character Handling Library

    The isprint Function

    The isprint function checks if a character is "printable."
    This includes every character that occupies a space on the screen, 
    including the space character itself.

    How It Works
    Input:
        An integer c (the character to be tested).

    Return Value:
        Non-zero (True): If the character is printable (letters, digits, punctuation, space).
        Zero (False): If the character is a control character (like newline or tab).

    Logic Breakdown

    isprint is the more inclusive version of isgraph. While isgraph only returns 
    true for characters with a visible glyph, isprint returns true for 
    isgraph characters PLUS the space character (' ').

    Input       Category                isprint Result      isgraph Result
    'A'         Letter                  True (non-zero)     True (non-zero)
    '!'         Punctuation             True (non-zero)     True (non-zero)
    ' '         Space                   True (non-zero)     False (0)
    '\n'        Newline                 False (0)           False (0)
    
*/



#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    printf("08 Characters And Strings: 02 Character Handling Library \n");
    printf("-------------------------------------------------------- \n");

    // A string containing printable characters and a hidden control character (\a - alert/bell)
    char data[] = "Text\a 123";
    
    printf("Printable version: ");
    for (int i = 0; data[i] != '\0'; i++) {
        if (isprint(data[i])) {
            putchar(data[i]);
        } else {
            // Represent non-printable characters with a placeholder
            putchar('?');
        }
    }

    printf("\n");
    // Output: Printable version: Text? 123

    return 0;
}