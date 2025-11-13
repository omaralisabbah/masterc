/*
    04 Program Control: 05 While Loop

    The while statement executes a statement or block of statements until the given condition is true.

*/

#include <stdio.h>

unsigned short Counter = 0;

int main () {

    printf("04 Program Control: 05 While Loop \n");
    printf("--------------------------------- \n");

    while (Counter < 5) {
        printf("Repeating = %i \n", Counter);
        Counter++;
    }
    

    return 0;
}