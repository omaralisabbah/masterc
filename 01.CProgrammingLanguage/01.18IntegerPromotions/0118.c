/*
    01 C Programming Language: 18 Integer Promotions

    Integer promotions in C: Occurs when we do operations on any variable has data type of (char) or (short int ).

    Some data types like char, short int take less number of bytes than int,
    these data types are automatically promoted to int or unsigned int when an operation is performed on them.

    Note :
    [1] The "NumberOne" and "NumberTwo" have the same binary representation as char but when comparison operation
        is performed on "NumberOne" and "NumberTwo", they are first converted to (int).
    [2] The "NumberOne" is a signed char, when it is converted to int, its value becomes -5 (signed value of 0xfb).
    [3] The "NumberTwo" is unsigned char, when it is converted to int, its value becomes 251.
    [4] The values -5 and 251 have different representations as int, so we get the output as "No".
    [5] Integer promotions happens to avoid data overflow.


*/


#include <stdio.h>

char Var1 = 30, Var2 = 50, Var3 = 10;

char NumberOne = 0xFB;
unsigned char NumberTwo = 0xFB;

int main () {

    printf("01 C Programming Language: 18 Integer Promotions \n");
    printf("------------------------------------------------ \n");

    char Result = (Var1 * Var2) / Var3; // (Var1 * Var2) => Integer Promotion
    printf("Result = %i \n", Result);


    printf("------------------------------------------------ \n");

    printf("NumberOne = %c \n", NumberOne);
    printf("NumberTwo = %c \n", NumberTwo);

    if(NumberOne == NumberTwo) { // No ??
        printf("Yes \n");
    }
    else {
        printf("No \n");
    }

    return 0;
}