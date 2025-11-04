/*
    02 Operators And Operations: 02 Arithmetic Operators
    
    Arithmetic operators in C are used to perform mathematical operations on numerical data
    (integers and floating-point numbers). They are a fundamental part of C programming for handling calculations. 

    Arithmetic Operators :
    - (+)     => Addition
    - (-)     => Subtraction
    - (*)     => Multiplication
    - (/)     => Division
    - (%)     => Modulus    [ Remainder After Division ]   Note : [ Modulus Deals Just With Integer ]

    - Unary Arithmetic Operators
        - (++)    => Increment
        - (--)    => Decrement

    Note :

    - If we assign the post-incremented value to the same variable then the value of the variable will not get incremented
    it will remain the same value like it was.
    - This special case is only with the post-increment and post-decrement operators.
    - The pre-decrement and pre-increment operators works normal in this case.


*/


#include <stdio.h>

unsigned short NumberOne = 10;
unsigned short NumberTwo = 5;
unsigned short Summation = 0;

int main() {

    printf("02 Operators And Operations: 02 Arithmetic Operators \n");
    printf("---------------------------------------------------- \n");

    // Pre increment
    // ++NumberOne;
    // printf("NumberOne = %i \n", NumberOne); // 11
    // printf("NumberOne = %i \n", NumberOne++); // 11
    // printf("NumberOne = %i \n", ++NumberOne); // 13

    printf("----------------------------------------------------- \n");

    // Post increment
    // NumberOne++;
    // printf("NumberOne = %i \n", NumberOne); // 11
    // printf("NumberOne = %i \n", NumberOne++); // 11
    // printf("NumberOne = %i \n", NumberOne); // 12

    printf("----------------------------------------------------- \n");

    // Post increment   => NumberOne = 10
    // NumberOne++;
    // printf("NumberOne = %i \n", NumberOne); // 11
    // NumberOne = NumberOne++;
    // printf("NumberOne = %i \n", NumberOne); // 11

    printf("----------------------------------------------------- \n");

    // Pre increment   => NumberOne = 10
    ++NumberOne;
    printf("NumberOne = %i \n", NumberOne); // 11
    NumberOne = ++NumberOne;
    printf("NumberOne = %i \n", NumberOne); // 12

    printf("----------------------------------------------------- \n");

    // NumberOne++; printf("NumberOne = %i \n", NumberOne); // 11 Post increment
    // ++NumberOne; printf("NumberOne = %i \n", NumberOne); // 12 Pre increment
    // NumberOne--; printf("NumberOne = %i \n", NumberOne); // 11 Post decrement
    // --NumberOne; printf("NumberOne = %i \n", NumberOne); // 10 Pre decrement

    // Summation = NumberOne++; printf("Summation = %i \n", Summation); // 10
    // Summation = ++NumberOne; printf("Summation = %i \n", Summation); // 12
    // Summation = NumberOne--; printf("Summation = %i \n", Summation); // 12
    // Summation = --NumberOne; printf("Summation = %i \n", Summation); // 10

    return 0;
}