/*
    10 Structures: 13 Avoid Structure Padding

    Compiler Dependent

    Difference Between Strucute Padding & Packing

    #pragma pack()

    Note:
    [1] Search about difference between packing and padding
*/

#include <stdio.h>
#include <stdlib.h>

// (1) Telling the compiler to pack on 1 byte padding
#pragma pack(1)
struct test1 {
    char var1;
    int var2;
    char var3;
}obj1;
#pragma pack(1)


#pragma pack(2)
typedef struct test2 {
    char var_one;
    double var_two;
    char var_three;
}test1_t;
#pragma pack(2)

test1_t obj2;

int main() {
    printf("10 Structures: 13 Avoid Structure Padding \n");
    printf("----------------------------------------- \n");

    printf("Object Size : %i \n", sizeof(obj1));
    printf("Object Size : %i \n", sizeof(obj2));

    return 0;
}