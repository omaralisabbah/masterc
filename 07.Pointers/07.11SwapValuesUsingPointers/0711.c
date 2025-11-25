/*
    07 Pointers: 11 Swap Values Using Pointers

    Note :
    [1] The function method does not swapped the actual values of two variables
        but it took two copies and swapped them. (Call by value)

    [2] We need pointers to swap the actual variables values. (Call by reference)
*/



#include <stdio.h>
#include <stdlib.h>

unsigned int  NumberOne = 12;
unsigned short  NumberTwo = 51;

void SwapValuesWithoutPointers(unsigned int num1, unsigned int num2);
void SwapValuesWithPointers(unsigned int* PtrNum1, unsigned int* PtrNum2);

int main()
{
    printf("07 Pointers: 11 Swap Values Using Pointers \n");
    printf("------------------------------------------ \n");

    printf("NumberOne = %i \t NumberTwo = %i \n", NumberOne, NumberTwo);
    SwapValuesWithoutPointers(NumberOne, NumberTwo); // Call by value
    printf("NumberOne = %i \t NumberTwo = %i \n", NumberOne, NumberTwo);

    printf("------------------------------------------ \n");

    printf("NumberOne = %i \t NumberTwo = %i \n", NumberOne, NumberTwo);
    SwapValuesWithPointers(&NumberOne, &NumberTwo); // Call by reference
    printf("NumberOne = %i \t NumberTwo = %i \n", NumberOne, NumberTwo);


    return 0;
}


void SwapValuesWithoutPointers(unsigned int num1, unsigned int num2) {
    unsigned int temp = 0;
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("NumberOne = %i \t NumberTwo = %i \n", num1, num2);
}

void SwapValuesWithPointers(unsigned int* PtrNum1, unsigned int* PtrNum2) {
    unsigned int temp = 0;
    temp = *PtrNum1;
    *PtrNum1 = *PtrNum2;
    *PtrNum2 = temp;
    printf("NumberOne = %i \t NumberTwo = %i \n", NumberOne, NumberTwo);
}
