/*
    14 File Processing : 09 Typedef Readability Effect


*/

#include <stdio.h>
#include <stdlib.h>
#include "Platform_Types.h"

uint32 return_function_1(void);
uint32 return_function_2(void);
uint32 return_function_3(void);
uint32 return_function_4(void);

uint32(*(*Simplified_Function(void))[4])(void);

/*
    Symplified_Pointer is a pointer to function (type) returning uint32
*/
typedef uint32(*Symplified_Pointer)(void);

/*
    ptr is a function returning a pointer to an array of four elemnets
    and contains pointers to function returning an uint32
*/
uint32(*(*ptr(void))[4])(void); //complex declaration

/*
    Array of four elements, each element is a pointer to function that takes
    void and return uint32
*/
uint32(*ptr1_return_function[4])(void) = { return_function_1, return_function_2,
                                          return_function_3, return_function_4 };

//Code Readability Increased
Symplified_Pointer ptr2_return_function[4] = { return_function_1, return_function_2,
                                          return_function_3, return_function_4 };


int main() {
    printf("14 File Processing : 09 Typedef Readability Effect \n");
    printf("-------------------------------------------------- \n");

    //you can call functions through this pointer
    uint32(*(*Local_Ptr)[4])(void) = Simplified_Function(); // array address
    printf("0x%X \n", Simplified_Function());

    printf("-------------------------------------------------- \n");

    printf("%i \n", (*ptr1_return_function[0])()); // return 114
    printf("%i \n", (*ptr1_return_function[1])()); // return 151
    printf("%i \n", (*ptr1_return_function[2])()); // return 141
    printf("%i \n", (*ptr1_return_function[3])()); // return 153

    printf("-------------------------------------------------- \n");

    printf("%i \n", (*Local_Ptr)[0]()); // return 114
    printf("%i \n", (*Local_Ptr)[1]()); // return 151
    printf("%i \n", (*Local_Ptr)[2]()); // return 141
    printf("%i \n", (*Local_Ptr)[3]()); // return 153

    return 0;
}


uint32(*(*Simplified_Function(void))[4])(void) {
    //You can also do it here
    uint32(*(*Local_Ptr)[4])(void) = &ptr1_return_function;
    return(&ptr1_return_function);
}

uint32 return_function_1(void) {
    return 114;
}

uint32 return_function_2(void) {
    return 151;
}

uint32 return_function_3(void) {
    return 141;
}

uint32 return_function_4(void) {
    return 153;
}