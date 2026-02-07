/*
    Algorithms: Bubble Sort

    -
    -
    -
    
*/

#include <stdio.h>
#include <stdlib.h>

#define MY_DATA_MAX_SIZE  10

unsigned int My_Data[MY_DATA_MAX_SIZE] = {8, 1, 9, 5, 0, 7, 3, 2, 4, 6};
unsigned int My_Data1[MY_DATA_MAX_SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

void Swap_Two_Numbers(unsigned int *pNumber1, unsigned int *pNumber2);
void Execute_Bubble_Sort(unsigned int my_array[], unsigned int array_length);
void Print_My_Data(unsigned int my_array[], unsigned int array_length);

int main()
{
    printf("Algorithms: Bubble Sort \n");
    printf("--------------------------- \n");

    Print_My_Data(My_Data1, MY_DATA_MAX_SIZE);
    Execute_Bubble_Sort(My_Data1, MY_DATA_MAX_SIZE);
    Print_My_Data(My_Data1, MY_DATA_MAX_SIZE);
    return 0;
}

void Swap_Two_Numbers(unsigned int *pNumber1, unsigned int *pNumber2){
    unsigned int Temp_Number = *pNumber1;
    *pNumber1 = *pNumber2;
    *pNumber2 = Temp_Number;
}

void Execute_Bubble_Sort(unsigned int my_array[], unsigned int array_length){
    unsigned int BS_Iteration = 0, Adjacent_Iteration = 0;
    unsigned char Sort_Flag = 0;

    for(BS_Iteration=0; BS_Iteration<array_length-1; BS_Iteration++){

        for(Adjacent_Iteration=0; Adjacent_Iteration < (array_length-BS_Iteration-1); Adjacent_Iteration++){
            if(my_array[Adjacent_Iteration] > my_array[Adjacent_Iteration+1]){
                Swap_Two_Numbers(&my_array[Adjacent_Iteration], &my_array[Adjacent_Iteration+1]);
                Sort_Flag = 1;
            }
        }

        if(Sort_Flag == 0){
            return;
        }
    }
}

void Print_My_Data(unsigned int my_array[], unsigned int array_length){
    unsigned int Data_Counter = 0;
    for(Data_Counter=0; Data_Counter<array_length; Data_Counter++){
        printf("%i\t", my_array[Data_Counter]);
    }
    printf("\n");
}