/*
    04 Program Control: 02 goto Statement

    forbidden in embedded system applications


    Syntax :

    (Label) :
        statement;
        statement;
        statement;
        statement;
    goto Label;

*/




#include <stdio.h>

int main () {

    printf("04 Program Control: 02 goto Statement \n");
    printf("------------------------------------- \n");

    // Infinite Loop (not recommended to use)
    Label:
        printf("One \n");
        printf("Two \n");
        printf("Three \n");
        printf("Four \n");
        printf("Five \n");
    goto Label;

    return 0;
}