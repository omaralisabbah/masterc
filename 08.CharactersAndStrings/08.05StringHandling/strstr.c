/*
    08 Characters And Strings: 05 String Handling Library

    The strstr Function

    The strstr (string in string) function is used to find the first 
    occurrence of an entire substring within a larger string.

    Function Descriptions

    1. strstr:
       Searches for the first occurrence of the string 's2' (the needle) 
       within the string 's1' (the haystack).

    How It Works
    Input:
        1. s1: The main string to be searched.
        2. s2: The substring to look for.

    Return Value:
        - A pointer to the first character of the first occurrence of s2 in s1.
        - NULL if the substring is not found.
        - If s2 points to an empty string, s1 is returned.

    Logic Breakdown

    strstr performs a sequence match. It doesn't just look for one 
    character; it looks for the exact pattern of characters in the 
    specified order. It is case-sensitive.

    Haystack (s1)          Needle (s2)      Result
    "C Programming"        "Program"        Pointer to 'P'
    "Green Apple"          "Red"            NULL
    "Banana"               "ana"            Pointer to the first 'a' (index 1)
*/



#include <stdio.h>
#include <string.h>

int main() {
    printf("08 Characters And Strings: 05 String Handling Library \n");
    printf("-------------------------------------------------------- \n");

    const char *haystack = "The quick brown fox jumps over the lazy dog";
    const char *needle = "brown";
    char *result;

    // Search for the word "brown"
    result = strstr(haystack, needle);

    if (result != NULL) {
        printf("Substring \"%s\" found at index: %ld\n", needle, result - haystack);
        printf("Full string from match point: \"%s\"\n", result);
    } else {
        printf("Substring not found.\n");
    }

    // Practical Use: Filtering data
    char email[] = "support@company.com";
    if (strstr(email, "@") != NULL && strstr(email, ".com") != NULL) {
        printf("\nThis appears to be a valid .com email address.\n");
    }

    return 0;
}