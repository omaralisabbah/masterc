/*
    08 Characters And Strings: 05 String Handling Library

    The memmove Function

    The memmove function copies a specific number of bytes from a source 
    location to a destination. Unlike memcpy, memmove is designed to 
    safely handle "overlapping" memory regions.

    Function Descriptions

    1. memmove:
       Copies 'n' bytes from 'src' to 'dest'. It ensures that the original 
       source bytes are copied correctly even if the destination and source 
       areas share the same memory addresses.

    How It Works
    Input:
        1. dest: Pointer to the destination memory area.
        2. src: Pointer to the source memory area.
        3. n: The number of bytes to be copied.

    Return Value:
        - A pointer to the destination (dest).

    Logic Breakdown

    If you try to shift a string within itself using memcpy, it might overwrite 
    bytes before they are copied. memmove solves this by using an intermediate 
    buffer (conceptually) so that the copy is always successful regardless 
    of overlap.

    Scenario             Function    Result
    Overlapping Shift    memcpy      Potentially Corrupted Data
    Overlapping Shift    memmove     Safe and Accurate Data
*/



#include <stdio.h>
#include <string.h>

int main() {
    printf("08 Characters And Strings: 05 String Handling Library \n");
    printf("-------------------------------------------------------- \n");

    char text[] = "ABCDEFGH";

    printf("Original String: %s\n", text);

    // Goal: Shift "ABCDE" two positions to the right within the same array
    // Source: text (ABCDE...)
    // Destination: text + 2 (pointing to C)
    // Overlap: The 'C', 'D', and 'E' are in both source and destination.
    
    memmove(text + 2, text, 5);

    printf("After memmove:   %s\n", text);
    // Output: ABABCDEF
    // Note: The first 5 chars 'ABCDE' were moved to start at index 2.

    return 0;
}