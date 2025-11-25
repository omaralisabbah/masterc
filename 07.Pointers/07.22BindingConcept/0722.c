/*
    07 Functions: 22 Binding Concept

    Binding Concept
    - Associated the call of the function with the definition of that function
    - There are two types of binding : "Static binging", "Dynamic Binding"

    [1] Static Binding / Compile Time Binding / Early Binding

    - All the informations necessary in order to perform that association is available at compile time.
    - Association happening at compile time.
    - Happens by default, normal function call.
    - Makes our program run faster.


    [2] Dynamic Binding / Runtime Binding / Late Binding

    - All the informations necessary in order to perform that association is not available at compile time.
    - Association happening during run time.
    - Very flexible, decide which function definition to invoke at run time.
    - Makes our program run a little bit slower.

    Note :
    [1] To achieve the dynamic binding in C, The function pointer is the only way to achieve this.

*/


#include <stdio.h>
#include <stdlib.h>

void Print_Summing_1(unsigned int Num1, unsigned int Num2);
void Print_Summing_2(unsigned int Num1, unsigned int Num2);
void (*PtrSumming)(unsigned int, unsigned int) = NULL;

void Print_Summing(unsigned int Num1, unsigned int Num2, void (*Ptr_Sum)(unsigned int, unsigned int));

int main() {

    printf("07 Functions: 22 Binding Concept \n");
    printf("-------------------------------- \n");

    Print_Summing(2, 3, Print_Summing_1);
    Print_Summing(2, 23, Print_Summing_2);

    return 0;
}

void Print_Summing_1(unsigned int Num1, unsigned int Num2) {
    printf("Summing -> %i \n", (Num1 + Num2));
}

void Print_Summing_2(unsigned int Num1, unsigned int Num2) {
    printf("Summing => %i \n", (Num1 + Num2));
}

void Print_Summing(unsigned int Num1, unsigned int Num2, void (*Ptr_Sum)(unsigned int, unsigned int)) {
    Ptr_Sum(Num1, Num2);
}