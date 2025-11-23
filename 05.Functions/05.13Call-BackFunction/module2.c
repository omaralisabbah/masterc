
#include "module2.h"

void Dio_Write_Logic(void (*PtrFun)(void)){
    printf("Hello from Dio_Write_Logic \n");
    PtrFun();
}
