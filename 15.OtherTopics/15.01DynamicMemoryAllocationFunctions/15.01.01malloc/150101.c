/*
    15.01 Dynamic Memory Allocation Functions: 01 malloc

    (malloc) for dynamic memory allocation:

*/


#include <stdio.h>
#include <stdlib.h>

unsigned int *Ptr = NULL;

int main() {
    printf("15.01 Dynamic Memory Allocation Functions: 01 malloc \n");
    printf("---------------------------------------------------- \n");

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