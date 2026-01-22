/*
    08 Characters And Strings: 05 String Handling Library

    The strlen Function

    The strlen (string length) function is used to calculate the number 
    of characters in a string, excluding the terminating null character ('\0').

    Function Descriptions

    1. strlen:
       Computes the length of the string pointed to by 's'.

    How It Works
    Input:
        1. s: A pointer to a null-terminated string.

    Return Value:
        - The number of characters (of type size_t) preceding the 
          terminating null character.

    Logic Breakdown

    The function starts at the beginning of the string and increments a 
    counter for every character it encounters until it reaches the 
    null terminator. Because it stops *at* the '\0', the null byte is 
    never counted in the total length.

    String              Memory Representation           strlen Result
    "Hello"             'H' 'e' 'l' 'l' 'o' '\0'        5
    "C"                 'C' '\0'                        1
    "" (Empty)          '\0'                            0
    "A B"               'A' ' ' 'B' '\0'                3 (Space counts!)
*/



#include <stdio.h>
#include <string.h>

int main() {
    printf("08 Characters And Strings: 05 String Handling Library \n");
    printf("-------------------------------------------------------- \n");

    const char *message = "Learning C is fun!";
    
    // Get the length of the string
    // size_t is the recommended unsigned integer type for sizes
    size_t length = strlen(message);

    printf("The string: \"%s\"\n", message);
    printf("The length is: %zu characters\n", length);

    // Practical use: Checking if a string is empty
    char input[50] = "";
    if (strlen(input) == 0) {
        printf("\nThe input buffer is currently empty.\n");
    }

    // Practical use: Calculating buffer needs
    printf("To copy this, you need a buffer of size: %zu\n", length + 1);

    return 0;
}