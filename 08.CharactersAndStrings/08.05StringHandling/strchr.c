/*
    08 Characters And Strings: 05 String Handling Library

    The strchr Function

    The strchr function is used to search for the first occurrence of a 
    specific character within a string.

    Function Descriptions

    1. strchr:
       Searches for the first occurrence of the character 'c' (converted 
       to a char) in the string pointed to by 's'.

    How It Works
    Input:
        1. s: The null-terminated string to be searched.
        2. c: The character to look for (passed as an int).

    Return Value:
        - A pointer to the first occurrence of the character in the string.
        - NULL if the character is not found.

    Logic Breakdown

    The search includes the terminating null character; therefore, strchr 
    can be used to locate the end of a string by searching for '\0'. 
    It scans the string from left to right.

    String              Search Char    Result
    "Programming"       'g'            Pointer to the first 'g'
    "Apple"             'z'            NULL
    "Coffee"            'e'            Pointer to the first 'e' (index 4)
*/



#include <stdio.h>
#include <string.h>

int main() {
    printf("08 Characters And Strings: 05 String Handling Library \n");
    printf("-------------------------------------------------------- \n");

    const char *phrase = "Standard Template Library";
    char target = 'T';
    char *result;

    // Find first occurrence of 'T'
    result = strchr(phrase, target);

    if (result != NULL) {
        printf("Character '%c' found at index: %ld\n", target, result - phrase);
        printf("String starting from that point: \"%s\"\n", result);
    } else {
        printf("Character '%c' not found.\n", target);
    }

    // Practical use: Finding the file extension
    const char *filename = "report.pdf";
    char *extension = strchr(filename, '.');

    if (extension != NULL) {
        printf("\nFilename: %s\n", filename);
        printf("Extension: %s\n", extension);
    }

    return 0;
}