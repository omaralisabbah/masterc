/*
    02 Operators And Operations: 03 Assignment Operators
    
    Assignment operators in C are used to assign a value to a variable.
    The most basic assignment operator is the simple equal sign (=). 

    Additionally, C provides compound assignment operators
    that perform an arithmetic or bitwise operation before assigning the result back to the same variable. 

    Assignment Operators :
    
    [1] (=)    - assignment operator
    [2] (+=)   - add and assignment operator
    [3] (-=)   - subtract and assignment operator
    [4] (*=)   - multiply and assignment operator
    [5] (/=)   - divide and assignment operator
    [6] (%=)   - modulus and assignment operator

    [7] (>>=)  - right shift and assignment operator
    [8] (<<=)  - left shift and assignment operator

    [9] (&=)   - Bitwise AND assignment operator
    [10] (|=)  - Bitwise OR and assignment operator
    [11] (^=)  - Bitwise exclusive OR and assignment operator
    [12] (^=)  - Bitwise exclusive OR and assignment operator

    [13] ( sizeof() )  - Returns the size of a variable
    [14] ( & )  - Returns the address of a variable
    [15] ( * )  - Point to a variable
    [16] ( ?: )  - Conditional Expression


*/


#include <stdio.h>

unsigned short NumberOne = 1;
unsigned short NumberTwo = 1;
unsigned short Result = 0;


int main() {

    printf("02 Operators And Operations: 03 Assignment Operators \n");
    printf("---------------------------------------------------- \n");

    printf("Number One = %i \n", NumberOne);
    NumberOne = 5;  printf("Number One = %i \n", NumberOne);
    NumberOne += 1; printf("Number One = %i \n", NumberOne);

    NumberOne += NumberTwo; printf("Number One = %i \n", NumberOne);
    NumberOne -= NumberTwo; printf("Number One = %i \n", NumberOne);
    NumberOne *= NumberTwo; printf("Number One = %i \n", NumberOne);
    NumberOne /= NumberTwo; printf("Number One = %i \n", NumberOne);
    NumberOne %= NumberTwo; printf("Number One = %i \n", NumberOne);
    NumberOne = 1;

    printf("------------------------------------------------------ \n");

    NumberOne <<= NumberTwo; printf("Number One = %i \n", NumberOne);
    NumberOne = 4;
    NumberOne >>= NumberTwo; printf("Number One = %i \n", NumberOne);

    printf("------------------------------------------------------ \n");

    NumberOne = 0xAA; // 0b10101010
    NumberTwo = 0x55; // 0b01010101
    NumberOne &= NumberTwo; printf("Number One = 0x%X \n", NumberOne);

    NumberOne = 0xBB; // 0b10111011
    NumberTwo = 0x44; // 0b01000100
    NumberOne |= NumberTwo; printf("Number One = 0x%X \n", NumberOne);

    NumberOne = 0xCC; // 0b11001100
    NumberTwo = 0x33; // 0b00110011
    NumberOne |= NumberTwo; printf("Number One = 0x%X \n", NumberOne);

    return 0;
}