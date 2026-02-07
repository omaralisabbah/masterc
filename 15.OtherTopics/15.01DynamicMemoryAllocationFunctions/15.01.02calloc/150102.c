/*
    15.01 Dynamic Memory Allocation Functions: 02 calloc

    (calloc) for dynamic memory allocation:

*/


#include <stdio.h>
#include <stdlib.h>

unsigned int *Ptr = NULL;
unsigned int elements_number = 0;
int main() {
    printf("15.01 Dynamic Memory Allocation Functions: 02 calloc \n");
    printf("---------------------------------------------------- \n");

    printf("Please enter number of elements : ");
    scanf("%i", &elements_number);
    Ptr = (unsigned int*)calloc(elements_number, sizeof(unsigned int));
    if (NULL != Ptr) {
        printf("Memory of size {%i}, has been allocated \n", elements_number * sizeof(unsigned int));
        printf("Data at location [0x%X] = %i \n", Ptr, *Ptr);

        printf("Data at location [0x%X] = %i \n", (Ptr+1), (*Ptr+1));
        printf("Data at location [0x%X] = %i \n", (Ptr + 2), (*Ptr + 2));
        printf("Data at location [0x%X] = %i \n", (Ptr + 3), (*Ptr + 3));
        printf("Data at location [0x%X] = %i \n", (Ptr + 4), (*Ptr + 4));
    }
    else {
        printf("Error \n"); 
    }


    return 0;
}