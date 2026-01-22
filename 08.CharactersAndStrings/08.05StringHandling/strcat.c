/*
    08 Characters And Strings: 05 String Handling Library

    The strcat Function

    The strcat (string concatenation) function is used to append a copy of 
    one string to the end of another string.

    Function Descriptions

    1. strcat:
       Appends the string pointed to by 'src' to the end of the string 
       pointed to by 'dest'.

    How It Works
    Input:
        1. dest: The destination string. It must already contain a 
           null-terminated string and have enough space to hold the result.
        2. src: The source string to be appended.

    Return Value:
        - A pointer to the destination string (dest).

    Logic Breakdown

    The function finds the null terminator ('\0') of the destination string 
    and begins overwriting it with the characters from the source string. 
    A new null terminator is automatically added at the very end.

    Warning: 
    It is the programmer's responsibility to ensure the destination buffer 
    is large enough. If it isn't, a buffer overflow will occur.

    Dest Buffer (size 20)    Src String    Resulting Dest
    "Hello "                 "World"       "Hello World"
    "C "                     "Lang"        "C Lang"
*/



#include <stdio.h>
#include <string.h>

int main() {
    printf("08 Characters And Strings: 05 String Handling Library \n");
    printf("-------------------------------------------------------- \n");

    // Destination must be large enough to hold both strings + '\0'
    char str1[50] = "Learn ";
    char str2[] = "C Programming";

    printf("String 1 before: %s\n", str1);
    printf("String 2 to append: %s\n", str2);

    // Concatenate str2 onto the end of str1
    strcat(str1, str2);

    printf("String 1 after strcat: %s\n", str1);
    
    // Example of multiple concatenations
    char path[100] = "C:";
    strcat(path, "\\Users\\");
    strcat(path, "Admin\\");
    strcat(path, "Desktop");

    printf("\nFull File Path: %s\n", path);
    // Output: Full File Path: C:\Users\Admin\Desktop

    return 0;
}