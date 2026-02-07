/*
    15.01 Dynamic Memory Allocation Functions: 03 realloc

    (realloc) for dynamic memory allocation:


*/


#include <stdio.h>
#include <stdlib.h>

unsigned int *Ptr = NULL;
unsigned int elements_number = 0;

int main() {
    printf("15.01 Dynamic Memory Allocation Functions: 03 realloc \n");
    printf("----------------------------------------------------- \n");

    printf("Please enter number of elements : ");
    scanf("%i", &elements_number);
    Ptr = (unsigned int*)calloc(elements_number, sizeof(unsigned int));
    if (NULL != Ptr) {
        printf("Memory of size {%i}, has been allocated \n", elements_number * sizeof(unsigned int));
        printf("Data at location  [0x%X] = %i \n", Ptr, *Ptr);

        *(Ptr) = 0x11;
        *(Ptr+1) = 0x12;
        printf("Value at location [0x%X] = 0x%X \n", (Ptr), *(Ptr));
        printf("Value at location [0x%X] = 0x%X \n", (Ptr + 1), *(Ptr + 1));


        printf("------------------------------------------------------ \n");

        Ptr = (unsigned int*)realloc(Ptr, (elements_number + 2) * sizeof(unsigned int));
        printf("Data at location  [0x%X] = %i \n", Ptr);
        *(Ptr + 2) = 0x13;
        *(Ptr + 3) = 0x14; 
        printf("Value at location [0x%X] = 0x%X \n", (Ptr + 2), *(Ptr + 2));
        printf("Value at location [0x%X] = 0x%X \n", (Ptr + 3), *(Ptr + 3));
    }
    else {
        printf("Error \n"); 
    }


    return 0;
}