/*
    01 C Programming Language: 11 Floating Point Types

    The C programming language provides several floating-point types for representing real numbers,
    which are numbers that can have fractional parts. These types differ in their precision and range.
    
    The standard floating-point types in C are:

    float:
        This is the single-precision floating-point type.
        Typically uses 4 bytes of memory.
        Provides approximately 6-7 decimal digits of precision.
        Suitable for applications where memory usage is critical and high precision is not required.

    double:
        This is the double-precision floating-point type.
        Typically uses 8 bytes of memory.
        Provides approximately 15-17 decimal digits of precision.
        The most commonly used floating-point type in C for general-purpose calculations due to its balance of precision and performance.
        Most mathematical library functions operate on double values.

    long double:
        This is an extended-precision floating-point type.
        Its size can vary depending on the system architecture, often using 10 or 16 bytes.
        Offers higher precision than double, typically around 18-19 decimal digits.
        Used when extremely high precision is required for calculations.


    Type                    Storage Size                Value range                 Precision
    - float                 - 4 Bytes                   - 1.2E-38 to 3.4E+38        - 6 decimal places
    - double                - 8 Bytes                   - 2.3E-308 to 1.7E+308      - 15 decimal places
    - long double           - 8 Bytes                   - 3.4E-4932 to 1.1E+4932    - 19 decimal places

*/


#include <stdio.h>

float PI = 3.1456789;

int main() {

    printf("01 C Programming Language: 11 Floating Point Types \n");
    printf("-------------------------------------------------- \n");

    // Use sizeof() to know size the data types
    printf("The size of int: %d\n", sizeof(int));
    printf("The size of char: %d\n", sizeof(char));
    printf("The size of float: %d\n", sizeof(float));
    printf("The size of double: %d \n", sizeof(double));

    return 0;
}