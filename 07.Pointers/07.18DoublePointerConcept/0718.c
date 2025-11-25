/*
    07 Pointers: 18 Double Pointer Concept

    When we define a pointer to point to another pointer location

    The first pointer is used to store the address of the variable and the second pointer
    is used to store the address of the first pointer.

*/



#include <stdio.h>
#include <stdlib.h>

unsigned int NumberOne = 0x110011;
unsigned int* PtrNumberOne = &NumberOne;
unsigned int** PtrPtrNumberOne = &PtrNumberOne;

int main()
{
    printf("07 Pointers: 18 Double Pointer Concept \n");
    printf("-------------------------------------- \n");

    printf("NumberOne Address        = 0x%X \n", &NumberOne);
    printf("PtrNumberOne Value       = 0x%X \n", PtrNumberOne);
    printf("NumberOne Value          = 0x%X \n", *PtrNumberOne);

    printf("-------------------------------------- \n");

    printf("PtrNumberOne Address     = 0x%X \n", &PtrNumberOne);
    printf("PtrNumberOne Value       = 0x%X \n", *(&PtrNumberOne)); // pointer address

    printf("-------------------------------------- \n");

    printf("PtrPtrNumberOne Value    = 0x%X \n", PtrPtrNumberOne); // Pointer Value
    printf("PtrPtrNumberOne Value    = 0x%X \n", *PtrPtrNumberOne); // Access NumberOne Address
    printf("PtrPtrNumberOne Value    = 0x%X \n", **PtrPtrNumberOne); // Access NumberOne Value

    return 0;
}