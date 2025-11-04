/*
    02 Operators And Operations: 12 Bitwise Oberators

    Bitwise operators in C are used to perform operations
    directly on the individual bits (binary digits) of integer data types (like char, short, int, and long).

    These operators are commonly used in low-level programming, embedded systems, data compression, and encryption algorithms
    because they allow for precise control over data representation and are very efficient.

    And, Or Logical Bitwise Operators
    Types of Bitwise Operators : (Deals with binary values)

     
	Operator    Name	        Description
    &	        Bitwise AND	    Sets each bit to 1 if both corresponding bits are 1; otherwise, 0.
    |	        Bitwise OR	    Sets each bit to 1 if at least one of the corresponding bits is 1; otherwise, 0.
    ^	        Bitwise XOR	    Sets each bit to 1 if the corresponding bits are different (one is 0, the other is 1); otherwise, 0.
    ~	        Bitwise NOT	    Flips all the bits of its single operand (0 becomes 1, 1 becomes 0).
    <<	        Left Shift	    Shifts bits to the left by a specified number of positions, filling new positions with zeros.
    >>	        Right Shift	    Shifts bits to the right by a specified number of positions.

    Examples and Use Cases
    Bitwise operations are performed on the binary representation of numbers.
    If a = 6 (binary 0110) and b = 3 (binary 0011):

    Operation         Binary Result     Result Decimal 	    Description
    a & b	          0010	            2	                Only the second bit from the right is 1 in both a and b.
    a | b	          0111	            7	                The result has a 1 where either a or b had a 1.
    a ^ b	          0101	            5	                The result has a 1 where the bits were different.
    ~a	              ...11111001      -7(typically)	    Flips all bits. Result depends on the number's size and signedness.
    a << 1	          1100	            12	                Shifts all bits of a one position to the left (effectively a * 2).
    a >> 1	          0011	            3	                Shifts all bits of a one position to the right (effectively a / 2).

    Common Applications
    1. Bit Masking: Using & or \| with a predefined mask value is a standard method
    to check, set, or clear specific configuration flags within a single integer variable.
    
    2. Efficient Arithmetic: Left shift (<< n) is equivalent to multiplying by \(2^{n}\).
    Right shift (>> n) is equivalent to dividing by (2^n) (for positive integers).
*/


#include <stdio.h>

unsigned Number1 = 24;
unsigned Number2 = 14;
signed Number3 = -15;

unsigned char BtnState1 = 0x55; // 0101 0101

unsigned char BtnState2 = 0x00;

int main () {
    printf("02 Operators And Operations: 12 Bitwise Oberators \n");
    printf("------------------------------------------------- \n");

    printf("Result = %i\n", (Number1 && Number2));
    printf("Result = %i\n", (Number1 & Number2));

    printf("------------------------------------------------- \n");

    // Bit Manipulation (AND)
    BtnState1 = BtnState1 & 0b00001111; // 0000 to clear
    BtnState1 = BtnState1 & 0b00000000; // to clear the 8 bits
    printf("BtnState = 0x%X \n", BtnState1);

    printf("------------------------------------------------- \n");

    // Bit Manipulation (OR)
    printf("Please Enter BTN2 State : \n");
    scanf("%i", &BtnState2);

    if(BtnState2 == 1) {
        printf("Btn State is High \n");
        BtnState2 = BtnState2 | 0b00000001;
        printf("Btn State = 0x%X \n", BtnState2);
    }
    else if(BtnState2 == 0) {
        printf("Btn State is Low \n");
    }
    else {
        printf("Invalid State \n");
    }

    return 0;
}