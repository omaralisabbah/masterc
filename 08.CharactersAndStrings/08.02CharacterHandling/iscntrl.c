/*
    08 Characters And Strings: 02 Character Handling Library

    The iscntrl Function

    The iscntrl function is used to identify control characters. 
    These are non-printing characters used to control terminal behavior, 
    printers, or other hardware.

    How It Works
    Input:
        An integer c (the character to be tested).

    Return Value:
        Non-zero (True): If the character is a control character (ASCII 0-31 and 127).
        Zero (False): If the character is a printable character (letters, numbers, space).

    Logic Breakdown

    In the ASCII table, control characters are those that do not have a 
    visual representation on the screen.

    Input       Category                iscntrl Result
    '\n'        Newline                 True (non-zero)
    '\t'        Horizontal Tab          True (non-zero)
    'A'         Uppercase Letter        False (0)
    '7'         Decimal Digit           False (0)
    ' '         Space                   False (0)
    
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    printf("08 Characters And Strings: 02 Character Handling Library \n");
    printf("-------------------------------------------------------- \n");

    // Contains a Newline (\n) and a Tab (\t)
    char buffer[] = "Line1\nLine2\tEnd"; 
    
    printf("Sanitized output: ");
    for (int i = 0; buffer[i] != '\0'; i++) {
        // Replace control characters with a dot for safe printing
        if (iscntrl(buffer[i])) {
            putchar('.'); 
        } else {
            putchar(buffer[i]);
        }
    }
    
    printf("\n");
    // Output: Sanitized output: Line1.Line2.End

    return 0;
}