/*
    05 Functions: 13 Call-Back Function

    [1]



    Note :

    [1]


*/


#include <stdio.h>
#include <stdlib.h>

#include "module1.h"

static unsigned int Motor_Move_Right_In = 0;

void Motor_Notification1(void);
void Motor_Notification2(void);

int main()
{
    printf("05 Functions: 13 Call-Back Function \n");
    printf("----------------------------------- \n");


    Motor_Move_Right(NULL);
    Motor_Move_Right(Motor_Notification2);
    Motor_Move_Right(Motor_Notification2);


    return 0;
}

void Motor_Notification1(void) {
    printf("Motor is Notification (1) OK \n");
    while (1);
}

void Motor_Notification2(void) {
    printf("Motor is Notification (2) OK \n");
    Motor_Move_Right_In++;
    printf("Motor_Move_Right_In = %i \n", Motor_Move_Right_In);
}
