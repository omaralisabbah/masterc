/*
    15.05 Implementing Famous Functions: 03 memcpy


*/


#include <stdio.h>
#include <stdlib.h>

char name_1[30] = "-----------------------------!";
char name_2[30];

void* my_memcpy(void* DestAddress, const void* SrcAddress, unsigned int Length);

int main() {

    printf("15.05 Implementing Famous Functions: 03 memcpy \n");
    printf("---------------------------------------------- \n");

    printf("%s \n", name_2);
    my_memcpy(name_2, name_1, 30);
    printf("%s \n", name_2);


    return 0;
}


void* my_memcpy(void* DestAddress, const void* SrcAddress, unsigned int Length) {
    unsigned char* TempDestAddress = DestAddress;
    unsigned char* TempSrcAddress = SrcAddress;

    if ((NULL == DestAddress) || (NULL == SrcAddress)) {
        printf("MemCpy function failed due to a NULL pointer !! \n");
    }
    else {
        while (Length) {
            *TempDestAddress++ = *TempSrcAddress++;
            Length--;
        }
    }

    return DestAddress;
}