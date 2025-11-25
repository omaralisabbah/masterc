/*
    06 Arrays: 12 Array of Pointers

*/



#include <stdio.h>
#include <stdlib.h>

unsigned int Arr_Number1[3] = { 11, 22, 33 };
unsigned int Arr_Number2[3] = { 44, 55, 66 };
unsigned int* const PtrArr[2] = { &Arr_Number1[0], &Arr_Number2[0] };

int main()
{
    printf("06 Arrays: 12 Array of Pointers \n");
    printf("------------------------------- \n");

    printf("Value = %i\n", *(PtrArr[0] + 0));
    printf("Value = %i\n", *(PtrArr[0] + 1));
    printf("Value = %i\n", *(PtrArr[0] + 2));
    printf("Value = %i\n", *(PtrArr[0] + 2));

    printf("Value = %i\n", *PtrArr[1]);
    printf("Value = %i\n", *(PtrArr[1] + 2));

    //You are trying to change const data

    /* We can't change the PtrArr[0] (const) */
    // printf("Value = %i\n", *(++PtrArr[0]));

    /* We can't change the PtrArr[0] */
    // printf("Value = %i\n", *(--PtrArr[0]));


    return 0;
}