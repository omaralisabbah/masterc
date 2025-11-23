/*
    05 Functions: 11 Pass Array As Paramter

    Note :
    [1] If the function parameter is pointer, do not assign it as a pointer pointing to a const data.
    [2] If the function parameter is pointer, it's good to assign it as a const pointer.

*/


#include <stdio.h>

#define MAX_ELEM 7

unsigned int Numbers[MAX_ELEM] = { 11, 22, 33, 44, 55, 99, 111 };

/* Parameters as a sized array */
void Print_Numbers_1(const unsigned int MyNumbers[MAX_ELEM], const unsigned int MyNumbersLen);

/* Parameters as an un-sized array */
void Print_Numbers_2(const unsigned int MyNumbers[], const unsigned int MyNumbersLen);

/* Parameters as a pointer */
unsigned char Print_Numbers_3(const unsigned int* MyNumbers, const unsigned int MyNumbersLen);

unsigned char Get_Elem_Index(const unsigned int* MyNumbers,
                             const unsigned int MyNumbersLen,
                             const unsigned int Wanted_Element,
                             signed int* const Element_Index);


int main() {

    printf("05 Functions: 11 Pass Array As Paramter \n");
    printf("--------------------------------------- \n");

    unsigned char RetVal = 0;
    signed int Elem_Index = -1;

    printf("Numbers = ");
    RetVal = Print_Numbers_3(NULL, MAX_ELEM); // NoK => 1   (NULL)
    printf("\nNumbers = ");
    RetVal = Print_Numbers_3(Numbers, MAX_ELEM); // Ok  => 0

    printf("\n--------------------------------------- \n");

    RetVal = Get_Elem_Index(NULL, MAX_ELEM, 44, &Elem_Index);
    printf("RetVal     = %i \n", RetVal);
    printf("Elem_Index = %i \n", Elem_Index);

    printf("\n--------------------------------------- \n");

    RetVal = Get_Elem_Index(Numbers, MAX_ELEM, 44, &Elem_Index);
    printf("RetVal     = %i \n", RetVal);
    printf("Elem_Index = %i \n", Elem_Index);

    printf("\n--------------------------------------- \n");

    RetVal = Get_Elem_Index(Numbers, MAX_ELEM, 111, &Elem_Index);
    printf("RetVal     = %i \n", RetVal);
    printf("Elem_Index = %i \n", Elem_Index);

    return 0;
}


unsigned char Print_Numbers_3(const unsigned int* MyNumbers, const unsigned int MyNumbersLen) {
    unsigned char RetVal = 0; /* Ok */
    unsigned int NumbersIndex = 0;

    if (NULL == MyNumbers) {
        RetVal = 1; /* Not OK */
    }
    else
    {
        for (NumbersIndex = 0; NumbersIndex < MyNumbersLen; NumbersIndex++)
        {
            printf("%i\t", MyNumbers[NumbersIndex]);
        }
    }

    return RetVal;
}

unsigned char Get_Elem_Index(const unsigned int* MyNumbers,
                             const unsigned int MyNumbersLen,
                             const unsigned int Wanted_Element,
                             signed int* const Element_Index) {

    unsigned char RetVal = 0; /* Ok */
    unsigned int NumbersIndex = 0;

    if ((NULL == MyNumbers) || (NULL == Element_Index)) {
        RetVal = 1; /* NoK */
        *Element_Index = -1;
    }
    else {
        for (NumbersIndex = 0; NumbersIndex < MyNumbersLen; NumbersIndex++) {
            if (Wanted_Element == MyNumbers[NumbersIndex]) {
                *Element_Index = NumbersIndex;
                break;
            }
            else {
                *Element_Index = -1;
            }
        }
    }

    return RetVal;
}