/*
    05 Functions: 12 Pass 2D Array As Paramter

    Note :
    [1] The second dimension of the array function parameter must be fixed number.

*/


#include <stdio.h>
#include <stdlib.h>

#define NUMBERS1_1D_SIZE 3 // any number you want
#define NUMBERS1_2D_SIZE 3 // fixed number
#define NUMBERS2_1D_SIZE 4
#define NUMBERS2_2D_SIZE 3

unsigned int Numbers_1[NUMBERS1_1D_SIZE][NUMBERS1_2D_SIZE] = { {11, 22, 33},
                                                              {44, 55, 66},
                                                              {77, 88, 99} };

unsigned int Numbers_2[NUMBERS2_1D_SIZE][NUMBERS2_2D_SIZE] = { {11, 22, 33},
                                                              {88, 88, 88},
                                                              {44, 55, 66},
                                                              {77, 88, 99} };


/* Passing 2D array to function with row and column */
void PrintNumbers_1(const unsigned int PNumbers[NUMBERS1_1D_SIZE][NUMBERS1_2D_SIZE], const unsigned int PNumbers_1D_len);

/* Passing 2D array to function omitting the row */
void PrintNumbers_2(const unsigned int PNumbers[][NUMBERS1_2D_SIZE], const unsigned int PNumbers_1D_len);

/* Passing 2D array to function using pointers */
unsigned char PrintNumbers_3(const unsigned int(*PNumbers)[NUMBERS1_2D_SIZE], const unsigned int PNumbers_1D_len);

/* Passing 2D array to function using pointers */
unsigned char PrintNumbers_4(const unsigned int(*PNumbers)[NUMBERS1_1D_SIZE][NUMBERS1_2D_SIZE], const unsigned int PNumbers_1D_len);

int main() {

    printf("05 Functions: 12 Pass 2D Array As Paramter \n");
    printf("------------------------------------------ \n");

    PrintNumbers_1(Numbers_1, NUMBERS1_1D_SIZE);
    printf("------------------ \n");
    PrintNumbers_1(Numbers_2, NUMBERS2_1D_SIZE);


    printf("------------------------------------------ \n");

    PrintNumbers_2(Numbers_1, NUMBERS1_1D_SIZE);
    printf("------------------ \n");
    PrintNumbers_1(Numbers_2, NUMBERS2_1D_SIZE);

    printf("------------------------------------------ \n");

    PrintNumbers_3(Numbers_1, NUMBERS1_1D_SIZE);
    printf("------------------ \n");
    PrintNumbers_1(Numbers_2, NUMBERS2_1D_SIZE);

    printf("------------------------------------------ \n");

    PrintNumbers_4(Numbers_1, NUMBERS1_1D_SIZE);
    printf("------------------ \n");
    PrintNumbers_4(Numbers_2, NUMBERS2_1D_SIZE);


    return 0;
}


// [1]
void PrintNumbers_1(const unsigned int PNumbers[NUMBERS1_1D_SIZE][NUMBERS1_2D_SIZE], const unsigned int PNumbers_1D_len) {
    unsigned int Index_1D = 0;
    unsigned int Index_2D = 0;

    for (Index_1D = 0; Index_1D < PNumbers_1D_len; Index_1D++) {
        for (Index_2D = 0; Index_2D < NUMBERS1_2D_SIZE; Index_2D++) {
            printf("%i\t", PNumbers[Index_1D][Index_2D]);
        }
        printf("\n");
    }
}


// [2]
void PrintNumbers_2(const unsigned int PNumbers[][NUMBERS1_2D_SIZE], const unsigned int PNumbers_1D_len) {
    unsigned int Index_1D = 0;
    unsigned int Index_2D = 0;

    for (Index_1D = 0; Index_1D < PNumbers_1D_len; Index_1D++) {
        for (Index_2D = 0; Index_2D < NUMBERS1_2D_SIZE; Index_2D++) {
            printf("%i\t", PNumbers[Index_1D][Index_2D]);
        }
        printf("\n");
    }
}


// [3]
unsigned char PrintNumbers_3(const unsigned int(*PNumbers)[NUMBERS1_2D_SIZE],
    const unsigned int PNumbers_1D_len)
{
    unsigned char RetVal = 0; /* Ok */
    unsigned int Index_1D = 0;
    unsigned int Index_2D = 0;

    if (NULL == PNumbers)
    {
        RetVal = 1; /* NoK */
    }
    else
    {
        for (Index_1D = 0; Index_1D < PNumbers_1D_len; Index_1D++) {
            for (Index_2D = 0; Index_2D < NUMBERS1_2D_SIZE; Index_2D++) {
                printf("%i\t", PNumbers[Index_1D][Index_2D]);
            }
            printf("\n");
        }
    }
    return RetVal;
}


// [4]
// Here, you must give the array number of rows
unsigned char PrintNumbers_4(const unsigned int(*PNumbers)[NUMBERS1_1D_SIZE][NUMBERS1_2D_SIZE],
    const unsigned int PNumbers_1D_len)
{
    unsigned char RetVal = 0; /* Ok */
    unsigned int Index_1D = 0;
    unsigned int Index_2D = 0;

    if (NULL == PNumbers)
    {
        RetVal = 1; /* NoK */
    }
    else
    {
        for (Index_1D = 0; Index_1D < PNumbers_1D_len; Index_1D++) {
            for (Index_2D = 0; Index_2D < NUMBERS1_2D_SIZE; Index_2D++) {
                printf("%i\t", (*PNumbers)[Index_1D][Index_2D]);
            }
            printf("\n");
        }
    }
    return RetVal;
}