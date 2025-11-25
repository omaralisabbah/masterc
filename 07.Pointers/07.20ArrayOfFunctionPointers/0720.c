/*
    07 Pointers: 20 Array Of Function Pointers



*/


#include <stdio.h>
#include <stdlib.h>

void Print_Word1(void);
void Print_Word2(void);

void (*PtrNames1[2])(void) = { NULL, NULL };
void (*PtrNames2[2])(void) = { Print_Word1, Print_Word2 };


int main() {

    printf("07 Pointers: 20 Array Of Function Pointers \n");
    printf("------------------------------------------ \n");

    PtrNames1[0] = Print_Word1;
    PtrNames1[1] = Print_Word2;

    PtrNames1[0]();
    PtrNames1[1]();

    printf("------------------------------------------ \n");

    PtrNames2[0]();
    PtrNames2[1]();

    return 0;
}

void Print_Word1(void) {
    printf("OMAR ALI SABBAH1 \n");
}

void Print_Word2(void) {
    printf("OMAR ALI SABBAH2 \n");
}