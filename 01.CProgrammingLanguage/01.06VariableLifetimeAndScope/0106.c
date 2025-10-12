/*
    01 C Programming Language: 06 Variable Life Time And Scope

    1. Scope:
    The scope of a variable defines the region of the program where that variable is visible and can be accessed.
    C defines several types of scope:

    - Block Scope (Local Variables): Variables declared within a block of code (enclosed in curly braces {}) have block scope.
    They are only accessible within that specific block. This includes variables declared inside functions, if statements, for loops, etc.
    
    - File Scope (Global Variables): Variables declared outside of any function, at the top level of a source file,
    have file scope. They are accessible from any function within that same source file, from the point of their declaration onwards.


    
    2. Lifetime:
    The lifetime of a variable refers to the period during which the variable exists in memory and holds a valid value.

    - Automatic Lifetime:
    Variables with block scope (local variables) typically have automatic lifetime.
    Their memory is allocated when their block is entered and deallocated when the block is exited.
    Their values are not preserved across multiple calls to the same function or re-entries into the same block.

    - Static Lifetime:
    Global variables and local variables declared with the static keyword have static lifetime.
    Their memory is allocated once at the start of the program and remains allocated until the program terminates.
    Their values are preserved across function calls or re-entries into blocks.

    - Dynamic Lifetime: Memory allocated using dynamic memory allocation functions like malloc(), calloc(), and realloc() has dynamic lifetime.
    This memory exists until explicitly deallocated using free(). The lifetime is managed by the programmer.

*/



#include <stdio.h>

int global_var = 17; // global_var has file scope

void my_function() {
    int local_var = 10; // local_var has block scope within my_function
    printf("Inside function: %d\n", local_var);
} // local_var is no longer accessible here

void another_function() {
    printf("Inside another function, accessing global: %d\n", global_var);
}

int main() {
    
    printf("01 C Programming Language: 06 Variable Life Time And Scope \n");
    printf("---------------------------------------------------------- \n");

    int main_var = 20; // main_var has block scope within main

    {
        int inner_block_var = 30; // inner_block_var has block scope within this inner block
        printf("Inside inner block: %d\n", inner_block_var);
    }
    // inner_block_var is no longer accessible here
    // printf("%d\n", inner_block_var); // This would cause a compile-time error

    my_function();

    printf("Inside main: %d\n", main_var);

    printf("---------------------------------------------------------- \n");

    printf("Inside main, accessing global: %d\n", global_var);
        another_function();
    return 0;
}