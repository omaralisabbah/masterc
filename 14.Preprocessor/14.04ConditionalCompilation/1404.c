/*
    14 Preprocessor : 06 Conditional Compilation Preprocessor Directives

    [1]                 
    #if
    .
    .
    #elif
    .  
    .
    #endif


    [2]
    #ifndef
    .
    .
    #endif

    [3]
    #ifdef
    .
    .
    #endif


    [3]
    #error "object is defined"


    [4]
    #line


    [5]
    #pragma     compiler dependent
    #pragma once
    #pragma warning not_allowed_function
    #pragma GCC error "error gcc is used"
    #pragma used also in memory allocation
    

    [6]
    #define HOLA
    #if defined(HOLA)
    void funco_defined(void);
    #else
    void funco_not_defined(void);
    #endif


    [7]
    File Gard

    Pre-Defined Macros __FILE__, __LINE__, __DATE__ etc..
    
*/


#include "1406.h"

// File Gard
#ifndef _FILE_NOT_DEFINED
#define _FILE_DEFINE
/*
.code
.code
.code
.code
*/
#endif

int main() {

    printf("14 Preprocessor : 06 Conditional Compilation Preprocessor Directives\n");
    printf("------------------------------------------------------------------- \n");


    return 0;
}