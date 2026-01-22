/*
    08 Characters And Strings: 02 Character Handling Library

    The isalnum Function

    The isalnum function is a member of the <ctype.h> library used to determine if a character is alphanumeric.
    This means it checks if the character is either a letter (A-Z, a-z) or a decimal digit (0-9).

    How It Works
    Input:
        It takes a single integer argument c, which is typically the ASCII value of a character or EOF.

    Return Value:
        Non-zero (True): If the character is a letter or a digit.
        Zero (False): If the character is anything else (punctuation, spaces, control characters).


    Logic Breakdown
    
    Internally isalnum(c) essentially performs a logical OR between two other functions:
        isalnum(c) is equivalent to (isalpha(c) || isdigit(c))
        
    Input Category          Example     isalnum Result
    Uppercase               'G'         True (non-zero)
    Lowercase               'm'         True (non-zero)
    Digits                  '7'         True (non-zero)
    Punctuation             '!'         False (0)
    Whitespace              '\n'        False (0)
*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main() {
    printf("08 Characters And Strings: 02 Character Handling Library \n");
    printf("-------------------------------------------------------- \n");

    char input[] = "User_Name! 2026";

    printf("Alphanumeric characters only: ");
    for (int i = 0; input[i] != '\0'; i++) {
        if (isalnum(input[i])) {
            putchar(input[i]);
        }
    }
    // Output: UserName2026

    return 0;
}
