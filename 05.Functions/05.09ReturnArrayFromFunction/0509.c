/*
    05 Functions: 09 Return Array From Function

    static is the key. :D

*/



#include <stdio.h>
#include <stdlib.h>

unsigned int* Return_Array(void);

int main()
{
    printf("05 Functions: 09 Return Array From Function \n");
    printf("------------------------------------------- \n");

    unsigned int* Ptr = NULL;
    unsigned int counter = 0;

    Ptr = Return_Array();

    for (counter = 0; counter < 5; counter++) {
        printf("Value = %i \n", *Ptr);
        Ptr++; // Incrementing Pointer (watch out)
    }

    printf("Last element ++ = %i \n", *Ptr);

    return 0;
}


unsigned int* Return_Array(void) {
    static unsigned int Numbers[5] = { 11, 12, 13, 14, 15 }; // using static is a must in case like this

    return &Numbers[0];
}