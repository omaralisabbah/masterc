/*
    Algorithms : 02 Linear(Sequential) Search

    -
    -
    -
    
*/

#include <stdio.h>
#include <stdlib.h>

#define DATA_MAX_SIZE     10
#define ELEMENT_NOT_FOUND -1

typedef unsigned int uint32;

unsigned int My_Data[DATA_MAX_SIZE] = {11, 22, 33, 44, 55, 66, 77, 88 ,99 ,100};

uint32 PerformeLinearSearchAlgorithm_1(uint32 Data[], uint32 Data_Length, uint32 Req_Data);
uint32 PerformeLinearSearchAlgorithm_2(uint32 Data[], uint32 Data_Length, uint32 Req_Data);

int main()
{
    printf("Algorithms : 02 Linear Search \n");
    printf("----------------------------- \n");
    uint32 Ret = 0;

    Ret = PerformeLinearSearchAlgorithm_1(My_Data, DATA_MAX_SIZE, 77); // 6
    printf("Element is found with index = %i \n", Ret);


    Ret = PerformeLinearSearchAlgorithm_1(My_Data, DATA_MAX_SIZE, 999); // -1
    if(ELEMENT_NOT_FOUND == Ret)
    {
        printf("Element is not found in your data !!\n");
    }

    printf("----------------------------- \n");

    Ret = PerformeLinearSearchAlgorithm_2(My_Data, DATA_MAX_SIZE, 77); // 6
    printf("Element is found with index = %i \n", Ret);


    Ret = PerformeLinearSearchAlgorithm_2(My_Data, DATA_MAX_SIZE, 999); // -1
    if(ELEMENT_NOT_FOUND == Ret)
    {
        printf("Element is not found in your data !!\n");
    }

    return 0;
}

uint32 PerformeLinearSearchAlgorithm_1(uint32 Data[], uint32 Data_Length, uint32 Req_Data)
{
    uint32 Index = 0;

    for(Index = 0; Index < Data_Length; Index++)
    {
        if(Req_Data == Data[Index])
        {
            return Index;
        }
        else { /* Nothing */ }
    }

    return -1;
}

uint32 PerformeLinearSearchAlgorithm_2(uint32 Data[], uint32 Data_Length, uint32 Req_Data)
{
    uint32 Left_Index = 0;
    uint32 Right_Index = Data_Length - 1;

    for(Left_Index = 0; Left_Index <= Right_Index;)
    {
        if(Req_Data == Data[Left_Index])
        {
            return Left_Index;
        }
        else { /* Nothing */ }

        if(Req_Data == Data[Right_Index])
        {
            return Right_Index;
        }
        else { /* Nothing */ }

        Left_Index++;
        Right_Index--;
    }

    return -1;
}