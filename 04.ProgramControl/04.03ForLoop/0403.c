/*
    04 Program Control: 03 For Loop

    A for loop executes a statement or block of statements until the given condition is true.



*/

#include <stdio.h>

unsigned short Counter = 0;

int main () {

    printf("04 Program Control: 03 For Loop \n");
    printf("------------------------------- \n");

    for(Counter = 1; Counter <= 20; Counter++) {
        printf("Unleach your power = %i \n", Counter);
    }

    for(Counter = 1; Counter <= 10;) {
        printf("Unleach your power = %i \n", Counter);
        ++Counter;
    }

    // Infinite Loop
    // for(;;) {

    // }

    return 0;
}