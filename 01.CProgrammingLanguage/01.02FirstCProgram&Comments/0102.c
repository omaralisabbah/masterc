/*
    01 C Programming Language: 02 First C Program & Comments

    The basic syntax of the C program consists of the header, main() function, variable declaration, body,
    and return type of the program.

    - The header is the first line in the C program with extension .h which contains macro definitions and C functions.
    - Programs must contain the main() function because execution in C programming starts from the main().
    - Variable declaration in C is done inside the main function and can be used in the body anywhere but before the main,
        we can also declare variables which are known as Global variables.
    - In the body of the function, we perform operations required inside the function like printing, sum, average, sorting, searching, etc.
    - The last part of the C program is the return statement which refers to returning values of the program.

    Semicolon
        - It's a statement terminator.
        - It indicates the end of statement.
        - Each statement must be ended with a semicolon.
        
    Comments: Comments used in many purposes

    - Writing instrutions and notes to help people to understand your code faster.
    - Comments are ignored by the compiler.
    - To prevent the compiler from executing a part or a line of code.

        - Single line comment   (//) - To comment a single line.
        - Multi line comment    (/*) - To comment a multiaple lines like the comment you're reading now.

*/

// Basic Syntax of C Program
#include <stdio.h>


// main function
int main() {

    // body
    printf("01 C Programming Language: 01 Introduction \n");
    printf("------------------------------------------ \n");

    // return statement
    return 0;
}