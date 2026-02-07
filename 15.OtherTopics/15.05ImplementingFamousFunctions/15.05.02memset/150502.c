/*
    15.05 Implementing Famous Functions: 02 memset 

*/


#include <stdio.h>
#include <stdlib.h>

char name_1[] = "omaralisabbah";
char name_2[] = "do not try to avoid implementation";

void* my_memset(void* StartAddress, unsigned char Value, unsigned int Length);

int main() {

    printf("15.05 Implementing Famous Functions: 02 memset \n");
    printf("---------------------------------------------- \n");
    
    printf("%s \n", name_1);
    memset(name_1+4, '*', 3);
    printf("%s \n", name_1);

    printf("---------------------------------------------- \n");

    printf("%s \n", name_2);
    my_memset(name_2, '*', 30);
    printf("%s \n", name_2);

    return 0;
}


void* my_memset(void* StartAddress, unsigned char Value, unsigned int Length) {
    unsigned char* TempPtr = StartAddress;

    if (NULL == StartAddress) {
        printf("my_memset function failed due to a null pointer !! \n");
    }
    else {
        while (Length--) {
            *TempPtr++ = Value;
        }
    }

    return StartAddress;
}