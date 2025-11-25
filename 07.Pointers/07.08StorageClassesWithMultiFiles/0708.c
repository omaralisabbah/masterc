/*
    07 Pointers: 08 Storage Classes With Multi Files

    Note :
    [1] Anything you want any file to see it, declare it in (.h) file.
    [2] Multi declaration for the same thing is not a problem

*/

#include <stdio.h>
#include <stdlib.h>

#include "0708H.h"

unsigned int MotorVersion = 0;

int main() {
    printf("07 Pointers: 08 Storage Classes With Multi Files \n");
    printf("------------------------------------------------ \n");

    /*
    MoveObjectForward();
    MoveObjectBackward();
    MoveObjectLeft();
    MoveObjectRight();

    MotorVersion = GetObject_SW_Version();
    printf("Object SW Vesrion = %i \n", MotorVersion);
    
    
    
    MoveObjectLeft();
    SetObjectSpeed(20);
    MoveObjectLeft();
    SetObjectSpeed(60);
    MoveObjectLeft();
    
    */

    MoveObjectForward();
    //MoveObjectBackward();
    MoveObjectLeft();
    MoveObjectRight();

    MotorVersion = GetObject_SW_Version();
    printf("Objec Software Version = %i \n", GetObject_SW_Version());
    
    return 0;
}