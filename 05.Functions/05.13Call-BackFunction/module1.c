
#include "module1.h"

void Dio_Notification(void);

void Motor_Move_Right(void (*PtrFun)(void)){
    printf("Motor_Move_Right \n");
    //Dio_Write_Logic(Dio_Notification);
    if(PtrFun){
        PtrFun();
    }
    else{}
}

void Dio_Notification(void){
    printf("Dio_Notification OK \n");
}
