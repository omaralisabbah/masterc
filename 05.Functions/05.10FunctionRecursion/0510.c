/*
    05 Functions: 10 Function Recursion

    Recursion is a process in which function call itself and the function that call itself
    directly or indirectly called a recursive function.

    [1] Direct Recursion :
    A direct recursive function is a function that is called itself.


    [2] Indirect Recursion 
    A function is called indirect recursive if it calls another function and the called function
    call the calling function.


    Note :
    [1] Last Function stack frame created, is the first stack is terminated (LIFO)
    [2] Recusion mostly used in mathematical formulas and algorithms
    [3] Stack overflow 
    [4] Search about advantages and disadvantages of recursion
*/



#include <stdio.h>
#include <stdlib.h>

void Print_Omar(void);
void Print_Ali(void);
void Print_Static_Variable(void);
unsigned int Get_Factorial(unsigned int Number);

int main()
{
    printf("05 Functions: 10 Function Recursion \n");
    printf("----------------------------------- \n");

    //Print_Omar();

    Print_Static_Variable();

    unsigned int Number = 9;
    printf("Number Factorial = %i \n", Get_Factorial(Number));

    return 0;
}

unsigned int Get_Factorial(unsigned int Number) {
    unsigned int Result = 0;

    if (Number == 0) {
        Result = 1;
    }
    else {
        Result = Number * Get_Factorial(Number - 1);
    }

    return Result;
}

void Print_Static_Variable(void) {

    static unsigned int NumberOne = 0;
    printf("NumberOne = %i \n", NumberOne);
    NumberOne++;
    Sleep(250);
    if (NumberOne <= 9) {
        Print_Static_Variable();
    }
}

void Print_Omar(void) {
    printf("omar \n");
    Sleep(250);
    Print_Ali();
}

void Print_Ali(void) {
    printf("ali \n");
    Print_Omar();
}