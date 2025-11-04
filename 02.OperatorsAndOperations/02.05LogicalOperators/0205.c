/*
    02 Operators And Operations: 05 Logical Operators
    
    Logical operators in C are used to combine two or more relational or logical expressions and return a final Boolean result:
    either true (represented as 1 in C) or false (represented as 0 in C).
    They are fundamental for controlling program flow in conditional statements (if, while, for).

     
	Operator    Name	        Description	Example
    &&	        Logical AND	    Returns true if both operands are true.	(a > 0) && (b < 10)
    ||	        Logical OR	    Returns true if at least one operand is true.	(age < 18) || (isStudent)
    !	        Logical NOT	    Reverses the logical state of its operand (true becomes false, and vice-versa).	!(isActive)

*/


#include <stdio.h>

unsigned short VariableOne = 1;
unsigned short VariableTwo = 0;
unsigned short Result = 0;

int main() {

    printf("02 Operators And Operations: 05 Logical Operators \n");
    printf("------------------------------------------------- \n");

    printf("Result = %i \n", (VariableOne && VariableTwo));
    printf("Result = %i \n", (VariableOne || VariableTwo));
    printf("Result = %i \n", (!VariableOne));
    printf("Result = %i \n", (!VariableOne && VariableTwo));
    printf("Result = %i \n", (!VariableOne || VariableTwo));
    printf("Result = %i \n", (!(VariableOne) || VariableTwo));
    printf("Result = %i \n", (!(VariableOne) || !(VariableTwo)));

    printf("------------------------------------------------- \n");

    int age = 25;
    int hasLicense = 1; // True

    if (age >= 18 && hasLicense) {
        printf("You are old enough and authorized to drive.\n");
    }

    printf("------------------------------------------------- \n");

    char grade = 'A';

    if (grade == 'A' || grade == 'B') {
        printf("You passed with a high grade.\n");
    }

    printf("------------------------------------------------- \n");


    int isAuthenticated = 0; // False (0)

    // The !isAuthenticated evaluates to True (1)
    if (!isAuthenticated) { 
        printf("User is not logged in.\n"); 
    }

    return 0;
}