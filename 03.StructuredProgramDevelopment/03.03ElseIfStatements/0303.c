/*
    03 Structured Program Development: 03 Else If Statements




*/

#include <stdio.h>

unsigned int Motor_Speed = 0;

int main () {

    printf("03 Structured Program Development: 03 Else If Statements \n");
    printf("-------------------------------------------------------- \n");

    if(Motor_Speed > 20) {
        printf("Hello_1 \n");
    }
    else if(Motor_Speed > 40) {
        printf("Hello_2 \n");
    }
    else if(Motor_Speed > 50) {
        printf("Hello_3 \n");
    }
    else if(Motor_Speed > 60) {
        printf("Hello_4 \n");
    }
    else {
        printf("Invalid Speed !! \n");
    }


    return 0;
}

