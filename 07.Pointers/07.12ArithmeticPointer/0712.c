/*
    07 Pointers: 12 Arithmetic Pointer

    How pointer arithmetic works ?

    Notes :

    - A pointer in c is an address, which is a numeric value.
    - Therefore, you can perform arithmetic operations on a pointer just as you can on a numeric value.
    - You need to understand that you can not use arithmetic operators with pointers.
    - Pointer arithmetic is slightly different form arithmetic we normally know.
    - This part has many tricky interview questions.
    - This part is highly depends on the architecture of the target (8/16/32 Bit).
    - This will affect the size of pointers and data types.

*/



#include <stdio.h>
#include <stdlib.h>

unsigned int NumberOne = 55;
unsigned int* Ptr1 = &NumberOne;

unsigned char NumberTwo = 15;
unsigned char* Ptr2 = &NumberOne;

int main()
{
    printf("07 Pointers: 12 Arithmetic Pointer \n");
    printf("---------------------------------- \n");

    printf("NumberOne Address = 0x%X \n", Ptr1);
    Ptr1 = Ptr1 + 1;
    printf("NumberOne Address = 0x%X \n", Ptr1);
    Ptr1 = Ptr1 + 1;
    printf("NumberOne Address = 0x%X \n", Ptr1);
    Ptr1 = Ptr1 + 1;
    printf("NumberOne Address = 0x%X \n", Ptr1);

    printf("---------------------------------- \n");

    printf("NumberTwo Address = 0x%X \n", Ptr2);
    Ptr2 = Ptr2 + 1;
    printf("NumberTwo Address = 0x%X \n", Ptr2);
    Ptr2 = Ptr2 + 1;
    printf("NumberTwo Address = 0x%X \n", Ptr2);
    Ptr2 = Ptr2 + 1;
    printf("NumberTwo Address = 0x%X \n", Ptr2);

    return 0;
}