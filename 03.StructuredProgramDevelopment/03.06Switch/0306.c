/*
    03 Structured Program Development: 06 Switch Statement

    Syntax :

    switch (expression)
    {
    case constant-expression :
        code 
        break;
    
    default:
        break;
    }

    Note :
    [1] The default statement can be anywhere inside the switch.
    [2] The compiler does not execute to default statement until checking all cases statements.
    [3] It's recommended to break after any statements in switch.

*/




#include <stdio.h>

char UserOperator;

int main () {

    printf("03 Structured Program Development: 06 Switch Statement \n");
    printf("------------------------------------------------------ \n");

    // printf("Please enter the operator : \n");
    // scanf("%c", &UserOperator);

    // switch (UserOperator) {
    // case '+' :
    //     printf("Operator = + \n");
    //     break;
    // case '-' :
    //     printf("Operator = - \n");
    //     break;
    // case '*' :
    //     printf("Operator = * \n");
    //     break;
    // case '/' :
    //     printf("Operator = / \n");
    //     break;
    // default:
    //     break;
    // }


    switch (2)
    {
    case 1L :
        printf("%s", "Hi Omar");
        goto state;

    case 2L :
        printf("%s", "Hiiiiiii ");
    
    case 3L :
        printf("%s", "Huuuuuuu ");
    
    case 4L : state :
        printf("%s", "Sabbah   ");
    }

    return 0;
}