/*
    01 C Programming Language: 10 Integer Data Type
 
    In C programming, the int data type is used to store whole numbers (integers) without any decimal part.
    These can be positive, negative, or zero.

    Here are 10 key points about the int data type in C: 

    Keyword: The int data type is represented by the int keyword in C.

    Purpose: It is primarily used to store integer values, such as counts, quantities, ages, or any other whole number.

    Signed by default: By default, an int variable is considered signed, meaning it can store both positive and negative values.

    unsigned int: The unsigned keyword can be used with int to declare an unsigned int, which can only store non-negative values (zero and positive integers).
                  This effectively doubles the positive range compared to a signed int of the same size.

    Size: The size of an int (in bytes) is machine-dependent but is typically 2 or 4 bytes (16 or 32 bits). Modern systems commonly use 4 bytes.

    Range: The range of values an int can hold depends on its size. For a 4-byte (32-bit) signed int,
           the range is typically from -2,147,483,648 to 2,147,483,647. For an unsigned int of the same size,
           the range is from 0 to 4,294,967,295.

    Declaration: An integer variable is declared using the int keyword followed by the variable name.

    Initialization: Integer variables can be initialized at the time of declaration or later in the program.

    Format Specifier: When using functions like printf() and scanf() for input/output of integer values,
                      the %d format specifier is used for signed integers, and %u is used for unsigned integers.

    Integer Literals: Integer values can be expressed in decimal (base 10), octal (base 8, prefixed with 0),
                      or hexadecimal (base 16, prefixed with 0x or 0X).

*/



#include <stdio.h>

// Declaration
int age;
int count, quantity; // Declaring multiple variables

int main() {

    printf("01 C Programming Language: 10 Integer Data Type \n");
    printf("----------------------------------------------- \n");

    // Initialization
    int score = 100;
    int attempts;
    attempts = 5;

    printf("----------------------------------------------- \n");

    // Short is signed by default : Max +ve value is 32767.
    short numberOne = 34344;
    printf("Number One = %i \n", numberOne); // Printing numberOne -31192

    // Modifiy Short to be positive only.
    unsigned short numberTwo = 34344;
    printf("Number Two = %i \n", numberTwo); // Printing numberTwo 34344

    // number3 will not accept any -ve value.
    unsigned short numberThree = -4344;
    printf("Number Three = %i \n", numberThree); // Printing numberThree 61192

    return 0;
}