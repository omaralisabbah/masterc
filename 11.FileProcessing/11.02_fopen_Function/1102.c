/*
    11 File Processing: 02 fopen Functions


*/

#include <stdio.h>
#include <stdlib.h>

// First Step
FILE* my_file = NULL;

int main() {
    printf("11 File Processing: 02 fopen Function \n");
    printf("------------------------------------- \n");
    
    // fopen("file path","mode")
    my_file = fopen("test.txt", "w");
    if (NULL != my_file) {
        printf("File has been created \n");
    }
    else {
        printf("Error \n");
    }

    return 0;
}