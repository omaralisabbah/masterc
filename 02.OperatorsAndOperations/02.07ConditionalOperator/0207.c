/*
    02 Operators And Operations: 07 Conditional Operator
    
    The conditional operator (?:) is a unique feature in C programming
    because it is the only operator that takes three operands (making it a ternary operator).
    It provides a concise, single-line shorthand for simple if-else statements. 

    Syntax : [ (Expression1) ? (Expression2) : (Expression3) ]
*/


#include <stdio.h>

unsigned short Variable1 = 1;
unsigned short Variable2 = 1;
unsigned short Result = 0;

int main() {

    printf("02 Operators And Operations: 07 Conditional Operator \n");
    printf("---------------------------------------------------- \n");

    Result = (Variable1 == Variable2) ? (0xDD) : (0x22);
    printf("Result = 0x%X \n", Result);

    Variable1 = 5;
    Result = (Variable1 == Variable2) ? (0xDD) : (0x22);
    printf("Result = 0x%X \n", Result);


    return 0;
}