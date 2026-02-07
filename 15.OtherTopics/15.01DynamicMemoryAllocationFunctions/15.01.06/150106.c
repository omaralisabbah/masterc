/*
    15.01 Dynamic Memory Allocation Functions : 01 malloc Function

    malloc for dynamic memory allocation:
    - The malloc function allocates space for an object whose size is specified by size "In-Bytes".
    - The value of the allocated space is indeterminated.
    - If there is no space available, the malloc function return Null.
    - Syntax : void *malloc(size_t size);

*/


#include <stdio.h>
#include <stdlib.h>

unsigned int *Ptr = NULL;

int main() {
    printf("15.01 Dynamic Memory Allocation Functions : 01 malloc Function \n");
    printf("-------------------------------------------------------------- \n");

    //printf("%i \n", sizeof(int));

    printf("Value Reserved = 0x%X \n", Ptr);
    Ptr = (unsigned int*)malloc(5 * sizeof(unsigned int));
    if (NULL != Ptr) {
        *Ptr = 0x99;
        printf("Value at location = 0x%X , Value Reserved = 0x%X \n", Ptr, *Ptr);
        Ptr++;
        printf("Value at location = 0x%X , Value Reserved = 0x%X \n", Ptr, *Ptr);
    }
    else {
        printf("Error \n"); 
    }


    return 0;
}