/*
    15.01 Dynamic Memory Allocation Functions: 04 free

    realloc to deallocate the allocated memory:
    - The dynamically allocated memory is not automatically released, It will exit till the end of program.
    - The free is used to release the memory space allocated dynamically.

    - Syntax : void free(void *ptr);

    Note :
    [1] If "Ptr" argument of the free function is pointing to a memory that has been deallocated,
    the behavior of the function would be undefined.

*/


#include <stdio.h>
#include <stdlib.h>

unsigned int *Ptr = NULL;

int main() {
    printf("15.01 Dynamic Memory Allocation Functions: 04 free  \n");
    printf("--------------------------------------------------- \n");

    Ptr = (unsigned int*)malloc((5 * sizeof(unsigned int)));
    if (NULL != Ptr) {
        *(Ptr) = 0x11;
        printf("Value at location [0x%X] = 0x%X \n", (Ptr), *(Ptr));

        free(Ptr);
    }
    else {
        printf("Error \n"); 
    }

    printf("--------------------------------------------------- \n");

    //printf("Value at location [0x%X] = 0x%X \n", (Ptr), *(Ptr)); // Same Location + Garbage Value

    return 0;
}