/*
    07 Pointers: 14 Arithmetic Pointer Distance Between Elements

    This technique is useful when we need to calculate the number of bytes between the the two pointers.

    Note :
    [1] You can not use multiplication and division with pointer arithmetic.
    [2] It has no meaning.
*/



#include <stdio.h>
#include <stdlib.h>

unsigned short* Ptr = NULL;
unsigned int* Ptr0 = NULL;

unsigned short Numbers[10] = { 0x11,0x22,0x33,0x44,0x55,0x11,0x22,0x33,0x44,0x55 };
unsigned short* Ptr1 = NULL;
unsigned short* Ptr2 = NULL;

int main()
{
    printf("07 Pointers: 14 Arithmetic Pointer Distance Between Elements \n");
    printf("------------------------------------------------------------ \n");

    Ptr = &Numbers[0];
    printf("Ptr = 0x%X - Value = %X \n", Ptr, *Ptr);
    Ptr += 1;
    printf("Ptr = 0x%X - Value = %X \n", Ptr, *Ptr);
    Ptr += 1;
    printf("Ptr = 0x%X - Value = %X \n", Ptr, *Ptr);
    Ptr += 1;
    printf("Ptr = 0x%X - Value = %X \n", Ptr, *Ptr);
    Ptr += 1;
    printf("Ptr = 0x%X - Value = %X \n", Ptr, *Ptr);

    printf("------------------------------------------------------------ \n");

    Ptr0 = &Numbers[0];
    printf("Ptr = 0x%X - Value = %X \n", Ptr0, *Ptr0);
    Ptr0 += 1;
    printf("Ptr = 0x%X - Value = %X \n", Ptr0, *Ptr0);
    Ptr0 += 1;
    printf("Ptr = 0x%X - Value = %X \n", Ptr0, *Ptr0);
    Ptr0 += 1;
    printf("Ptr = 0x%X - Value = %X \n", Ptr0, *Ptr0);
    Ptr0 += 1;
    printf("Ptr = 0x%X - Value = %X \n", Ptr0, *Ptr0);

    printf("------------------------------------------------------------ \n");

    Ptr -= 1;
    printf("Ptr = 0x%X - Value = %X \n", Ptr, *Ptr);
    Ptr -= 1;
    printf("Ptr = 0x%X - Value = %X \n", Ptr, *Ptr);
    Ptr -= 1;
    printf("Ptr = 0x%X - Value = %X \n", Ptr, *Ptr);
    Ptr -= 1;
    printf("Ptr = 0x%X - Value = %X \n", Ptr, *Ptr);

    printf("------------------------------------------------------------ \n");

    Ptr1 = &Numbers[0];
    Ptr2 = &Numbers[9];
    printf("0x%X - 0x%X = %i \n", Ptr2, Ptr1, ((Ptr2 - Ptr1) + 1)); // Number of elements
    printf("0x%X \n", (Ptr2 - Ptr1));
    // printf("0x%X - 0x%X \n", (Ptr2 + Ptr1)); // Operand Error


    return 0;
}