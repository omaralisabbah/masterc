/*
    14 Preprocessor : 05 Macros
   
    Text Replacement (Has no brain) just copy & past

    Macro to expression

    Multiline macros

    Macro function
    - function take two parameter regardless their datatype


*/


#include <stdio.h>
#include "macros.h"

// comparing with macro function
unsigned int Summing(unsigned num1, unsigned num2) {
    return  num1 + num2;
}

int main() {

    printf("14 Preprocessor : 05 Macros\n");
    printf("-------------------------- \n");

    float variable = (2 * 3) - PI_VALUE;
    float variable1 = (2 * 3) + EXECUTE_ALGORITHM;
    float variable2 = (2 * 3) + value;
        
    printf("%s \n", MY_NAME);
    printf("SUMMATION = %i \n", SUMMATION(2, 1));
    printf("SUMMATION = %0.2f \n", SUMMATION(2.5, 1.52));

    printf("-------------------------- \n");

    // no waring vs warning and error
    printf("Summing = %i \n", Summing(2, 2));
    printf("Summing = %i \n", SUMMATION('2', 2));

    printf("-------------------------- \n");

    // Code Dublication which make your program more biger in size and lines of code
    // not recommended at all
    unsigned int x = 2, y = 53;
    printf("x = %i \t y = %i \n", x, y);
    SWAP(&x, &y);
    printf("x = %i \t y = %i \n", x, y);
    SWAP(&x, &y);
    printf("x = %i \t y = %i \n", x, y);
    SWAP(&x, &y);
    printf("x = %i \t y = %i \n", x, y);
    SWAP(&x, &y);
    printf("x = %i \t y = %i \n", x, y);

    printf("-------------------------- \n");

    // unsigned int Number = 0x01;
    // printf("Value = %i \n", Number); // 1
    // Number |= (1 << 1);
    // SET_BIT(Number, 1);
    // printf("Value = %i \n", Number); // 3
    // CLEAR_BIT(Number, 1);
    // printf("Value = %i \n", Number); // 1
    // TOGGLE_BIT(Number, 1);
    // printf("Value = %i \n", Number); // 3

    printf("-------------------------- \n");

    printf("Square1 = %i \n", SQUARE_DEFINE_PROBLEM1(2 + 1)); // 2+1 * 2+1          = 5
    printf("Square2 = %i \n", SQUARE_DEFINE_PROBLEM2(2 + 1)); // (2+1 * 2+1)        = 5
    printf("Square3 = %i \n", SQUARE_DEFINE_PROBLEM3(2 + 1)); // (2+1) * (2+1)      = 9
    printf("Square4 = %i \n", SQUARE_DEFINE_PROBLEM4(2 + 1)); // ((2+1) * (2+1))    = 9

    return 0;
}