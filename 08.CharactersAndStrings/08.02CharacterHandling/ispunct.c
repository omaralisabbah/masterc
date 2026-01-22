/*
    08 Characters And Strings: 02 Character Handling Library

    The ispunct Function

    The ispunct function is used to identify punctuation characters. 
    In C, a punctuation character is any printable character that is 
    neither a space nor an alphanumeric character (letter or digit).

    How It Works
    Input:
        An integer c (the character to be tested).

    Return Value:
        Non-zero (True): If the character is a printable symbol (e.g., !, @, #, $, etc.).
        Zero (False): If the character is a letter, digit, space, or control character.

    Logic Breakdown

    ispunct returns true for any character that is "graphic" (isgraph) 
    but not "alphanumeric" (isalnum).

    Input       Category                ispunct Result
    '!'         Punctuation             True (non-zero)
    ','         Punctuation             True (non-zero)
    'A'         Letter                  False (0)
    '9'         Decimal Digit           False (0)
    ' '         Space                   False (0)
    
*/



#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    printf("08 Characters And Strings: 02 Character Handling Library \n");
    printf("-------------------------------------------------------- \n");

    char message[] = "Hello, World! 2026 #Code";
    int punctCount = 0;

    printf("Punctuation found: ");
    for (int i = 0; message[i] != '\0'; i++) {
        if (ispunct(message[i])) {
            putchar(message[i]);
            punctCount++;
        }
    }

    printf("\nTotal punctuation marks: %d\n", punctCount);
    
    // Output: 
    // Punctuation found: ,!#
    // Total punctuation marks: 3

    return 0;
}