/*
    14 File Processing : 08 Typedef

    A typedef defines new name for existing types and does not introduce a new type.

    It's the (partial storage-class specifier) compiler directive mainly use with user-defined data types
    (structure, union or enum) to reduce their complexity and increase code readability and portability.

    In C programming, we can use typedef declarations to create shorter or more meaningful names for types
    already defined in C or types that you have declared.

    Syntax : typedef (type) NewTypeName;


    Note :

*/

#include <stdio.h>
#include <stdlib.h>

typedef unsigned char unsigned_char;

unsigned_char var = 13;
    
int main() {
    printf("14 File Processing : 08 Typedef \n");
    printf("------------------------------- \n");

    printf("%i \n", var);


    return 0;
}