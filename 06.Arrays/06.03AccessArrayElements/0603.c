/*
    06 Arrays: 03 Access Array Elements

    How to access to Single dimensional Array (1D) Element :

    There is an equation : Array[x] = (address of firs element) + (x * size of element)

    Note :
    [1] The time for reaching any element of array always constant.
    [2] So this explain why arrays are the fastest type of data structure.

*/

#include <stdio.h>
#pragma warning(disable:4996)

unsigned int ArrayOfElements[5] = { 0x11,
                                   0x12,
                                   0x13,
                                   0x14,
                                   0x15 };

unsigned int NumberOne = 0x52;

int main() {
    printf("06 Arrays: 03 Access Array Elements \n");
    printf("----------------------------------- \n");

    unsigned int ElementsNumber = 0;
    for (ElementsNumber = 0; ElementsNumber < 5; ElementsNumber++)
    {
        printf("Elements Out : 0x%X \n", ArrayOfElements[ElementsNumber]);
    }

    printf("----------------------------------- \n");

    // Updating elements value.
    for (ElementsNumber = 0; ElementsNumber < 5; ElementsNumber++)
    {
        scanf("%i", &ArrayOfElements[ElementsNumber]);
    }

    printf("----------------------------------- \n");

    for (ElementsNumber = 0; ElementsNumber < 5; ElementsNumber++)
    {
        printf("Elements as input : 0x%X \n", ArrayOfElements[ElementsNumber]);
    }

    printf("----------------------------------- \n");

    unsigned int SumOfElements = 0;
    for (ElementsNumber = 0; ElementsNumber < 5; ElementsNumber++)
    {
        SumOfElements += ArrayOfElements[ElementsNumber];
    }

    printf("Sum Of Elements : %i \n", SumOfElements);
    // etc...


    return 0;
}
