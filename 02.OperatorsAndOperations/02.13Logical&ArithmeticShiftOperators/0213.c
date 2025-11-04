/*
    02 Operators And Operations: 13 Logical Shift Operators
    
    In C, the term "logical shift operator" refers specifically to how the standard bitwise shift
    operators (<< and >>) behave when used with unsigned integer types.

    C does not have dedicated >>> logical shift operators like some other languages (e.g., Java or C#); instead,
    the behavior of the standard shift operators is defined based on the data type of the operand being shifted.


    Logical Shift Behavior in C
    A logical shift is a bitwise operation that moves all bits of an operand left or right, filling
    the vacated positions with zeros, without regard to the value's sign. 

    1. Logical Left Shift (<<)
    Left shifting in C is always a logical shift for both signed and unsigned integers.
    The bits are shifted to the left, and the newly vacated positions on the right (Least Significant Bits) are filled with zeros.
        - Effect: Multiplies the number by powers of 2.
        - New bits: Zeros are filled in on the right.

    
    2. Logical Right Shift (>>)
    The >> operator acts as a logical right shift only when the operand is of an unsigned
    integer type (e.g., unsigned int, unsigned short, unsigned char).
        - Effect: Divides the number by powers of 2 (integer division).
        - New bits: Zeros are always filled in on the left (Most Significant Bits).

        
    Types of Bitwise Operators : (Deals with binary values)

    - >> - Shifting Right => Shifts each bit one place to the right

    Example :
        00011101 = 29
        00111010 = 58

    - << - Shifting Left  => Shifts each bit one place to the Left

    Example :
        00011101 = 29
        00111010 = 58

    Note :
    [1] After the shift, it has a denary value 58, which is exactly twice as much as its original value.
    [2] Binary shift has a binary numbers which has base 2. So if you shifted the value one time,
        you should Multiply the value of the variable to the base number. (29 * 2 = 58) etc..,
        If you shifted 3 times so the value know equal to ( 29 * 2 * 2) etc...





    Types of Bitwise Operators : (Deals with binary values)

    Arithmetic Shift :

    - With the aritmetic shift, the sign bit stays the same as the data shifts.
    - 0 for positive and 1 for negative

    Example :

    11111100 => -4
    11111110 => -2

    Note :
    [1] Negative numbers are rounded down, just like positive values.
        
        - If 3 is right shifted once, it gives 1 (because 1.5 rounded down to 1). 
        - If -3 is right shifted once, it gives -2 (because -1.5 rounded down to -2).

    [2] You don not need arithmetic shift left, because a logical shift left does exactly the same thing.


*/


#include <stdio.h>


unsigned int Number1 = 5;
unsigned int Number2 = 52;

unsigned char NumberOne = 0x5B;
unsigned char NumberTwo = 0x79;
unsigned char Result = 0;


int main () {

    printf("02 Operators And Operations: 13 Logical Shift Operators \n");
    printf("------------------------------------------------------- \n");
    
    // Shift Left
    printf("Result = %i \n", (Number1 << 1)); // 5 * 2 = 10
    printf("Result = %i \n", (Number1));

    printf("Result = %i \n", (Number1 << 2)); // 5 * 2 * 2 = 20
    printf("Result = %i \n", (Number1 << 3)); // 5 * 2 * 2 * 2 = 40

    printf("------------------------------------------------------- \n");

    // Arithmatic
    printf("Result = 0x%X \n", (NumberOne & NumberTwo));
    printf("Result = 0x%X \n", (NumberOne | NumberTwo));
    printf("Result = 0x%X \n", (NumberOne ^ NumberTwo));

    printf("Result = 0x%X \n", (~NumberOne));
    printf("Result = 0x%X \n", ~(NumberOne));

    NumberOne = 0x01; // 0x01 = 0b00000001

    printf("Result = 0x%X \n", (NumberOne << 1));
    printf("Result = 0x%X \n", (NumberOne << 2));

    NumberOne = 0x08; // 0x08 = 0b00001000

    printf("Result = 0x%X \n", (NumberOne >> 1));
    printf("Result = 0x%X \n", (NumberOne >> 2));
    
    return 0;
}