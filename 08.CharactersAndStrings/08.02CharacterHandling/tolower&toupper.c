/*
    08 Characters And Strings: 02 Character Handling Library

    The toupper and tolower Functions

    The toupper and tolower functions are used to convert the case of a 
    single alphabetic character. Unlike the previous functions, these 
    perform a transformation rather than just a test.

    How It Works
    Input:
        An integer c (the character to be converted).

    Return Value:
        The converted character (as an int). If the character is already 
        in the target case or is not a letter, it is returned unchanged.

    Logic Breakdown

    - toupper(c): If c is lowercase ('a'-'z'), it returns the uppercase equivalent.
    - tolower(c): If c is uppercase ('A'-'Z'), it returns the lowercase equivalent.

    Input       Function        Result      Description
    'a'         toupper         'A'         Converted to Uppercase
    'A'         toupper         'A'         No change (already uppercase)
    'G'         tolower         'g'         Converted to Lowercase
    '7'         toupper         '7'         No change (not a letter)
    '!'         tolower         '!'         No change (not a letter)
    
*/



#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    printf("08 Characters And Strings: 02 Character Handling Library \n");
    printf("-------------------------------------------------------- \n");

    char phrase[] = "C Programming 2026!";
    
    printf("Original:  %s\n", phrase);

    // Convert to all Uppercase
    printf("Uppercase: ");
    for (int i = 0; phrase[i] != '\0'; i++) {
        putchar(toupper(phrase[i]));
    }
    printf("\n");

    // Convert to all Lowercase
    printf("Lowercase: ");
    for (int i = 0; phrase[i] != '\0'; i++) {
        putchar(tolower(phrase[i]));
    }
    printf("\n");
    
    /* Output:
       Original:  C Programming 2026!
       Uppercase: C PROGRAMMING 2026!
       Lowercase: c programming 2026!
    */

    return 0;
}