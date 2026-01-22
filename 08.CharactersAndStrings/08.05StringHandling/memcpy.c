/*
    08 Characters And Strings: 05 String Handling Library

    The memcpy Function

    The memcpy function is used to copy a specific number of bytes from one 
    memory location to another. It is a highly efficient way to duplicate 
    data, strings, or arrays.

    Function Descriptions

    1. memcpy:
       Copies 'n' bytes from the memory area 'src' to memory area 'dest'.

    How It Works
    Input:
        1. dest: Pointer to the destination array where the content is to be copied.
        2. src: Pointer to the source of data to be copied.
        3. n: The number of bytes to be copied.

    Return Value:
        - A pointer to the destination (dest).

    Logic Breakdown

    The memory areas should not overlap. If there is a possibility that the 
    source and destination overlap in memory (e.g., shifting parts of an 
    array), memmove should be used instead of memcpy.

    Source Buffer       Limit (n)    Result in Destination
    "Hello"             3            "Hel"
    {10, 20, 30, 40}    2 * int      {10, 20}
    "Data\0Hidden"      11           "Data\0Hidden" (copies past null)
*/



#include <stdio.h>
#include <string.h>

int main() {
    printf("08 Characters And Strings: 05 String Handling Library \n");
    printf("-------------------------------------------------------- \n");

    // Example 1: Copying a string
    char source[] = "Copy this text";
    char destination[20];

    // Use memcpy to copy including the null terminator
    memcpy(destination, source, strlen(source) + 1);
    printf("Destination string: %s\n", destination);

    // Example 2: Copying a partial array
    int numbers[] = {1, 2, 3, 4, 5};
    int target[5] = {0};

    // Copy first 3 integers (3 * size of int)
    memcpy(target, numbers, 3 * sizeof(int));

    printf("Target array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", target[i]);
    }
    printf("\n");
    // Output: Target array: 1 2 3 0 0

    return 0;
}