/*
    01 C Programming Language: 12 Escape Sequence Characters

    In C programming, escape sequences are special character combinations used within string
    literals and character constants to represent characters that are either non-printable or have a special meaning in the language.
    They begin with a backslash `\` followed by one or more characters. 

    Escape Sequence :

    \a: Alert (Bell) - Produces an audible beep or bell sound.
    \b: Backspace - Moves the cursor one position backward.
    \f: Form Feed - Advances the output to the next logical page (primarily for printers, less visible in modern terminals).
    \n: Newline - Moves the cursor to the beginning of the next line. 
    \r: Carriage Return - Moves the cursor to the beginning of the current line. 
    \t: Horizontal Tab - Inserts a horizontal tab space.
    \v: Vertical Tab - Moves the cursor to the next vertical tab stop.
    \\: Backslash - Represents a literal backslash character.
    \': Single Quote - Represents a literal single quotation mark.
    \": Double Quote - Represents a literal double quotation mark.
    \?: Question Mark - Represents a literal question mark (used to avoid trigraph issues in older C standards).
    \0: Null Character - Represents the null terminator for strings, marking their end.

*/


#include <stdio.h>

int main() {

    printf("01 C Programming Language: 12 Escape Sequence Characters \n");
    printf("-------------------------------------------------------- \n");

    printf("Hello\nWorld!\n"); // Newline
    printf("Item\tQuantity\n"); // Horizontal Tab
    printf("This is a backslash: \\ \n"); // Backslash
    printf("He said, \"Hello!\"\n"); // Double Quote
    printf("It's a single quote: \'\n"); // Single Quote
    printf("Alert! \a\n"); // Alert (Bell)
    
    return 0;
}