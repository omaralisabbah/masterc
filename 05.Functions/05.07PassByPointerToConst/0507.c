/*
    05 Functions: 07 Pass By Pointer To Const



*/



#include <stdio.h>
#include <stdlib.h>

unsigned int NumberOne = 44;
unsigned int NumberTwo = 99;

// Ptr1 is a pointer, points to const data
const unsigned int *Ptr1 = &NumberOne; // Ptr1 can't change the NumberOne value

// Ptr2 is a pointer , points to const data
unsigned int const *Ptr2 = &NumberOne; // Ptr2 can't change the NumberOne value (No difference)

// Ptr3 is a const pointer, points to data
unsigned int *const Ptr3 = &NumberOne; // Ptr3 can't be changed, but we can change the data

// Ptr4 is a const pointer, points to const data
const unsigned int *const Ptr4 = &NumberOne;
unsigned int const *const Ptr5 = &NumberOne; // No Difference

void Print_Number1(unsigned int Number);
void Print_Number2(unsigned int *Number);
void Print_Number3(const unsigned int *Number);

int main()
{
    printf("05 Functions: 07 Pass By Pointer To Const \n");
    printf("----------------------------------------- \n");

    /*
    printf("NumberOne = %i \n", NumberOne);
    NumberOne = 55;
    printf("NumberOne = %i \n", NumberOne);

    // *Ptr1 = 66;
    // printf("NumberOne = %i \n", NumberOne);

    Ptr2 = &NumberTwo;
    printf("NumberTwo = %i \n", *Ptr2);
    */


    printf("----------------------------------------- \n");

    /*
    Print_Number2(&NumberOne);
    printf("NumberOne = %i \n", NumberOne);

    Print_Number3(&NumberOne);
    printf("NumberOne = %i \n", NumberOne);



    printf("NumberOne = %i \n", NumberOne);
    *Ptr3 = 99;
    printf("NumberOne = %i \n", NumberOne);
    */

    printf("----------------------------------------- \n");


    // ptr3 = &NumberTwo; // Invalid
    // printf("NumberOne = %i \n", NumberOne);

    printf("NumberOne = %i \n", NumberOne);
    *Ptr3 = 92;
    printf("NumberOne = %i \n", NumberOne);


    return 0;
}

void Print_Number1(unsigned int Number){
    printf("Number = %i \n", Number);
    Number += 5;
    printf("Number = %i \n", Number);
}

void Print_Number2(unsigned int *Number){
    printf("Number Before = %i \n", *Number);
    *Number += 5;
    printf("Number After = %i \n", *Number);
}

void Print_Number3(const unsigned int *Number){
    printf("Number Before = %i \n", *Number);
    // *Number += 5;
    printf("Number After = %i \n", *Number);
}


