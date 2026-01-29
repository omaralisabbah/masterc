/*
    10 Structures: 14 Structure Bit Field


*/

#include <stdio.h>
#include <stdlib.h>


typedef struct {
    unsigned char Pin0 : 1;
    unsigned char Pin1 : 1;
    unsigned char Pin2 : 1;
    unsigned char Pin3 : 1;
    unsigned char Pin4 : 1;
    unsigned char Pin5 : 1;
    unsigned char Pin6 : 1;
    unsigned char Pin7 : 1;
}port_reg_t1;

// two elements 1. Struct / 2. Variable equal to struct size
typedef union {
    struct {
        unsigned char Pin0 : 1;
        unsigned char Pin1 : 1;
        unsigned char Pin2 : 1;
        unsigned char Pin3 : 1;
        unsigned char Pin4 : 1;
        unsigned char Pin5 : 1;
        unsigned char Pin6 : 1;
        unsigned char Pin7 : 1;
    };
    unsigned char PinsReset;
}port_reg_t2;


int main() {
    printf("10 Structures: 14 Structure Bit Field \n");
    printf("------------------------------------- \n");

    port_reg_t1 reg_1;
    printf("Value : %i \n", (reg_1));
    printf("reg_1 size : %i \n", sizeof(reg_1));
    reg_1.Pin0 = 1;
    reg_1.Pin1 = 1;
    reg_1.Pin2 = 1;
    reg_1.Pin3 = 1;
    reg_1.Pin4 = 1;
    reg_1.Pin5 = 1;
    reg_1.Pin6 = 1;
    reg_1.Pin7 = 1;

    printf("------------------------------------- \n");

    printf("Pin0 Value : %i \n", (reg_1.Pin0));
    printf("Pin1 Value : %i \n", (reg_1.Pin1));
    printf("Pin2 Value : %i \n", (reg_1.Pin2));
    printf("Pin3 Value : %i \n", (reg_1.Pin3));
    printf("Pin4 Value : %i \n", (reg_1.Pin4));
    printf("Pin5 Value : %i \n", (reg_1.Pin5));
    printf("Pin6 Value : %i \n", (reg_1.Pin6));
    printf("Pin7 Value : %i \n", (reg_1.Pin7));

    printf("------------------------------------- \n");

    port_reg_t2 reg_2;
    printf("Value : %i \n", (reg_2));
    printf("reg_2 size : %i \n", sizeof(reg_2));

    printf("------------------------------------- \n");

    reg_2.PinsReset = 0x55; // 10101010
    printf("Pin0 Value : %i \n", (reg_2.Pin0));
    printf("Pin1 Value : %i \n", (reg_2.Pin1));
    printf("Pin2 Value : %i \n", (reg_2.Pin2));
    printf("Pin3 Value : %i \n", (reg_2.Pin3));
    printf("Pin4 Value : %i \n", (reg_2.Pin4));
    printf("Pin5 Value : %i \n", (reg_2.Pin5));
    printf("Pin6 Value : %i \n", (reg_2.Pin6));
    printf("Pin7 Value : %i \n", (reg_2.Pin7));

    return 0;
}