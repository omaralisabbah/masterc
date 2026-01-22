/*
    08 Characters And Strings: 05 String Handling Library

    The strcmp Function

    The strcmp (string compare) function is used to compare two null-terminated 
    strings lexicographically (based on the ASCII values of their characters).

    Function Descriptions

    1. strcmp:
       Compares the string 's1' to the string 's2' character by character.

    How It Works
    Input:
        1. s1: Pointer to the first string.
        2. s2: Pointer to the second string.

    Return Value:
        - 0: If both strings are identical.
        - Positive value (>0): If the first differing character in s1 is 
          greater than the corresponding character in s2.
        - Negative value (<0): If the first differing character in s1 is 
          less than the corresponding character in s2.

    Logic Breakdown

    The function stops at the first character that differs or when it 
    reaches a null terminator ('\0'). It is case-sensitive, meaning 
    'A' (ASCII 65) is not the same as 'a' (ASCII 97).

    String 1      String 2      Result        Why?
    "Apple"       "Apple"       0             Identical
    "Apple"       "Apply"       Negative      'e' < 'y'
    "Zebra"       "Apple"       Positive      'Z' > 'A'
    "apple"       "Apple"       Positive      'a' (97) > 'A' (65)
*/



#include <stdio.h>
#include <string.h>

int main() {
    printf("08 Characters And Strings: 05 String Handling Library \n");
    printf("-------------------------------------------------------- \n");

    const char *s1 = "Hello";
    const char *s2 = "Hello";
    const char *s3 = "Hello World";

    // 1. Comparing identical strings
    if (strcmp(s1, s2) == 0) {
        printf("\"%s\" and \"%s\" are identical.\n", s1, s2);
    }

    // 2. Comparing different strings
    int result = strcmp(s1, s3);
    if (result < 0) {
        printf("\"%s\" comes before \"%s\" lexicographically.\n", s1, s3);
    }

    // 3. User input validation example
    char password[20] = "Secret123";
    char input[20];

    printf("\nEnter password: ");
    scanf("%19s", input);

    if (strcmp(input, password) == 0) {
        printf("Access Granted!\n");
    } else {
        printf("Access Denied!\n");
    }

    return 0;
}