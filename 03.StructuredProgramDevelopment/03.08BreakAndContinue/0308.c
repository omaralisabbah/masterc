/*
    03 Structured Program Development: 08 Break and Continue

    Break :
    Within the nested loop or nested switch case, the break statement terminates the execution of the nearest enclosing loop or switch body.

    Continue :
    We can terminate an iteration without exiting the loop body using the continue keyword.

    Note :
    [1]     The one thing needs to remember to  continue statement use only within the loop body.

*/

#include <stdio.h>

unsigned short Counter = 0;
unsigned short Number = 0;

int main () {

    printf("03 Structured Program Development: 08 Break and Continue \n");
    printf("-------------------------------------------------------- \n");

    // for(Counter = 1; Counter <= 5; Counter++) {
    //     printf("Statement :- \n");
    //     scanf("%i", &Number);
    //     if(Counter == 3) {
    //         break;
    //         }
    // }

    printf("-------------------------------------------------------- \n");

    for(Counter = 0; Counter <= 5; Counter++) {
        printf("Hey.. : \n");
        if(Counter == 3) {
            continue;
        }
        printf("Hey.. Bro : \n");
    }

    return 0;
}