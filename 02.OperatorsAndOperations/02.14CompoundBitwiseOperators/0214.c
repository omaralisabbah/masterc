/*
    02 Operators And Operations: 14 Compound Bitwise Operators

    There is three important actions for bitwise operators you always need

    [1] Clear   : [ Variable &= (1 << Bit_Position); ] (Bit_position is the bit index that you want to clear)
    [2] Set     : [ Variable |= (1 << Bit_Position); ] (Bit_position is the bit index that you want to set)
    [3] Toggle  : [ Variable ^= (1 << Bit_Position); ] (Bit_position is the bit index that you want to toggle)

    - Any Bit in a 8/16/32 bit memory is to use this method

        - The most right bit is (bit with index 0) => (Least Significant Bit)
        - The most Left bit is (bit with index 7 or 15 or 31 according to memory) => (Most Significant Bit)




*/


#include <stdio.h>

unsigned VariableOne = 0xFF;
unsigned VariableTwo = 0x00;
unsigned VariableThree = 0xFF;

int main () {
    printf("02 Operators And Operations: 14 Compound Bitwise Operators \n");
    printf("---------------------------------------------------------- \n");

    // [1] Clear 
    printf("Variable One = 0x%X \n", VariableOne); // 0xFF = 1111 1111
    VariableOne &= (1 << 0);
    VariableOne &= (1 << 2);
    VariableOne &= (1 << 4);
    VariableOne &= (1 << 6);
    printf("Variable One = 0x%X \n", VariableOne); // 0x0 = 0000 0000

    printf("---------------------------------------------------------- \n");

    // [2] Set 
        printf("Variable Two = 0x%X \n", VariableTwo); // 0x00 = 0000 0000
    VariableTwo |= (1 << 0);
    VariableTwo |= (1 << 2);
    VariableTwo |= (1 << 4);
    VariableTwo |= (1 << 6);
    printf("Variable Two = 0x%X \n", VariableTwo); // 0x55 = 0101 0101

    printf("---------------------------------------------------------- \n");

    // [3] Toggle
    printf("Variable Three = 0x%X \n", VariableThree); // 0xFF = 1111 1111
    VariableThree ^= (1 << 0);
    VariableThree ^= (1 << 2);
    VariableThree ^= (1 << 4);
    VariableThree ^= (1 << 6);
    printf("Variable Three = 0x%X \n", VariableThree); // 0xAA = 1010 1010

    return 0;
}