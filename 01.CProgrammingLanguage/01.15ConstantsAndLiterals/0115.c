/*
    01 C Programming Language: 15 Constants and Literals

    Constants :
    ----------
    - Refer to fixed values that program may not alter during its execution.
    - Can be any of the basic data types.
    - Are treated just like regular variables except their values cannot be modified after their definition (using direct methods).
    - Define a constant using keyword (const) Const Qualifier.

S
    Note :
    - if const variable in global scope, you cannot modify it's value.
    - if const variable in local scope, you can modify it's value using pointer.



    Literals : (Search for more informations)
    ---------
    - An integer literal can be decimal, octal, or hexadecimal constant.
    - A prefix specifies the base or radix :
        - 0x or 0X for hexadecimal.
        - 0 for octal.
        - And nothing for decimal.

    - An integer literal can also have a suffix that is combination of  U and L for unsigned and long respectively.
    - The suffix can be uppercase or lowercase and can be in any order.

    Examples :
    
        212     - Legal
        215u    - Legal
        0xFeeL  - Legal
        078     - Illegal - because 8 is not an octal digit
        032UU   - Illegal - because suffix is repeated

*/



#include <stdio.h>

const int variableOne = 99;
int const variableTwo = 15;
const unsigned long long int variableThree = 43;

int main() {

    printf("01 C Programming Language: 15 Constants and Literals \n");
    printf("---------------------------------------------------- \n");

    // Error
    // variableOne = 53;

    unsigned char Var1 = 20;
    unsigned char Var2 = 0x20;
    unsigned char Var3 = 0X20;
    unsigned char Var4 = 20U;
    unsigned char Var5 = 20UL;
    unsigned char Var6 = 0xFE;
    unsigned char Var7 = 077;
    unsigned char Var8 = 0xFEU;
    unsigned char Var9 = 0xFELL;

    return 0;
}