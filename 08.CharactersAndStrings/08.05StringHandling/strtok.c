/*
    08 Characters And Strings: 05 String Handling Library

    The strtok Function

    The strtok (string token) function is used to break a string into a 
    series of "tokens" based on specific delimiter characters (like spaces, 
    commas, or tabs).

    Function Descriptions

    1. strtok:
       Sequentially retrieves tokens from a string 's1', separated by 
       characters contained in 's2'.

    How It Works
    Input:
        1. s1: The string to be broken into tokens. On the FIRST call, 
           pass the string. On SUBSEQUENT calls, pass NULL.
        2. s2: A string containing all characters to be treated as delimiters.

    Return Value:
        - A pointer to the start of the current token.
        - NULL if no more tokens are found.

    Logic Breakdown

    strtok modifies the original string by replacing every delimiter it 
    finds with a null terminator ('\0'). This is why it "remembers" its 
    place in the string between calls using an internal static pointer.

    Original String         Delimiters      Step-by-Step Result
    "Red,Green,Blue"        ","             1. "Red"
                                            2. "Green"
                                            3. "Blue"
*/



#include <stdio.h>
#include <string.h>

int main() {
    printf("08 Characters And Strings: 05 String Handling Library \n");
    printf("----------------------------------------------------- \n");

    // This string will be modified by strtok
    char data[] = "Username:Admin;Level:10;Status:Active";
    const char *delimiters = ":;";

    printf("Original data: %s\n\n", data);

    // 1. First call: pass the actual string
    char *token = strtok(data, delimiters);

    int count = 1;
    while (token != NULL) {
        printf("Token %d: %s\n", count++, token);

        // 2. Subsequent calls: pass NULL to continue where it left off
        token = strtok(NULL, delimiters);
    }

    /* Note: At this point, the 'data' array has been modified. 
       If you printed 'data' now, you would only see "Username".
    */

    return 0;
}