/*
    03 Structured Program Development: 02 If Statements



*/

#include <stdio.h>

unsigned int NumberOne = 55;
unsigned int Temp = 0;

int main () {

    printf("03 Structured Program Development: 02 If Statements \n");
    printf("--------------------------------------------------- \n");

    printf("Enter NumberOne Value : ");
    scanf("%i", &NumberOne);

    if((55 == NumberOne) && (NumberOne >= 6)) {
        printf("Yes \n"); // NumberOne = 55
    }

    if(66 == NumberOne) {
        printf("No  \n"); // NumberOne = 66
    }


    printf("--------------------------------------------------- \n");

    printf("Enter Temp Value : ");
    scanf("%i", &Temp);

    if(Temp > 25) {
        printf("Fan is on \n");
    }

    if(Temp < 25) {
        printf("Fan is off \n");
    }

    if(Temp > 25) {
        printf("Fan is on \n");
    }
    else {
        printf("Fan is off \n");
    }

    return 0;
}

