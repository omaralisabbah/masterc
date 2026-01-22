/*
    08 Characters And Strings: 05 String Handling Library

    The strcspn Function

    The strcspn (string complementary span) function is used to find the 
    length of the initial segment of a string that consists entirely of 
    characters NOT present in a specified set.

    Function Descriptions

    1. strcspn:
       Returns the number of characters at the beginning of 's1' that 
       do not match any character in 's2'.

    How It Works
    Input:
        1. s1: The string to be searched.
        2. s2: The string containing the characters to look for (the "reject" set).

    Return Value:
        - The length of the initial segment of s1 that contains no 
          characters from s2. 
        - If no characters match, it returns the full length of s1.

    Logic Breakdown

    Think of strcspn as "Search until you hit any of these." It is 
    extremely useful for finding the first occurrence of any symbol 
    or punctuation in a string.

    String (s1)      Reject Set (s2)   Result    Reason
    "Hello"          "aeiou"           1         'e' is at index 1
    "123-456"        "-"               3         '-' is at index 3
    "Price: $5"      "0123456789"      8         '5' is at index 8
*/



#include <stdio.h>
#include <string.h>

int main() {
    printf("08 Characters And Strings: 05 String Handling Library \n");
    printf("-------------------------------------------------------- \n");

    const char *path = "/usr/local/bin/python3";
    const char *delimiters = "/.";

    // 1. Find the first occurrence of either '/' or '.'
    size_t pos = strcspn(path, delimiters);
    printf("String: %s\n", path);
    printf("First delimiter found at index: %zu\n", pos);

    // 2. Practical Use: Cleaning a string from fgets
    // fgets often keeps the newline character '\n'. 
    // strcspn can find and help remove it.
    char input[50] = "User Data\n"; 
    printf("\nBefore cleaning: [%s]", input);
    
    // Replace the first '\n' found with a null terminator
    input[strcspn(input, "\n")] = '\0';
    
    printf("After cleaning:  [%s]\n", input);

    return 0;
}