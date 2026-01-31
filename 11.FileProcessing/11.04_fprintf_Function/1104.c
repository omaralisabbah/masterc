/*
    11 File Processing: 04 fprintf Function


*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    unsigned char student_name[30];
    unsigned int student_id;
    float student_degree;
}student_info_t;

FILE* my_file = NULL;
student_info_t student;


int main() {
    printf("11 File Processing: 04 fprintf Function \n");
    printf("--------------------------------------- \n");

    unsigned int student_counter = 0;
    my_file = fopen("student.txt", "w");
    if (NULL != my_file) {
        printf("File has been created \n");
        for (student_counter; student_counter < 1; student_counter++) {
            
            fflush(stdin);
            printf("Please enter the student id     : \n");
            scanf("%i", &student.student_id);

            printf("Please enter the student name   : \n");
            gets(student.student_name);

            printf("Please enter the student degree : \n");
            scanf("%0.2f", &student.student_degree);
            
            unsigned int ret  = fprintf(my_file, "Id %i - Name : [%s] - Degree [%0.2f] \n",
                                        student.student_id,
                                        student_counter,
                                        student.student_name,
                                        student.student_degree);
            printf("ret = %i : \n", ret); // Number of characters that fprintf has reserved
        }
    }
    else {
        printf("Error \n");
    }

    return 0;
}