/*
    08 Characters And Strings: 05 String Handling Library

    The strncmp Function

    The strncmp (string numbered compare) function is the safer version of 
    strcmp. It compares two strings but only up to a specified number of 
    characters.

    Function Descriptions

    1. strncmp:
       Compares up to 'n' characters of string 's1' to string 's2'.

    How It Works
    Input:
        1. s1: Pointer to the first string.
        2. s2: Pointer to the second string.
        3. n: The maximum number of characters to compare.

    Return Value:
        - 0: If the first 'n' characters are identical.
        - Positive value (>0): If s1 is greater than s2 within the first 'n' chars.
        - Negative value (<0): If s1 is less than s2 within the first 'n' chars.

    Logic Breakdown

    strncmp is ideal for comparing prefixes or for preventing the function 
    from reading too far into memory if a string is missing its null terminator.

    String 1      String 2      Limit (n)   Result        Reason
    "Apple"       "Apply"       3           0             "App" == "App"
    "Apple"       "Apply"       4           Negative      'e' < 'y'
    "Banana"      "Band"        3           0             "Ban" == "Ban"
*/



#include <stdio.h>
#include <string.h>

int main() {
    printf("08 Characters And Strings: 05 String Handling Library \n");
    printf("-------------------------------------------------------- \n");

    const char *s1 = "Test_File_01.txt";
    const char *s2 = "Test_File_02.txt";

    // 1. Compare the first 10 characters to see if they are in the same category
    if (strncmp(s1, s2, 10) == 0) {
        printf("Both files start with \"Test_File_\".\n");
    }

    // 2. Full comparison would show they are different
    if (strcmp(s1, s2) != 0) {
        printf("The full filenames are different.\n");
    }

    // 3. Security: Check if a command starts with "sudo"
    char command[] = "sudo format C:";
    if (strncmp(command, "sudo", 4) == 0) {
        printf("\nSecurity Warning: This command requires admin privileges.\n");
    }

    return 0;
}