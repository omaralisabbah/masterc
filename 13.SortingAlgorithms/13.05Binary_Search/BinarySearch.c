/*
    Algorithms : 03 Binary Search
    
    -
    -
    -
    
*/

#include <stdio.h>
#include <stdlib.h>

#define DATA_MAX_SIZE     10

typedef unsigned int uint32;
typedef signed int sint32;

sint32 MyData[DATA_MAX_SIZE] = {0, 11, 22, 33, 44, 55, 66, 77, 88, 99};

sint32 PerformeBinarySearchAlgorithm_1(sint32 Data[], uint32 S_Index, uint32 E_Index, sint32 Req_Value);
sint32 PerformeBinarySearchAlgorithm_2(sint32 Data[], uint32 S_Index, uint32 E_Index, sint32 Req_Value);

int main()
{
    printf("Algorithms : 03 Binary Search \n");
    printf("----------------------------- \n");
    sint32 Ret = 0;

    Ret = PerformeBinarySearchAlgorithm_2(MyData, 0, DATA_MAX_SIZE-1, 22); // 2
    printf("Ret = %i \n", Ret);
    Ret = PerformeBinarySearchAlgorithm_2(MyData, 0, DATA_MAX_SIZE-1, 77); // 7
    printf("Ret = %i \n", Ret);
    Ret = PerformeBinarySearchAlgorithm_2(MyData, 0, DATA_MAX_SIZE-1, 100); // -1
    printf("Ret = %i \n", Ret);

    return 0;
}


sint32 PerformeBinarySearchAlgorithm_1(sint32 Data[], uint32 S_Index, uint32 E_Index, sint32 Req_Value){
    uint32 M_Index = 0;

    while(S_Index <= E_Index){
        M_Index = S_Index + ((E_Index - S_Index) / 2); // middle index

        if(Req_Value == Data[M_Index]){
            return M_Index;
        }
        else if(Req_Value > Data[M_Index]){
            S_Index = M_Index + 1;
        }
        else{
            E_Index = M_Index - 1;
        }
    }

    return -1;
}


sint32 PerformeBinarySearchAlgorithm_2(sint32 Data[], uint32 S_Index, uint32 E_Index, sint32 Req_Value){
    uint32 M_Index = 0;

    while(S_Index <= E_Index){
        M_Index = S_Index + ((E_Index - S_Index) / 2);

        if(Req_Value == Data[M_Index]){
            return M_Index;
        }
        else if(Req_Value > Data[M_Index]){
            return PerformeBinarySearchAlgorithm_2(Data, M_Index+1, E_Index, Req_Value);
        }
        else{
            return PerformeBinarySearchAlgorithm_2(Data, S_Index, M_Index-1, Req_Value);
        }
    }

    return -1;
}