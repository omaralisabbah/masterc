/*
    08 Characters And Strings: 02 Character Handling Library

    The isgraph Function

    The isgraph function checks if a character is a "graphic" character.
    This includes any character that has a visible glyph (ink on paper)
    when printed.

    How It Works
    Input:
        An integer c (the character to be tested).

    Return Value:
        Non-zero (True): If the character is any printable character except space.
        Zero (False): If the character is a space (' ') or a control character.

    Logic Breakdown

    isgraph is very similar to isprint, but it excludes the space character. 
    It focuses strictly on characters that actually result in a visual mark.

    Input       Category                isgraph Result
    'A'         Letter                  True (non-zero)
    '!'         Punctuation             True (non-zero)
    '5'         Digit                   True (non-zero)
    ' '         Space                   False (0)
    '\n'        Newline                 False (0)
    
*/



#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    printf("08 Characters And Strings: 02 Character Handling Library \n");
    printf("-------------------------------------------------------- \n");

    char str[] = "Hi! 123";
    
    printf("Graphic characters in string: ");
    for (int i = 0; str[i] != '\0'; i++) {
        // Only print if the character has a visual glyph
        if (isgraph(str[i])) {
            putchar(str[i]);
        }
    }

    printf("\n");
    // Output: Graphic characters in string: Hi!123

    return 0;
}