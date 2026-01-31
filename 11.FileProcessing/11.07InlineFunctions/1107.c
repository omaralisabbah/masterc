/*
    11 File Processing : 07 Inline Function

    Search about : Context Switch 
                 : Call Overhead
                 : Difference between normal, macro and inline Functions [VI]

    Note :
    [1] Macro function Parameters Replaced in Preprocessing time (text replacement time)
    [2  Macro function = Performance (speed of execution)
    [3] But function like macro does not save memory, unlike the other function
    [4] It is recommended to deal with macro function when the definition of the function is simple.
    [5] In macro functions there is no type checking for parameters datatypes

    [6] Inline Keyword is the difference
    [7] It's forbidden to use Inline functions in embedded systems
    [8] Inline function it is compiler dependent
    [9] when you use inline, you suggest to compiler to use it
    [10] In GCC Compiler, using __attribute__((always_inline));
        Force the compiler to use the function as inline funtion

    [11] Inline function, It is a mix of macro function and the normal function

*/

#include <stdio.h>
#include <stdlib.h>

//      Body                    Definiton
#define GET_SUMMING(NUM1, NUM2) (NUM1 + NUM2)

char NumberOne = 11, NumberTwo = 22;

unsigned int Get_Summing(unsigned int NumOne, unsigned int NumTwo);

unsigned int inline Get_Summing_Inline(unsigned int NumOne, unsigned int NumTwo);

static unsigned int inline Get_Summing_Inline_Static(unsigned int NumOne, unsigned int NumTwo);

// main() is the caller function
int main()
{
    printf("11 File Processing: 07 Inline Function \n");
    printf("-------------------------------------  \n");

    unsigned int Result = 0;
    
    // Get_Summing is the calle function
    Result = Get_Summing(2, 3);
    printf("Summing = %i \n", Result);
    printf("Summing = %i \n", Get_Summing(2, 4));
    printf("Summing = %i \n", Get_Summing(NumberOne, NumberTwo));
    //printf("Summing = %f \n", Get_Summing(2.5, 3.5));

    printf("-------------------------------------  \n");

    printf("Summing = %i \n", GET_SUMMING(2, 3));
    printf("Summing = %i \n", GET_SUMMING(2, 4));
    printf("Summing = %i \n", GET_SUMMING(2, 5));
    printf("Summing = %i \n", GET_SUMMING(2, 6));
    printf("Summing = %i \n", GET_SUMMING(2, 7));
    printf("Summing = %f \n", GET_SUMMING(2.5, 3.5));

    printf("-------------------------------------  \n");

    Result = Get_Summing_Inline(2, 3);
    printf("Summing = %i \n", Result);
    Result = Get_Summing_Inline(2, 4);
    printf("Summing = %i \n", Result);

    return 0;
}

unsigned int Get_Summing(unsigned int NumOne, unsigned int NumTwo) {
    return (NumOne + NumTwo);
}

unsigned int inline Get_Summing_Inline(unsigned int NumOne, unsigned int NumTwo) {
    return (NumOne + NumTwo);
}

static unsigned int inline Get_Summing_Inline_Static(unsigned int NumOne, unsigned int NumTwo) {
    return (NumOne + NumTwo);
}