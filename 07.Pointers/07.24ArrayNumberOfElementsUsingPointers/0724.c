/*
    07 Pointers: 24 Array Number Of Elements Using Pointers

*/


#include <stdio.h>
#include <stdlib.h>

unsigned int Numbers[] = { 11, 22, 33, 44, 55 };
unsigned int* Ptr = &Numbers[0];

int main() {

    printf("07 Pointers: 24 Array Number Of Elements Using Pointers \n");
    printf("------------------------------------------------------- \n");

    printf("Size of Array   = %i \n", sizeof(Numbers));
    printf("Size of Numbers = %i \n", (sizeof(Numbers) / sizeof(Numbers[0])));

    printf("Value = %i \n", *Ptr);
    Ptr++;
    printf("Value = %i \n", *Ptr);

    printf("Value = %i \n", Numbers[0]);
    printf("Value = %i \n", *Numbers);
    printf("Value = %i \n", *(Numbers + 1));

    /* Address of the first element is =>
        Numbers
        &Numbers[0]
        (Numbers + 0)
    */

    // +1 = Moving 5 elements in memory equal to array size
    // +2 = Moving 10 elements in memory equal to 2 * array size.
    // etc..

    printf("Size of Numbers = %i \n", (*(&Numbers + 1) - Numbers));
    printf("Size of Numbers = %i \n", (&Numbers[4] - &Numbers[0]) + 1);


    return 0;
}
