/*
    14 Preprocessor : 07 Preprocessor Directive Operators

    [1] defined
    [2] if defined
    [3] stringized operator #
        - #define Print_Name(F_NAME, S_NAME) (#F_NAME " " #S_NAME "\n")

    [4] s
*/


#include "stdio.h"

#define Print_Name(F_NAME, S_NAME) (#F_NAME " " #S_NAME "\n")

int main() {

    printf("14 Preprocessor : 07 Preprocessor Directive Operators \n");
    printf("----------------------------------------------------- \n");

    
    Print_Name(OMAR, ALISABBAH); // Stringized
    Print_Name(OMAR, "ALISABBAH");  // \"ALISABBAH"\""
    Print_Name('OMAR', "ALISABBAH");  // \"ALISABBAH"\""

    return 0;
}