/*
    04 Program Control: 06 Do While Loop

    The do..while loop is similar to the while loop with one important difference.
    The body of do..while loop is executed once, before checking the condition statement.
    Do..while loop is executed at least one time.

*/

#include <stdio.h>

unsigned short Counter = 0;

int main () {

    printf("04 Program Control: 06 Do While Loop \n");
    printf("------------------------------------ \n");

    do
    {
        printf("Go next by one = %i \n", Counter);
        Counter++;
    } while (Counter <= 10);
    



    return 0;
}