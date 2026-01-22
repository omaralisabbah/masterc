/*
    08 Characters And Strings: 05 String Handling Library

    The strerror Function

    The strerror function maps an error number (usually the global 'errno') 
    to a human-readable error message string. It is part of the <string.h> 
    library and is essential for debugging.

    Function Descriptions

    1. strerror:
       Returns a pointer to a string that describes the error code 'errnum'.

    How It Works
    Input:
        1. errnum: An integer representing the error code (often provided 
           by the system when a function fails).

    Return Value:
        - A pointer to a static string containing the error message. 
        - You should not modify this string.

    Logic Breakdown

    When a system call (like opening a file or allocating memory) fails, 
    it sets a global variable called 'errno'. Because numbers like "2" 
    or "13" aren't helpful to users, strerror converts them into 
    understandable phrases like "No such file or directory".

    Error Code (errno)    Message Returned by strerror
    1 (EPERM)             "Operation not permitted"
    2 (ENOENT)            "No such file or directory"
    12 (ENOMEM)           "Cannot allocate memory"
    13 (EACCES)           "Permission denied"
*/



#include <stdio.h>
#include <string.h>
#include <errno.h> // Required for the global errno variable

int main() {
    printf("08 Characters And Strings: 05 String Handling Library \n");
    printf("-------------------------------------------------------- \n");

    // Example 1: Manually checking common error codes
    printf("Error code 2 means: %s\n", strerror(2));
    printf("Error code 13 means: %s\n", strerror(13));

    // Example 2: Practical use with file I/O
    FILE *file = fopen("non_existent_file.txt", "r");

    if (file == NULL) {
        // If fopen fails, it sets 'errno' automatically
        printf("\nFailed to open file! \n");
        printf("System Error [%d]: %s\n", errno, strerror(errno));
    } else {
        fclose(file);
    }

    return 0;
}