/*
    10 Structures: 10 Memory Alignment

    Difference between aligned and unaligned memory access

    Aligned Access & Unaligned Access

    [1] Memory Access Boundary and Alignment (Aligned Access Restriction)
        • When memory is aligned then the processor easily fetches the data from the memory.
        • The processor takes one cycle to access the aligned data.
        • The processor will not generate any exception or fault.

        • When memory is not aligned then the processor takes some extra ticks to access the unaligned memory,
            if this is acceptable (unaligned access).
        • we access a 4-byte data from the unaligned address.
        • The processor will generate an exception (UsageFaults).
*/

#include <stdio.h>
#include <stdlib.h>

// Sizeof struct equal 8 because of padding to force memory alignment 
struct test {
    char var_one; // 1
    unsigned var_two; // 4
}obj;

int main() {
    printf("10 Structures: 10 Memory Alignment \n");
    printf("---------------------------------- \n");

    printf("Object Size : %i \n", sizeof(obj));

    return 0;
}