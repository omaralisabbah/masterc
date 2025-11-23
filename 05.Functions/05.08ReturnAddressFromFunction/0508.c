/*
    05 Functions: 08 Return Address From Function

    Note :
    [1] When you want to return address from function,
        make sure that the function variable is not stored in memory stack frame of the function.

    [2] You can solve this problem by initializing function parameter with static type.

*/



#include <stdio.h>
#include <stdlib.h>

unsigned int* ReturnAddressOne(void);
unsigned int* ReturnAddressTwo(void);

int main()
{
    printf("05 Functions: 08 Return Address From Function \n");
    printf("--------------------------------------------- \n");

    unsigned int* Ptr = NULL;

    Ptr = ReturnAddressOne();

    // Program May Crash may not, (Function stack frame deleted)
    printf("Value = 0x%X \n", Ptr);

    // Because you trying to access a location does not exist (Failed to store the value of the addresss)
    printf("Value = 0x%X \n", *Ptr);

    printf("--------------------------------------------- \n");

    /*Ptr = ReturnAddressTwo();
    printf("Value = 0x%X \n", Ptr);
    printf("Value = 0x%X \n", *Ptr);*/


    return 0;
}

unsigned int* ReturnAddressOne(void) { // function return address from data type unsigned int
    unsigned int NumberOne = 0x11; // use static
    printf("Value = 0x%X \n", &NumberOne);
    printf("Value = 0x%X \n", *(&NumberOne));

    return (&NumberOne);
}


unsigned int* ReturnAddressTwo(void) {
    static unsigned int NumberOne = 0x11;
    printf("Value = 0x%X \n", &NumberOne);
    printf("Value = 0x%X \n", *(&NumberOne));

    return (&NumberOne);
}