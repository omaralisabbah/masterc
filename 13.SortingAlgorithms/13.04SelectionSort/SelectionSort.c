/*
    Algorithms : 06 Selection Sort

    -
    -
    -
    -
    
*/

#include <stdio.h>
#include <stdlib.h>

#define MY_DATA_MAX_SIZE  10

unsigned int My_Data[MY_DATA_MAX_SIZE] = {8, 1, 9, 5, 0, 7, 3, 2, 4, 6};
unsigned int My_Data[MY_DATA_MAX_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

void Swap_Two_Numbers(unsigned int *pNumber1, unsigned int *pNumber2);
void Print_My_Data(unsigned int my_array[], unsigned int array_length);
void Execute_Selection_Sort(unsigned int my_array[], unsigned int array_length);

int main()
{
    printf("Algorithms : 06 Selection Sort \n");
    printf("------------------------------ \n");

    Print_My_Data(My_Data, MY_DATA_MAX_SIZE);
    Execute_Selection_Sort(My_Data, MY_DATA_MAX_SIZE);
    Print_My_Data(My_Data, MY_DATA_MAX_SIZE);
    return 0;
}

void Swap_Two_Numbers(unsigned int *pNumber1, unsigned int *pNumber2){
    unsigned int Temp_Number = *pNumber1;
    *pNumber1 = *pNumber2;
    *pNumber2 = Temp_Number;
}

void Print_My_Data(unsigned int my_array[], unsigned int array_length){
    unsigned int Data_Counter = 0;
    for(Data_Counter=0; Data_Counter<array_length; Data_Counter++){
        printf("%i\t", my_array[Data_Counter]);
    }
    printf("\n");
}

void Execute_Selection_Sort(unsigned int my_array[], unsigned int array_length){
    unsigned int SSort_Iterator = 0;
    unsigned int Minimum_Index = 0;
    unsigned int Compare_Iterator = 0;

    for(SSort_Iterator = 0; SSort_Iterator < array_length-1; SSort_Iterator++){
        Minimum_Index = SSort_Iterator;

        for(Compare_Iterator = SSort_Iterator+1; Compare_Iterator < array_length; Compare_Iterator++){
            if(my_array[Compare_Iterator] < my_array[Minimum_Index]){
                Minimum_Index = Compare_Iterator;
            }
            else{
                /* Nothing */
            }
        }

        Swap_Two_Numbers(&my_array[Minimum_Index], &my_array[SSort_Iterator]);
    }
}