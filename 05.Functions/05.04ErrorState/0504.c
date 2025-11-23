/*
    05 Functions: 04 Error State

    Note :
    - Any function should return error state.
    - Any function have input, you should make validation on these parameters.

*/


#include <stdio.h>

unsigned int GettingSummation(unsigned int var1, unsigned int var2);

int main() {
    printf("05 Functions: 04 Error State \n");
    printf("---------------------------- \n");
    

    unsigned int ErrorState = 0;

    ErrorState = GettingSummation(2, 3);
    ErrorState |= GettingSummation(2, 7);
    ErrorState |= GettingSummation(1, 5);
    ErrorState |= GettingSummation(1, 1);
    printf("ErrorState = %i \n", ErrorState);
    return 0;
}


unsigned int GettingSummation(unsigned int var1, unsigned int var2) {

    unsigned int ErrorState = 0; // No Error 
    if((var1 > 5) || (var2 > 5)) {
        ErrorState = 1;
    }
    else {
        printf("Summing of two variables = %i \n", (var1 + var2));
    }

    return ErrorState;
}