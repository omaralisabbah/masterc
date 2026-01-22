/*
    08 Characters And Strings: 05 String Handling Library

    The memcmp Function

    The memcmp function is used to compare two blocks of memory byte by byte. 
    It is part of the <string.h> library and is often used to compare strings, 
    arrays, or structures.

    Function Descriptions

    1. memcmp:
       Compares the first 'n' bytes of memory area 's1' and memory area 's2'.

    How It Works
    Input:
        1. s1: Pointer to the first memory block.
        2. s2: Pointer to the second memory block.
        3. n: The number of bytes to compare.

    Return Value:
        - 0: If the first 'n' bytes of both blocks are identical.
        - Positive value (>0): If the first differing byte in s1 is greater than in s2.
        - Negative value (<0): If the first differing byte in s1 is less than in s2.

    Logic Breakdown

    Unlike strcmp, which stops at a null terminator ('\0'), memcmp 
    strictly compares exactly 'n' bytes. This allows it to compare 
    binary data or strings that contain null characters.

    Buffer 1            Buffer 2            Limit (n)    Result
    "ABCDE"             "ABCDE"             5            0 (Equal)
    "ABCDE"             "ABCCE"             5            Positive ('D' > 'C')
    "ABCDE"             "ABZDE"             3            Negative ('C' < 'Z')
    {'A', '\0', 'B'}    {'A', '\0', 'B'}    3            0 (Equal - ignores '\0')
*/



#include <stdio.h>
#include <string.h>

int main() {
    printf("08 Characters And Strings: 05 String Handling Library \n");
    printf("-------------------------------------------------------- \n");

    char buffer1[] = "Blueberry";
    char buffer2[] = "Blueberry Pie";

    // 1. Compare first 9 bytes (Equal)
    int result1 = memcmp(buffer1, buffer2, 9);
    printf("Comparing first 9 bytes: %d (Equal)\n", result1);

    // 2. Compare first 11 bytes (Not Equal)
    int result2 = memcmp(buffer1, buffer2, 11);
    if (result2 < 0) {
        printf("Comparing first 11 bytes: %d (Buffer 1 is smaller)\n", result2);
    }

    // 3. Binary data comparison (Handling null bytes)
    char data1[] = { 'X', '\0', 'Y' };
    char data2[] = { 'X', '\0', 'Z' };
    
    int result3 = memcmp(data1, data2, 3);
    printf("Binary comparison result: %d (Differ at 3rd byte)\n", result3);

    return 0;
}