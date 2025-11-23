/*
    05 Functions: 02 Function Declarations And Definitions
    
    
    Types of Functions:

    Standard Library Functions: Pre-defined functions provided by the C standard library (e.g., printf(), scanf(), sqrt()).
    User-Defined Functions: Functions created by the programmer to perform specific tasks.
    
    - Function Declaration.
    - Function Definition.
    - Function Call.

*/



#include <stdio.h>

void GettingSummation(void); // Function Declaration, prototype



unsigned int Var1;
unsigned int Var2;

int main() {

    printf("05 Functions: 02 Function Declarations And Definitions \n");
    printf("------------------------------------------------------ \n");

    GettingSummation(); // Function Call.

    return 0;
}

// Function Definition or Implementation.
void GettingSummation(void) {
    printf("Enter The First Variable: %i \n", Var1);
    scanf("%i", &Var1);
    printf("Enter The Second Variable: %i \n", Var2);
    scanf("%i", &Var2);
    printf("The sum is : %i \n", Var1 + Var2);
}