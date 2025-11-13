/*
    03 Structured Program Development: 07 Nested Switch

    error switch quantity not integer

    Note :
    [1] You can not switch on float value, just integer datatypes.


*/


#include <stdio.h>

char User_Operator;
float NumberOne, NumberTwo;
int number;

int main () {
    printf("03 Structured Program Development: 07 Nested Switch \n");
    printf("--------------------------------------------------- \n");

        printf("Please enter the Operator : ");
    scanf("%c", &User_Operator);

    switch(User_Operator){
        case '+':
            printf("NumberOne + NumberTwo = %0.2f \n", NumberOne + NumberTwo);
            switch(number){
                case '1':
                    printf("Value = 1 \n");
                break;

                case '2':
                    printf("Value = 2 \n");
                break;

                default:
                    printf(" Invalid Value !!\n");
                break;
            }
        break;

        case '-':
            printf("NumberOne - NumberTwo = %0.2f \n", NumberOne - NumberTwo);
        break;

        case '*':
            printf("NumberOne * NumberTwo = %0.2f \n", NumberOne * NumberTwo);
        break;

        default:
            printf(" Invalid Operator !!\n");
        break;

        case '/':
            printf("NumberOne / NumberTwo = %0.2f \n", NumberOne / NumberTwo);
        break;
    }

    return 0;
}