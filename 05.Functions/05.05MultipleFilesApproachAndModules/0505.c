/*
    05 Functions: 05 Multiple Files Approach and Modules

    Assume that :
    - We have a large project (robot) and this robot has many things to do.
        - Robot must perform movement functionality using motors.
            - So we can say that we have a "Motor Module" to perform the movement functionality.

    - Robot have sensing functionality using sensors.
        - So we can say that we have a "Sensor Module" to perform the sensing functionlity.

    Any module forms from two files .c and .h


    Note :
    - It's recommended to start naming module's functions with the name of the module. [VI]

*/


#include <stdio.h>

#include "motor.h"
#include "sensor.h"


int main() {

    printf("05 Functions: 05 Multiple Files Approach and Modules \n");
    printf("---------------------------------------------------- \n");

    MotorMoveForward();
    MotorMoveBackward();
    MotorMoveLeft();
    MotorMoveRight();

    return 0;
}