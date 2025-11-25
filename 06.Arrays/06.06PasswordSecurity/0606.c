/*
    06 Arrays: 06 Password Security

    Note:
    - %c with scanf problem
    - Clear the buffer or will take the ascii code of the enter as char

*/

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

unsigned char Pass[5] = { 'O', 'm', 'a', 'r', '1' };
unsigned char UserPass[5];

int main() {

    printf("06 Arrays: 06 Password Security \n");
    printf("------------------------------- \n");

    unsigned int UserPassIndex = 0;
    unsigned int PassFlag = 0;
    unsigned int Trails = 0;

    while (Trails < 3) {
        printf("Please enter pass : ");
        for (UserPassIndex = 0; UserPassIndex < 5; UserPassIndex++) {
            scanf("%c", &UserPass[UserPassIndex]);
            fflush(stdin); /* Clear buffer */
        }
        printf("\n");

        printf("Please wait ");
        for (UserPassIndex = 0; UserPassIndex < 3; UserPassIndex++) {
            printf(".");
            Sleep(300);
        }
        printf("\n");

        for (UserPassIndex = 0; UserPassIndex < 5; UserPassIndex++) {
            if (UserPass[UserPassIndex] != Pass[UserPassIndex]) {
                PassFlag = 1;
                break;
            }
        }

        if (1 == PassFlag) {
            Trails++;
            PassFlag = 0;
            printf("Invalid Pass !! \n");
            printf("Please enter your pass again \n");
        }
        else {
            printf("Welcome \n");
            break;
        }
    }

    return 0;
}
