/*
    06 Arrays: 11 Access 2D Array Using Pointers

    Two Methods

*/



#include <stdio.h>
#include <stdlib.h>

unsigned int Numbers_2D[3][3] = { {11, 22, 33},
                                 {44, 55, 66},
                                 {77, 88, 99} };

unsigned int* Ptr = Numbers_2D;

int main()
{
    printf("06 Arrays: 11 Access 2D Array Using Pointers \n");
    printf("-------------------------------------------- \n");

    unsigned int Index1 = 0;
    unsigned int Index2 = 0;

    // First Method
    printf("Numbers_2D[1][1] = %i \n", Numbers_2D[1][1]);
    printf("Numbers_2D[2][2] = %i \n", Numbers_2D[2][2]);

    printf("Numbers_2D[2][2] = %i \n", *(Numbers_2D[2] + 2));
    printf("Numbers_2D[0][2] = %i \n", *(Ptr + 4));

    printf("-------------------------------------------- \n");

    // Second Method
    printf("Value = %i \n", *(*(Numbers_2D + 0)));
    printf("Value = %i \n", *(*(Numbers_2D + 1)));
    printf("Value = %i \n", *(*(Numbers_2D + 2)));
    printf("Value = %i \n", *(*(Numbers_2D + 2) + 0));
    printf("Value = %i \n", *(*(Numbers_2D + 2) + 1));
    printf("Value = %i \n", *(*(Numbers_2D + 2) + 2)); // *(*(Address + row_no ) + column_no))

    printf("-------------------------------------------- \n");

    for (Index1 = 0; Index1 < 3; Index1++) {
        for (Index2 = 0; Index2 < 3; Index2++) {
            printf("%i \t", *(*(Numbers_2D + Index1) + Index2));
        }
        printf("\n");
    }

    return 0;
}