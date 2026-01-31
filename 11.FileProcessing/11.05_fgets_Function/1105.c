/*
    11 File Processing: 04 fgets Function


    Note :
    [1] fgets reading data from the first line until the limited number of characters ends or
        until it found a new line \n.

    [2]

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    unsigned char student_name[30];
    unsigned int student_id;
    float student_degree;
}student_info_t;

FILE* my_file = NULL;
student_info_t student;

char read_student_data[85];
void fetch_student_data(student_info_t* ptr_std, unsigned int* student_data);

int main() {
    printf("11 File Processing: 04 fgets Function \n");
    printf("------------------------------------- \n");
    
    unsigned int student_counter = 0;
    my_file = fopen("student.txt", "r");
    if (NULL != my_file) {
        printf("File has beed read \n");
        fgets(read_student_data, 85, my_file); // Reading 85 Character from the first line
        printf("Data : %s \n", read_student_data);
        printf("Char : %c \n", read_student_data[1]);

    }
    else {
        printf("Error \n");
    }

    printf("------------------------------------- \n");

    fetch_student_data(&student, read_student_data);

    printf("------------------------------------- \n");
    
    unsigned int fclose_ret = 0;
    fclose_ret = fclose(my_file);
    if (0 == fclose_ret) {
        printf("File has been Closed \n");
    }
    else {
        printf("Error \n");
    }
    
    return 0;
}

void fetch_student_data(student_info_t* ptr_std, unsigned int* student_data) {
    char student_id_str[3];
    strncpy(student_id_str, ++student_data, 2);
    printf("Id = %s \n", student_id_str);

    char student_name_str[30];
    strncpy(student_name_str, student_data + 3, 30);
    printf("Name = %s \n", student_name_str);

    unsigned char student_degree_str[5];
    strncpy(student_degree_str, student_data + 8, 5);
    printf("Degree = %s \n", student_degree_str);

    ptr_std->student_id = (double)atoi(student_id_str);
    strcpy(ptr_std->student_name, student_name_str);
    ptr_std->student_degree = atoi(student_degree_str);
}

void print_student_info(student_info_t* ptr_student) {
    printf("Student ID     : %i \n", ptr_student->student_id);
    printf("Student Name   : %s \n", ptr_student->student_name);
    printf("Student Degree : %0.2f \n", ptr_student->student_degree);

    printf("------------------------------------- \n");

}