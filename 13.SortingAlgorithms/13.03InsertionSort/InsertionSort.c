/*
    Algorithms : 05 Insertion Sort

*/

#include <stdio.h>
#include <stdlib.h>

#define MY_DATA_MAX_SIZE  10

unsigned int My_Data[MY_DATA_MAX_SIZE] = {8, 1, 9, 5, 0, 7, 3, 2, 4, 6};

void Execute_Insertion_Sort(unsigned int my_array[], unsigned int array_length);
void Print_My_Data(unsigned int my_array[], unsigned int array_length);

int main()
{
    printf("Algorithms : 05 Insertion Sort \n");
    printf("------------------------------ \n");

    Print_My_Data(My_Data, MY_DATA_MAX_SIZE);
    Execute_Insertion_Sort(My_Data, MY_DATA_MAX_SIZE);
    Print_My_Data(My_Data, MY_DATA_MAX_SIZE);
    return 0;
}

void Execute_Insertion_Sort(unsigned int my_array[], unsigned int array_length){
    unsigned int IS_Iteration = 0;
    unsigned int Inserted_Item = 0;
    signed int Compared_Item_Index = 0;

    for(IS_Iteration = 1; IS_Iteration < array_length; IS_Iteration++){
        Inserted_Item = my_array[IS_Iteration];
        Compared_Item_Index = IS_Iteration - 1;

        while((Inserted_Item < my_array[Compared_Item_Index])&& (Compared_Item_Index >= 0)){
            my_array[Compared_Item_Index + 1] = my_array[Compared_Item_Index];
            Compared_Item_Index--;
        }

        my_array[Compared_Item_Index + 1] = Inserted_Item;
    }
}

void Print_My_Data(unsigned int my_array[], unsigned int array_length){
    unsigned int Data_Counter = 0;
    for(Data_Counter=0; Data_Counter<array_length; Data_Counter++){
        printf("%i\t", my_array[Data_Counter]);
    }
    printf("\n");
}