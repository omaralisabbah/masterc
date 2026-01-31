/*
    11 File Processing: 03 fclose Functions


*/

#include <stdio.h>
#include <stdlib.h>

FILE* my_file = NULL;

int main() {
    printf("11 File Processing: 03 fopen Function \n");
    printf("------------------------------------- \n");

    unsigned int fclose_ret = 0;
    my_file = fopen("test.txt", "w");
    if (NULL != my_file) {
        printf("File has been created \n");
    }
    else {
        printf("Error \n");
    }

    printf("------------------------------------- \n");

    fclose_ret = fclose(my_file);
    if (0 == fclose_ret) {
        printf("File has been Closed \n");
    }
    else {
        printf("Error \n");
    }

    return 0;
}