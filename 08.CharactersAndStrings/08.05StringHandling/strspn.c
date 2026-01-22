/*
    08 Characters And Strings: 05 String Handling Library

    The strspn Function

    The strspn (string span) function is used to find the length of the 
    initial segment of a string that consists entirely of characters 
    from a specific "allowed" set. 

    It is the opposite of strcspn.

    Function Descriptions

    1. strspn:
       Returns the number of characters at the beginning of 's1' that 
       match any character in 's2'.

    How It Works
    Input:
        1. s1: The string to be searched.
        2. s2: The string containing the "allowed" characters.

    Return Value:
        - The length of the initial segment of s1 that consists 
          solely of characters from s2.
        - Returns 0 if the first character of s1 is not in s2.

    Logic Breakdown

    Think of strspn as "Keep counting as long as the character is in this set." 
    As soon as it hits a character NOT in s2, it stops and returns the count.

    String (s1)      Allowed Set (s2)   Result    Reason
    "12345abc"       "0123456789"       5         Starts with 5 digits
    "  Hello"        " "                2         Starts with 2 spaces
    "Apple"          "aeiou"            0         'A' (caps) is not 'a'
*/



#include <stdio.h>
#include <string.h>

int main() {
    printf("08 Characters And Strings: 05 String Handling Library \n");
    printf("-------------------------------------------------------- \n");

    // Example 1: Extracting a numeric prefix
    const char *serialNumber = "998877-XY-Z";
    const char *digits = "0123456789";

    size_t len = strspn(serialNumber, digits);

    printf("Serial Number: %s\n", serialNumber);
    printf("Length of the numeric prefix: %zu\n", len);
    
    // We can use the length to print only the digits
    printf("Extracted ID: %.*s\n", (int)len, serialNumber);

    // Example 2: Skipping leading whitespace
    const char *input = "    Data starts here";
    size_t spaceCount = strspn(input, " \t\n\r");

    printf("\nOriginal string: \"%s\"\n", input);
    printf("Leading whitespace count: %zu\n", spaceCount);
    printf("Actual content: \"%s\"\n", input + spaceCount);

    return 0;
}