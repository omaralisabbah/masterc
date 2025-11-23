/*
    05 Functions: 06 Pointer As Parameter To Function

    - In many situations, its desirable to let a function modify the actual variable passed to it.
    - In order to do this, we use a pointer in the function parameter (pass by reference).
    - In order to use a function like this, you need to pass an address or a pointer to the function
        when it is called.
    - Basically, you are telling the function the address of the variable what you want it to modify.


    Note :
    [1] If you have a function, one of its parameters is pointer, we need validation using (if statement)
    for checking of null values.

    [2] Instead of Making a huge function, its better to write a function prototype and use it
        inside any function.
*/



#include <stdio.h>
#include <stdlib.h>

unsigned int NumberOne = 2;
unsigned int NumberTwo = 3;
unsigned int NumberThree = 4;

unsigned char GetSquare(unsigned int* PtrNum1, unsigned int* PtrNum2, unsigned int* PtrNum3);
unsigned char Get_Square(unsigned int* PtrNum1, unsigned int* PtrNum2, unsigned int* PtrNum3);


int main()
{
    printf("05 Functions: 06 Pointer As Parameter To Function \n");
    printf("------------------------------------------------- \n");

    unsigned char Error_Status = 0;

    printf(" %i\t %i\t %i\t \n", NumberOne, NumberTwo, NumberThree);

    Error_Status = GetSquare(&NumberOne, &NumberTwo, &NumberThree);

    if (1 == Error_Status) {
        printf("Function Faild !! \n");
    }

    Error_Status = GetSquare(&NumberOne, &NumberTwo, NULL);

    if (1 == Error_Status) {
        printf("Function Faild !! \n");
    }

    printf(" %i\t %i\t %i\t \n", NumberOne, NumberTwo, NumberThree);

    printf("------------------------------------------------- \n");

    Error_Status = Get_Square(&NumberOne, &NumberTwo, &NumberThree);

    if (1 == Error_Status) {
        printf("Function Faild !! \n");
    }

    printf(" %i\t %i\t %i\t \n", NumberOne, NumberTwo, NumberThree);

    Error_Status = Get_Square(&NumberOne, &NumberTwo, NULL);

    if (1 == Error_Status) {
        printf("Function Faild !! \n");
    }

    return 0;
}


unsigned char GetSquare(unsigned int* PtrNum1, unsigned int* PtrNum2, unsigned int* PtrNum3) {

    unsigned char Error_State = 0; /* No Error */
    if ((PtrNum1 == NULL) || (PtrNum2 == NULL) || (PtrNum3 == NULL)) {
        Error_State = 1;
        printf("Null Pointer Passed !! \n");
    }
    else {
        *PtrNum1 *= *PtrNum1;
        *PtrNum2 *= *PtrNum2;
        *PtrNum3 *= *PtrNum3;
    }
    return Error_State;
}


// Another Method
unsigned char SquareNumber(unsigned int* Ptr) {

    unsigned char Error_State = 0; /* No Error */
    if (NULL == Ptr) {
        Error_State = 1;
        printf("Null Pointer Passed !! \n");
    }
    else {
        *Ptr *= *Ptr;
    }
    return Error_State;
}


unsigned char Get_Square(unsigned int* PtrNum1, unsigned int* PtrNum2, unsigned int* PtrNum3) {

    unsigned char Error_State = 0; /* No Error */
    /* Or to set right value of Error_State not depending on the last update */
    /* If any one of them faild, so Error_State = 1 */
    Error_State = SquareNumber(PtrNum1);
    Error_State |= SquareNumber(PtrNum2);
    Error_State |= SquareNumber(PtrNum3);

    return Error_State;
}
