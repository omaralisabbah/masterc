/*
    10 Structures: 11 Structure Padding

    Note:

    [1] According to struct data organization, the less memory can be reserved (compiler dependent 4or8 alignment)
    [2] size of object should be divided to the size of the biggest data size element
    [3] Memory alignment Increases code optimization

*/

#include <stdio.h>
#include <stdlib.h>

// Sizeof struct equal 8 because of padding to force memory to aligne with 4 byte alignment
struct test {
    char varone; // 1 Byte + 3 Byte Padding
    unsigned int vartwo; // 4 Byte
    char varthree; // 1 Byte + 7 Byte Padding
    char* ptr; // 8 Byte
}obj; // total = 24 (compiler dependent 4or8 alignment)

int main() {
    printf("10 Structures: 11 Structure Padding \n");
    printf("----------------------------------- \n");

    printf("Object Size : %i \n", sizeof(obj));
    printf("Object Size : %i \n", sizeof(&obj)); // 64 bit architecture

    return 0;
}