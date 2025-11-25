/*
    06 Arrays: 13 String Array Using Pointer Of Char

    Note :
    [1] Ptr is pointing to array of char, not a char.
*/



#include <stdio.h>
#include <stdlib.h>

char* Name1 = "Ahmed Abd El-Ghafar";
char* Name2 = "omaralisabbah";

// one byte more for null termination (numbers of characters + (1 for null termination))
char* Names[2] = { "Ahmed Abd El-Ghafar",
                  "omaralisabbah" };

char Names_2D[2][20] = { "Ahmed Abd El-Ghafar","omaralisabbah" };

// Pointer pointing to array (has length of 20 element) every element is a character
char(*Ptr)[20] = Names_2D;
char(*PtrNames_2D_1)[2][20] = Names_2D; 

unsigned int Numbers[2][3] = { {11, 12, 13}, {14, 15, 16} };
unsigned int(*PtrNumbers)[3] = Numbers;

int main()
{
    printf("06 Arrays: 13 String Array Using Pointer Of Char \n");
    printf("------------------------------------------------ \n");

    printf("Value = 0x%X \n", Names);
    printf("Value = 0x%X \n", Names[0]);
    printf("Value = 0x%X \n", Names[1]);

    printf("%s \n", Name1);
    printf("%s \n", Names[0]);
    printf("%s \n", Names[1]);

    printf("------------------------------------------------ \n");

    Ptr = Names_2D;
    printf("%s \n", Ptr);
    Ptr++; // Moving 20 byte in memory (according to Ptr number of element) (VI)
    printf("%s \n", Ptr);

    printf("------------------------------------------------ \n");

    printf("Value = %i \n", *(*PtrNumbers)); // Value of the first element
    printf("Value = %i \n", *PtrNumbers[0]);
    printf("Value = %i \n", *(PtrNumbers[0]));

    PtrNumbers++;
    printf("Value = %i \n", *(*PtrNumbers));
    printf("Value = %i \n", *PtrNumbers[0]);
    printf("Value = %i \n", *(PtrNumbers[0]));

    // PtrNumbers now has address of 14
    printf("Value = %i \n", *(PtrNumbers[0] + 1)); // Address of PtrNumbers[0] + 1 (4 bytes)
    printf("Value = %i \n", *(PtrNumbers[0] + 2));

    printf("Value = %i \n", *PtrNumbers[0] + 1); // PtrNumbers[0] Value + 1 = 14 + 1

    printf("------------------------------------------------ \n");

    printf("%c \n", *(PtrNames_2D_1[0][0]));
    printf("%c \n", *(PtrNames_2D_1[0][0] + 1));
    printf("%c \n", *(PtrNames_2D_1[0][1] + 0));
    printf("%c \n", *(PtrNames_2D_1[0][1] + 1));


    return 0;
}