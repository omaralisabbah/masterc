/*
    15.05 Implementing Famous Functions: 04 memcmp


*/


#include <stdio.h>
#include <stdlib.h>

char name_1[13] = "omaralisabbah";
char name_2[13] = "omaralisabbah";

int my_memcmp(const void* FMemAddress, const void* SMemAddress, unsigned int Length);

int main() {

    printf("15.05 Implementing Famous Functions: 04 memcmp \n");
    printf("---------------------------------------------- \n");

    int RetState = my_memcmp(name_1, name_2, 13);
    printf("RetState = %i \n", RetState);

    return 0;
}



int my_memcmp(const void* FMemAddress, const void* SMemAddress, unsigned int Length) {
    int ReturnState = 0; /* Indicates DestAddress is equal to SrcAddress */
    unsigned char* TempFMemAddress = FMemAddress;
    unsigned char* TempSMemAddress = SMemAddress;

    if ((NULL == FMemAddress) || (NULL == SMemAddress)) {
        printf("Function failed due to a null pointer !! \n");
    }
    else {
        if (TempFMemAddress == TempSMemAddress) {
            ReturnState = 0; /* Indicates DestAddress is equal to SrcAddress */
        }
        else {
            while (Length) {
                if (*TempFMemAddress != *TempSMemAddress) {
                    ReturnState = (*TempFMemAddress < *TempSMemAddress) ? -1 : 1;
                    break;
                }
                else {
                    Length--;
                    TempFMemAddress++;
                    TempSMemAddress++;
                }
            }
        }
    }

    return ReturnState;
}