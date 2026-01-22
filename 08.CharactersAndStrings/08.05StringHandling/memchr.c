/*
    08 Characters And Strings: 05 String Handling Library

    The memchr Function

    The memchr function is part of the <string.h> library. It searches 
    within a block of memory for the first occurrence of a specific byte 
    (represented as an unsigned char).

    Function Descriptions

    1. memchr:
       Searches the first 'n' bytes of the memory area pointed to by 's' 
       for the character 'c'.

    How It Works
    Input:
        1. s: Pointer to the block of memory (can be any data type, usually a string).
        2. c: The character/value to search for (passed as an int).
        3. n: The number of bytes to examine.

    Return Value:
        - A pointer to the first occurrence of the character if found.
        - NULL if the character does not occur in the given memory area.

    Logic Breakdown

    Unlike strchr, which stops at the null terminator ('\0'), memchr 
    continues searching until it has checked exactly 'n' bytes. This 
    makes it ideal for binary data or fixed-size buffers.

    Input Buffer        Search Char    Limit (n)    Result
    "Hello World"       'o'            5            Pointer to 'o' in "Hello"
    "Hello World"       'W'            5            NULL (not in first 5 bytes)
    {0x01, 0x00, 0x05}  0x05           3            Pointer to 0x05 (skips '\0')
*/



#include <stdio.h>
#include <string.h>

int main() {
    printf("08 Characters And Strings: 05 String Handling Library \n");
    printf("-------------------------------------------------------- \n");

    const char *str = "Searching for a needle in a haystack.";
    char searchChar = 'n';
    char *result;

    // Search for 'n' in the first 15 bytes of the string
    result = (char *)memchr(str, searchChar, 15);

    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", searchChar, result - str);
        printf("Remaining string from that point: \"%s\"\n", result);
    } else {
        printf("Character '%c' not found within the search limit.\n", searchChar);
    }

    // Example with binary data (handling a null byte)
    char binaryData[] = {'A', '\0', 'B', 'C'};
    char *binResult = (char *)memchr(binaryData, 'B', 4);

    if (binResult != NULL) {
        printf("\nFound 'B' even after a null terminator at index: %ld\n", binResult - binaryData);
    }

    return 0;
}