/*
    07 Pointers: 19 Pointer To Function

    A pointer to function in C is one of the most important pointer tools which
    often ignored and misunderstood by people.

    What is a function pointer or pointer to function ?

    - A function pointer is similar to the other pointers but the only difference is that
    it stores the address of a function instead of a variable.

    - Using the function pointer we can provide the run time building in C programming
    which resolves the many problems.

    Note :
    [1] () curly praces makes the difference between functon prototype and the pointer to function.
    [2] The function name is the address of the function
    [3] The function pointer can point to any function that have the same characteristics (declaration).

*/


#include <stdio.h>
#include <stdlib.h>

void Print_Word1(void);
void (*PtrFuncosh)(void) = NULL;

unsigned int Summation(unsigned int num1, unsigned int num2);
unsigned int (*SummationPtr)(unsigned int num1, unsigned int num2);

int main() {

    printf("07 Pointers: 19 Pointer To Function \n");
    printf("----------------------------------- \n");

    Print_Word1();
    PtrFuncosh = Print_Word1;
    PtrFuncosh();

    printf("----------------------------------- \n");

    unsigned int result = 0;

    result = Summation(2, 4);
    printf("Summartion = %i \n", result);

    SummationPtr = Summation;
    result = SummationPtr(7, 7);
    printf("SummartionPtr = %i \n", result);

    return 0;
}

void Print_Word1(void) {
    printf("omar ali sabbah \n");
}

unsigned int Summation(unsigned int num1, unsigned int num2) {
    return (num1 + num2);
}