/*
    01 C Programming Language: 17 Declaration Vs Definition

    A declaration provides basic attributes of a symbol : its type and its name.

    A definition provides all of the details of that symbol if it's a function, what it does; if it's a class, what fields and methods it has; if it's a variable,
    where that variable is stored. Often, the compiler only needs to have a declaration for something in order to compile a file into an object file,
    expecting that the linker can find the definition from another file.
    If no source file ever defines a symbol, but it is declared, you will get errors at link time complaining about undefined symbols.


    Common Cases
    If you want to use a function across multiple source files,
    you should declare the function in one header file (.h) and then put the function definition in one source file (.c or .cpp).
    All code that uses the function should include just the .h file, and you should link the resulting object files with the object file from compiling the source file.

    If you want to use a class in multiple files,
    you should put the class definition in a header file and define the class methods in a corresponding source file.
    (You an also use inline functions for the methods.)

    If you want to use a variable in multiple files, you should put the declaration of the variable using the extern keyword in one header file,
    and then include that header file in all source files that need that variable.
    Then you should put the definition of that variable in one source file that is linked with all the object files that use that variable.



    Declaration of a function provides the compiler with the name of the function,
    the number and type of arguments it takes, and its return type. For example, consider the following code,

    int add(int, int);
    
    Here, a function named add is declared with 2 arguments of type int and return type int. Memory will not be allocated at this stage.

    Definition of the function is used for allocating memory for the function. For example, consider the following function definition,

    int add(int a, int b)
    {
        return (a+b);
    }


    [1] Declaration

    - A variable or a function can be declared any number of times.
    - Memory will not be allocated during declaration.
    - Example : int f(int);
    - The above is a function declaration.
    This declaration is just for informing the compiler that a function named f with return type and argument as int will be used in the function.
    - In declaration, the data type and name of the variable is known.


    [2] Definition

    - A variable or a function can be defined only once.
    - Memory will be allocated during definition.
    - Example : int f(int a) { return a; }
    - The system allocates memory by seeing the above function definition.
    - In definition, value stored in the variable is also known.


    Note :
    - extern : To make variable just declared.
    - if you give variable a definition (extern) become useless.

*/



#include <stdio.h>

int add(int, int); // Function Declaration

int add(int a, int b) { // Function Definition
    return (a+b);
}

extern unsigned int Variable_Declaration;  // Declaration
unsigned int Variable_Definition;  // Definition

int main() {
    
    printf("01 C Programming Language: 17 Declaration Vs Definition \n");
    printf("------------------------------------------------------- \n");
    
    // Variable_Declaration = 99;  // Linker Error Because it's extern
    Variable_Definition = 77;


    return 0;
}