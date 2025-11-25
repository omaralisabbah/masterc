/*
    07 Pointers: 04 Null Pointer Safety


    Null Type Long long (LL) 0x00000000

    Note :
    [1] Not initialized Pointers are Called Wild Pointer.
    [2] The behavior of uninitialized pointer is undefined because they point to some arbitrary memory location.
    [3] Wild pointers may cause program to crash or behave badly.
    [4] Generally, compilers warn about the wild pointer.


    How to avoid wild pointer ?
    - We can easily avoid the creation of wild pointer in our program.
    - We must initialize the pointer with some valid memory at the time of the pointer declaration.


*/


#include <stdio.h>

unsigned int NumberOne;

unsigned int* Ptr1 = &NumberOne;
unsigned int* Ptr3 = NULL;

int main()
{
    printf("07 Pointers: 04 Null Pointer Safety \n");
    printf("----------------------------------- \n");

    unsigned int NumberTwo = 0;
    // unsigned int* Ptr2; // Wild Pointer

    printf("Address = 0x%X \n", Ptr1); // random address (garbage value)
    //printf("Address = %i \n", *Ptr1); // Crash

    //printf("Address = 0x%X \n", Ptr2);
    //printf("Address = %i \n", *Ptr2);

    //*Ptr2 = 0;
    //printf("Address = %i \n", *Ptr2);

    Ptr3 = &NumberOne;
    *Ptr3 = 55;
    printf("Value = %i \n", *Ptr3);

    return 0;
}
