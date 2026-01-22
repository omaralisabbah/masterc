/*
    08 Characters And Strings: 03 String Conversion Library

    The strtod, strtol, and strtoul Functions

    These functions are part of the <stdlib.h> library. They are more 
    robust than older functions like atoi() or atof() because they provide 
    error checking and can handle strings containing both numbers and text.

    How It Works
    Input:
        1. nPtr: The string to convert.
        2. endPtr: A pointer to a pointer that will store the address 
           of the first character after the numerical part.
        3. base (for strtol/strtoul): The numerical base (e.g., 10 for decimal, 16 for hex).

    Function Descriptions:
        - strtod:  Converts a string to a double (floating-point).
        - strtol:  Converts a string to a long int (signed).
        - strtoul: Converts a string to an unsigned long int.

    Logic Breakdown

    The "endPtr" is the key feature. It allows you to see where the number 
    ended and where the remaining string began, which is vital for parsing 
    lists of numbers or handling trailing units.

    Function    Input String      Result Value     *endPtr Value
    strtod      "12.5% done"      12.5 (double)    "% done"
    strtol      "100 kg"          100 (long)       " kg"
    strtoul     "42 items"        42 (ulong)       " items"
*/



#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("08 Characters And Strings: 03 String Conversion Library \n");
    printf("-------------------------------------------------------- \n");

    // Example 1: strtod (String to Double)
    const char *doubleString = "98.54 percent";
    char *doubleEndPtr;
    double d = strtod(doubleString, &doubleEndPtr);
    printf("strtod: Converted value %.2f, Remaining string: \"%s\"\n", d, doubleEndPtr);

    // Example 2: strtol (String to Long with Base)
    const char *hexString = "0xFF is 255";
    char *hexEndPtr;
    // Base 0 automatically detects hex (0x) or octal (0)
    long l = strtol(hexString, &hexEndPtr, 0); 
    printf("strtol: Converted value %ld, Remaining string: \"%s\"\n", l, hexEndPtr);

    // Example 3: strtoul (String to Unsigned Long)
    const char *uLongString = "123456789 units";
    char *uLongEndPtr;
    unsigned long ul = strtoul(uLongString, &uLongEndPtr, 10);
    printf("strtoul: Converted value %lu, Remaining string: \"%s\"\n", ul, uLongEndPtr);

    return 0;
}