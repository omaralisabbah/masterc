/*
    07 Pointers: 21 Function Pointer As Paramter

    Note:
    [1] You can pass function to function as parameter just in case of function pointer.

*/


#include <stdio.h>
#include <stdlib.h>

void Print_Summing_1(unsigned int Num1, unsigned int Num2);
void Print_Summing_2(unsigned int Num1, unsigned int Num2);
void (*PtrSumming)(unsigned int, unsigned int) = NULL;

void Print_Summing(unsigned int Num1, unsigned int Num2, void (*Ptr_Funcosh)(unsigned int, unsigned int));

int main() {

    printf("07 Pointers: 21 Function Pointer As Paramter \n");
    printf("-------------------------------------------- \n");

    Print_Summing(2, 3, Print_Summing_1);
    Print_Summing(2, 23, Print_Summing_2);

    return 0;
}

void Print_Summing_1(unsigned int Num1, unsigned int Num2) {
    printf("Summing = %i \n", (Num1 + Num2));
}

void Print_Summing_2(unsigned int Num1, unsigned int Num2) {
    printf("Summing = %i \n", (Num1 + Num2));
}

void Print_Summing(unsigned int Num1, unsigned int Num2, void (*Ptr_Funcosh)(unsigned int, unsigned int)) {
    Ptr_Funcosh(Num1, Num2);
}