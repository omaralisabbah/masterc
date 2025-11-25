/*
    06 Arrays: 10 Access 1D Array Using Pointers

    Note :
    [1] Numbers++       => You trying to change address itself but,
        Numbers + 1     => You are trying to add one to the address to reach the +1 next address.
*/



#include <stdio.h>
#include <stdlib.h>

unsigned int Numbers[5] = { 11, 22, 33, 44, 55 };
unsigned int* Ptr = Numbers;

int main()
{
    printf("06 Arrays: 10 Access 1D Array Using Pointers \n");
    printf("-------------------------------------------- \n");

    printf("Adrress Numbers[0] = 0x%X \n", &Numbers[0]);
    printf("Adrress Numbers[0] = 0x%X \n", Numbers);
    printf("Adrress Numbers[0] = 0x%X \n", Ptr);

    Ptr++;
    printf("Adrress Numbers[0] = 0x%X \n", Ptr);
    //Numbers++; // Error (fixed Address)

    printf("-------------------------------------------- \n");

    printf("Numbers[0] = 0x%i \n", *Numbers);
    printf("Numbers[0] = 0x%i \n", *(Numbers + 1));

    printf("Numbers[0] = %i \n", *(Numbers + 0));
    printf("Numbers[1] = %i \n", *(Numbers + 1));
    printf("Numbers[2] = %i \n", *(Numbers + 2));
    printf("Numbers[3] = %i \n", *(Numbers + 3));
    printf("Numbers[4] = %i \n", *(Numbers + 4));

    return 0;
}