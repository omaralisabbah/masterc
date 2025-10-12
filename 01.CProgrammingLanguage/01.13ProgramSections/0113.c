/*
    01 C Programming Language: 13 Program Sections

    The C programming language is typically structured into several distinct sections,
    though the exact number and naming conventions can vary slightly depending on the source.
    
    A common and comprehensive breakdown includes the following six main sections:

    Documentation Section:
    This section includes comments that provide information about the program, such as its purpose,
    author, date of creation, and any specific details about the code. It is essential for code readability and maintenance.

    Link Section (Preprocessor Directives):
    This section contains preprocessor directives, which are instructions to the C preprocessor.
    Common directives include #include to link necessary header files (like stdio.h for standard input/output functions)
    and #define for defining macros.

    Definition Section:
    Here, global constants are often defined using #define or const keywords. These constants are accessible throughout the entire program.

    Global Declaration Section:
    This section declares global variables and functions that are accessible from any part of the program.
    These declarations are made outside of any specific function.
    
    Main() Function Section:
    This is the entry point of every C program. The main() function contains the primary logic of the program,
    where execution begins. It typically returns an integer value (e.g., 0 for successful execution). 

    Subprograms Section (User-Defined Functions):
    This section contains user-defined functions that perform specific tasks and can be called from the main() function
    or other user-defined functions. These functions promote modularity and code reusability.

*/


// Includes Section
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Macro Section
#define USER_PI 3.14

// Global Variables Section 
unsigned int VarOne = 33;

// Global Decleration Section

// Sub-Program Declerations Section
void Print_Function_One(void);
void Print_Function_Two(void);

// main function
int main()
{
    printf("01 C Programming Language: 13 Program Sections \n");
    printf("---------------------------------------------- \n");

    printf("Hello world!\n");
    printf("Hello world!\n");
    Print_Name();
    Print_Date();

    return 0;
}

// Sub-Program Section Start
void Print_Function_One(void){
    printf("Print_Function_One \n");
}

void Print_Function_Two(void){
    printf("Print_Function_Two \n");
}
