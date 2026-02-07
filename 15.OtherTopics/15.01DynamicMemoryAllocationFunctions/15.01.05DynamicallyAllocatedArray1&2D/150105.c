/*
    15.01 Dynamic Memory Allocation Functions: 05 Dynamically Allocated Array

    We can create both static and dynamic array in C, these arrays can be
    one/multiple dimensional arrays.

    The Advantage of dynamically allocated array is that it is allocated on the heap at runtime.

*/


#include <stdio.h>
#include <stdlib.h>

unsigned int *Ptr = NULL;
unsigned int array_size;

unsigned int** double_ptr = NULL;
unsigned int rows_number = 0;
unsigned int columns_number = 0;

int main() {
    printf("15.01 : 05 Dynamically Allocated Array \n");
    printf("-------------------------------------- \n");
    /*
    unsigned int counter = 0, summing = 0;
    printf("Please enter array number of elements : ");
    scanf("%i", &array_size);
    Ptr = (unsigned int*)malloc((array_size * sizeof(unsigned int)));
    if (NULL != Ptr) {
        for (counter = 0; counter < array_size; counter++) {
            Ptr[counter] = counter;
        }

        for (counter = 0; counter < array_size; counter++) {
            summing += Ptr[counter];
        }
        
        printf("Summing = %i \n", summing); // summing from 0 to 19 

        free(Ptr);
    }
    else {
        printf("Error \n");
    }
    */
    printf("-------------------------------------- \n");

    printf("Please enter the number of rows    : ");
    scanf("%i", &rows_number);
    printf("Please enter the number of columns : ");
    scanf("%i", &columns_number);

    // array of addresses every address pointing to the first location of the first element of the row
    double_ptr = (unsigned int**)malloc(rows_number * sizeof(unsigned int*));

    for (unsigned int rows_counter = 0; rows_counter < rows_number; rows_counter++) {
        // Array of addresses every address pointing to an array
        double_ptr[rows_counter] = (unsigned int *)malloc((columns_number * sizeof(unsigned int)));
    }

    for (unsigned int rows_counter = 0; rows_counter < rows_number; rows_counter++) {
        for (unsigned int columns_counter = 0; columns_counter < columns_number; columns_counter++) {
            double_ptr[rows_counter][columns_counter] = 0x011;
        }
        printf("\n");
    }

    for (unsigned int rows_counter = 0; rows_counter < rows_number; rows_counter++) {
        for (unsigned int columns_counter = 0; columns_counter < columns_number; columns_counter++) {
            printf("0x%X ", double_ptr[rows_counter][columns_counter]);
        }
        printf("\n");
    }

    printf("-------------------------------------- \n");

    for (unsigned int rows_counter = 0; rows_counter < rows_number; rows_counter++) {
        printf("0x%X \n", double_ptr[rows_counter]);
    }

    printf("-------------------------------------- \n");

    // Free
    for (unsigned int rows_counter = 0; rows_counter < rows_number; rows_counter++) {
        free(double_ptr[rows_counter]);
    }
    free(double_ptr);

    return 0;
}