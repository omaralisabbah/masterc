/*
    08 Characters And Strings: 05 String Handling Library

    The memset Function

    The memset function is used to fill a block of memory with a specific 
    byte value. It is the most common way to "zero out" or initialize 
    arrays and structures in C.

    Function Descriptions

    1. memset:
       Sets the first 'n' bytes of the memory area pointed to by 's' 
       to the value of 'c' (converted to an unsigned char).

    How It Works
    Input:
        1. s: Pointer to the memory block to be filled.
        2. c: The value to be set (passed as an int, but stored as a byte).
        3. n: The number of bytes to be set to the value.

    Return Value:
        - A pointer to the memory area 's'.

    Logic Breakdown

    memset works at the byte level. While perfect for char arrays or 
    setting memory to zero, it is important to remember that it fills 
    *every byte*. This means using it to set an int array to '1' will 
    not result in the number 1, but rather a large number created by 
    the byte pattern 01 01 01 01.

    Buffer Type         Value (c)    Purpose
    String/Char Array   'A'          Fill string with 'A's
    Any Array/Struct    0            Initialize/Clear all data to zero
    Buffer              '*'          Create a visual divider/mask
*/



#include <stdio.h>
#include <string.h>

int main() {
    printf("08 Characters And Strings: 05 String Handling Library \n");
    printf("-------------------------------------------------------- \n");

    // Example 1: Initializing a string
    char buffer[15];
    
    // Fill with 'X's
    memset(buffer, 'X', 10);
    buffer[10] = '\0'; // Manually add null terminator
    
    printf("Buffer after memset('X'): %s\n", buffer);

    // Example 2: Clearing a buffer (Zeroing out)
    char password[] = "Secret123";
    printf("Before clearing: %s\n", password);
    
    // Security practice: wipe sensitive data from memory
    memset(password, 0, sizeof(password));
    
    printf("After clearing:  (Memory is now empty/null)\n");

    // Example 3: Initializing a numeric array to zero
    int scores[5] = {10, 20, 30, 40, 50};
    memset(scores, 0, sizeof(scores));
    
    printf("Scores[0] after memset: %d\n", scores[0]);

    return 0;
}