/*
    01 C Programming Language: 07 Statements And Functions
    
    In C programming, statements are the smallest independent units of computation,
    and functions are blocks of code designed to perform a specific task.

    
    1. Statements in C:
    Statements in C are instructions that the compiler executes. They typically end with a semicolon (;).
    Common types of statements include:

    Expression Statements: These perform computations or actions.

    Selection Statements (Conditional Statements): These allow different blocks of code to be executed based on a condition.
        - if-else statement
        - switch statement

    Iteration Statements (Looping Statements): These allow a block of code to be executed repeatedly.
        - for loop
        - while loop
        - do-while loop

    Jump Statements: These transfer control to another part of the program.
        - break: Exits the innermost loop or switch statement.
        - continue: Skips the rest of the current iteration of a loop and proceeds to the next.
        - return: Exits a function and optionally returns a value.
        - goto: Transfers control to a labeled statement (generally discouraged due to potential for spaghetti code).

    
    2. Functions in C:
    Functions are self-contained blocks of code that perform a specific task. They promote modularity and code reusability.
        - Function Declaration (Prototype): Informs the compiler about the function's return type, name, and parameters.
        - Function Definition: Contains the actual code that the function executes.
        - Function Call: Invokes the function to execute its code.

*/



#include <stdio.h>

// returnType functionName(parameterType1 parameter1, parameterType2 parameter2, ...);

// returnType functionName(parameterType1 parameter1, parameterType2 parameter2, ...) {
//     // body of the function
//     // statements to perform the task
//     return value; // optional, if returnType is not void
// }


int main() {
    
    printf("01 C Programming Language: 07 Statements And Functions \n");
    printf("------------------------------------------------------ \n");

    // Expression Statements
    int x = 10; // Assignment statement
    printf("Hello"); // Function call statement
    x++; // Increment statement

    // result = functionName(argument1, argument2);

    return 0;
}