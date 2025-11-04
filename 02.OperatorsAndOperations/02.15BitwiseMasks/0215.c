/*
    02 Operators And Operations: 15 Masks

    In C programming, a mask (or bitmask) is an integer value used in conjunction with
    bitwise operators to selectively access, modify, or test specific individual bits within another integer variable.
    The mask acts like a stencil, where the '1' bits define the areas of interest, and the '0' bits "hide" or ignore the rest.


    Key Masking Operations
    By combining a mask with different bitwise operators, programmers can perform specific manipulations: 

    1. Setting a Bit (Turning ON)
    To ensure a specific bit is 1 while leaving others unchanged,
    use the Bitwise OR (|) operator with a mask that has a 1 at the desired position and 0 everywhere else. 
    Principle: Y | 1 = 1 and Y | 0 = Y

    2. Clearing a Bit (Turning OFF)
    To ensure a specific bit is 0 while leaving others unchanged,
    use the Bitwise AND (&) operator with a mask that has a 0 at the desired position and 1 everywhere else.
    This mask is usually created using the bitwise NOT (~) operator. 
    Principle: Y & 0 = 0 and Y & 1 = Y

    3. Toggling/Flipping a Bit
    To flip the state of a specific bit (0 to 1, or 1 to 0) without affecting others,
    use the Bitwise XOR (^) operator with a mask that has a 1 at the desired position and 0 everywhere else.
    Principle: Y ^ 1 = ~Y and Y ^ 0 = Y

    4. Checking/Extracting a Bit (Testing)
    To check the status of a specific bit, use the Bitwise AND (&) operator with a mask that has a 1 at the desired position.
    If the result is non-zero, the bit was set (1); if the result is zero, the bit was clear (0). 
*/


#include <stdio.h>

int main () {

    printf("02 Operators And Operations: 15 Masks \n");
    printf("------------------------------------- \n");

    // 1. Setting a Bit (Turning ON)
    unsigned char flags = 0b00000101; // 5 in decimal
    unsigned char mask = 0b00000100;  // Mask for the 3rd bit (1 << 2)

    flags |= mask; 
    // flags is now 0b00000101 | 0b00000100 = 0b00000101 (still 5) - bit was already set
    // If bit was 0: 0b00000001 | 0b00000100 = 0b00000101 (5)

    printf("------------------------------------- \n");

    // 2. Clearing a Bit (Turning OFF)
    unsigned char flags = 0b00000101; // 5 in decimal
    // Create a mask with 0 at bit 0: ~(0b00000001) which is 0b11111110
    unsigned char mask = ~0b00000001; 

    flags &= mask;
    // flags is now 0b00000101 & 0b11111110 = 0b00000100 (4 in decimal)

    printf("------------------------------------- \n");

    // 3. Toggling/Flipping a Bit
    unsigned char flags = 0b00000101; // 5 in decimal
    unsigned char mask = 0b00001000;  // Mask for the 4th bit (1 << 3)

    flags ^= mask; 
    // flags is now 0b00000101 ^ 0b00001000 = 0b00001101 (13 in decimal)

    printf("------------------------------------- \n");

    // 4. Checking/Extracting a Bit (Testing)
    unsigned char flags = 0b00000101;
    unsigned char mask = 0b00000100; // 1 << 2

    if (flags & mask) {
        printf("The 3rd bit is set (ON).\n");
    } else {
        printf("The 3rd bit is clear (OFF).\n");
    }

    return 0;
}