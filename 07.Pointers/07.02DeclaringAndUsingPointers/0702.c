/*
    07 Pointers: 02 Declaring and Using Pointers

    Differnces Between Pointer and Variables :
    -

    Note :
    [1] Pointer and variable that pointer is pointing to, should be have the same data type.
    [2] Address of the first byte of the variable that is pointed to.
*/


#include <stdio.h>

unsigned int NumberOne = 41;
unsigned int NumberTwo = 41;

unsigned short var1 = 63;
unsigned short var2 = 13;

unsigned int* Ptr1;
unsigned int* Ptr2;
unsigned int* Ptr3;

int main() {

    printf("07 Pointers: 02 Declaring and Using Pointers \n");
    printf("-------------------------------------------- \n");

    Ptr1 = &NumberOne;
    printf("NumberOne Value   = %i \n", NumberOne);
    printf("NumberOne Address = 0x%X \n", Ptr1);
    printf("NumberOne Address = 0x%X \n", &NumberOne); // Location of the first byte of the variable
    printf("NumberOne Address = %i \n", *(&NumberOne)); // The value that is stored in this location
    printf("NumberOne Address = %i \n", *(Ptr1));

    printf("-------------------------------------------- \n");

    Ptr1 = &NumberTwo; // overwrite the value in pointer (address)
    printf("NumberTwo Address = 0x%X \n", Ptr1);

    printf("-------------------------------------------- \n");

    Ptr2 = &var1;
    printf("var1 Address = 0x%X \n", Ptr2); // two bytes
    Ptr2 = &var2;
    printf("var2 Address = 0x%X \n", Ptr2);

    return 0;
}