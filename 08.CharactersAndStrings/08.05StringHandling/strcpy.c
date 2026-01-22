/*
    08 Characters And Strings: 05 String Handling Library

    The strcpy Function

    The strcpy (string copy) function is used to copy the contents of one 
    null-terminated string into another memory location (a character array).

    Function Descriptions

    1. strcpy:
       Copies the string pointed to by 'src' (including the null terminator) 
       to the array pointed to by 'dest'.

    How It Works
    Input:
        1. dest: Pointer to the destination array where the content is to be copied.
        2. src: Pointer to the source string to be copied.

    Return Value:
        - A pointer to the destination string (dest).

    Logic Breakdown

    The function copies characters one by one from the source until it 
    encounters the null terminator ('\0'), which it also copies. This 
    effectively replaces whatever was in the destination.

    Warning: 
    The destination must be large enough to hold the source string and its 
    null terminator. If the source is longer than the destination, it will 
    write into adjacent memory, causing a "buffer overflow" crash.

    Source              Destination Size    Result in Destination
    "Hello"             10                  "Hello\0"
    "C Programming"     20                  "C Programming\0"
*/



#include <stdio.h>
#include <string.h>

int main() {
    printf("08 Characters And Strings: 05 String Handling Library \n");
    printf("-------------------------------------------------------- \n");

    char source[] = "Gemini 2026";
    char destination[20]; // Ensure this is large enough!

    // Copy source into destination
    // Note: You cannot simply use destination = source; in C
    strcpy(destination, source);

    printf("Source string:      %s\n", source);
    printf("Destination string: %s\n", destination);

    // Overwriting a string
    strcpy(destination, "Updated");
    printf("After second copy:  %s\n", destination);

    return 0;
}