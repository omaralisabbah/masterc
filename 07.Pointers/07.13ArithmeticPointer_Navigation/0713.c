/*
    07 Pointers: 13 Arithmetic Pointer Navigation

    Post/Pre increment effects on arithmetic pointers

    Notes :

    [1] Post increment for pointer, means just posting pointer it self (Value that pointing to).
    [2] (Ptr++) Incrementing pointer it self.
    [3] Incrementing with the number of bytes equal to pointer size.

*/



#include <stdio.h>
#include <stdlib.h>

unsigned int Numbers[5] = {0xAABBCCDD,0x11223344,0x55,0x66,0x77};
unsigned int *PtrNumbers = NULL;
unsigned int *Ptr = NULL;

int main()
{
    printf("07 Pointers: 13 Arithmetic Pointer Navigation \n");
    printf("--------------------------------------------- \n");
    // [1] Post increment
    printf("--------------------------------------------+ \n");
    PtrNumbers = &Numbers[0]; /* Ptr -> 0xAABBCCDD */
    Ptr = &Numbers[0]; /* Ptr -> 0xAABBCCDD */

    printf("Value = 0x%X \n", *Ptr);        /* 0xAABBCCDD */
    printf("Value = 0x%X \n", *PtrNumbers); /* 0xAABBCCDD */

    Ptr = PtrNumbers++;

    printf("Value = 0x%X \n", *Ptr); /* 0xAABBCCDD */
    printf("Value = 0x%X \n", *PtrNumbers); /* 0x11223344 */


    printf("--------------------------------------------- \n");


    PtrNumbers = &Numbers[0];
    Ptr = &Numbers[0];

    printf("Value = 0x%X \n", *Ptr);        /* 0xAABBCCDD */
    printf("Value = 0x%X \n", *PtrNumbers); /* 0xAABBCCDD */

    printf("Value = 0x%X \n", Ptr);        /* 0xAABBCCDD */
    printf("Value = 0x%X \n", PtrNumbers); /* 0xAABBCCDD */


    // 1. Assignment  (Ptr = *PtrNumbers)
    // 2. Incremented (PtrNumbers++)
    Ptr = *PtrNumbers++;

    printf("Value = 0x%X \n", Ptr);        /* 0xAABBCCDD */
    printf("Value = 0x%X \n", PtrNumbers); /* 0xAABBCCDD */

    // printf("Value = 0x%X \n", *Ptr);  /* Access Invalid Address*/
    printf("Value = 0x%X \n", *PtrNumbers); /* 0x11223344 */


    printf("--------------------------------------------- \n");


    PtrNumbers = &Numbers[0];
    Ptr = &Numbers[0];

    printf("Value = 0x%X \n", *Ptr);        /* 0xAABBCCDD */
    printf("Value = 0x%X \n", *PtrNumbers); /* 0xAABBCCDD */

    printf("Value = 0x%X \n", Ptr);
    printf("Value = 0x%X \n", PtrNumbers);

    // 1. Ptr = *PtrNumbers
    // 2. PtrNumbers++
    Ptr = *(PtrNumbers++);

    printf("Value = 0x%X \n", Ptr);        /* 0xAABBCCDD */
    printf("Value = 0x%X \n", PtrNumbers); /* 0x11223344 */

    /* printf("Value = 0x%X \n", *Ptr); */  /* Access Invalid Address = 0xAABBCCDD */
    printf("Value = 0x%X \n", *PtrNumbers); /* 0x11223344 */


    printf("--------------------------------------------- \n");


    PtrNumbers = &Numbers[0];
    Ptr = &Numbers[0];

    printf("Value = 0x%X \n", *Ptr);
    printf("Value = 0x%X \n", *PtrNumbers);

    printf("Value = 0x%X \n", Ptr);
    printf("Value = 0x%X \n", PtrNumbers);

    // 1. (*Ptr)
    // 2. NumberOne = (*Ptr)
    // 3. (*Ptr)++
    unsigned int NumberOne = (*Ptr)++;

    printf("Value = 0x%X \n", NumberOne);  /* 0xAABBCCDD */
    printf("Value = 0x%X \n", Numbers[0]); /* 0xAABBCCDE */

    printf("Value = 0x%X \n", Ptr);        /* 0x404010 */
    printf("Value = 0x%X \n", *Ptr);       /* 0xAABBCCDE */

    printf("--------------------------------------------- \n");
    // [2] Pre increment
    printf("--------------------------------------------+ \n");


    PtrNumbers = &Numbers[0];
    Ptr        = &Numbers[0];

    printf("Value = 0x%X \n", *Ptr);        /* 0xAABBCCDD */
    printf("Value = 0x%X \n", *PtrNumbers); /* 0xAABBCCDD */

    PtrNumbers = ++Ptr;

    printf("Value = 0x%X \n", *PtrNumbers); /* 0x11223344 */
    printf("Value = 0x%X \n", *Ptr);        /* 0x11223344 */

    // 1. ++Ptr     // 2. *++Ptr
    PtrNumbers = *++Ptr; // PtrNumbers Pointing to next address value 0x11223344

    printf("Value = 0x%X \n", Ptr);        /* 0x404018 */
    printf("Value = 0x%X \n", PtrNumbers); /* 0x55 */

    // printf("Value = 0x%X \n", *Ptr);        /* Access Invalid Address */
    // printf("Value = 0x%X \n", *PtrNumbers); /* 0x11223344 */


    printf("-------------------------------------------++ \n");


    // PtrNumbers = &Numbers[0]; /* PtrNumbers -> 0xAABBCCDD */
    // Ptr        = &Numbers[0]; /* Ptr        -> 0xAABBCCDD */

    // printf("Value = 0x%X \n", *Ptr);        /* 0xAABBCCDD */
    // printf("Value = 0x%X \n", *PtrNumbers); /* 0xAABBCCDD */

    // printf("\tValue = 0x%X \n", Ptr);        /*  */
    // printf("\tValue = 0x%X \n", PtrNumbers); /*  */

    // Ptr = *++PtrNumbers; /* Ptr = 0x11223344 */
    // Ptr = *(++PtrNumbers); /* Ptr = 0x11223344 */
    // Ptr = ++(*PtrNumbers);

    // printf("Value = 0x%X \n", Ptr);         /* 0x11223344 */
    // printf("Value = 0x%X \n", PtrNumbers);  /*  */
    // printf("Value = 0x%X \n", *Ptr);        /* Access Invalid Address */
    // printf("Value = 0x%X \n", *PtrNumbers); /* 0x11223344 */

    return 0;
}
