/*
    07 Pointers: 03 Pointer to Char


    Note :
    [1] The size of pointer in compiler always have have constant value for any data type.
    [2] The size of pointer depends on compiler and its arctechiture.


*/

#include <stdio.h>

unsigned int NumberOne = 0x11223344;

unsigned char* Ptr1; // point to data of size equal to unsigned char which equal to 1 byte
unsigned short* Ptr2; // point to data of size equal to unsigned short which equal to 2 byte
unsigned int* Ptr3; // point to data of size equal to unsigned int which equal to 4 byte

int main()
{
    printf("07 Pointers: 03 Pointer to Char \n");
    printf("------------------------------- \n");

    Ptr1 = &NumberOne;
    Ptr2 = &NumberOne;
    Ptr3 = &NumberOne;

    printf("Value = 0x%X \n", *Ptr1); // 0x44
    printf("Value = 0x%X \n", *Ptr2); // 0x3344
    printf("Value = 0x%X \n", *Ptr3); // 0x11223344

    printf("Size of Ptr1 = %i \n", sizeof(Ptr1)); // because the size of pointer in the same compiler always constant
    printf("Size of Ptr2 = %i \n", sizeof(Ptr2)); // no matter the datatype size which is pointing to.
    printf("Size of Ptr3 = %i \n", sizeof(Ptr3)); // (depending on architecture of the machine)


    return 0;
}
