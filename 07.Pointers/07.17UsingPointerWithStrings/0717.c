/*
    07 Pointers: 17 Using Pointer With Strings

    A string may be declared using a pointer just like it was with a char array,
    But now we use a pointer variable.

    The string may be initialized when its declared, or it may assigned later.

    Note : VI
    [1] Const qualifier prevent program form crashing (error before building)
    [2] You can change the address of the const pointer that is pointing to,
    but your previous data will be lost.

    [3] You can solve the problem above by making the the value inside the pointer is const.
*/



#include <stdio.h>
#include <stdlib.h>

unsigned int NumberOne = 55;
unsigned int* Ptr = &NumberOne;

// Not Recommended
char* Message1 = "omaralisabbah"; // Location of string stored in pointer location

// Recommended
char MyName[] = "omaralisabbah";

int main()
{
    printf("07 Pointers: 17 Using Pointer With Strings \n");
    printf("------------------------------------------ \n");

    // const prevent program form crashing
    const char* const Message2 = "EmbeddedSystems";

    printf("Val = 0x%X \n", Ptr);
    printf("Val = 0x%X \n", &Message1); // Pointer Address
    printf("Val = 0x%X \n", Message1); // Address stored in pointer
    printf("Message1 = %s \n", Message1); // String Content

    printf("------------------------------------------ \n");

    printf("MyName = %s \n", MyName);
    //*Message2 = 'W'; // Stored in Read only memory location
    MyName[0] = 'O';
    printf("MyName = %s \n", MyName);

    printf("------------------------------------------ \n");

    // We did not change the value of the message1
    printf("Message1 = %s \n", Message1);
    printf("Message1 = %s \n", (Message1 + 6)); // Address + 5
    printf("Message1 = %c \n", *(Message1 + 6)); // Access memory location
    printf("Message1 = %c \n", *(Message1 + 7)); // Access one byte of memory location
    // printf("Message1 = %s \n", *(Message1 + 7)); // Crash (access memory location)

    return 0;
}