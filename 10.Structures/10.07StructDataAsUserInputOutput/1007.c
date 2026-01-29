/*
    10 Structures: 07 Struct Data As User Input

    Note:
    [1] While passing an object with struct datatype to function, pass by reference.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct student_type {
    char student_name[30];
    float student_degree;
    unsigned short student_id;
}student_t;


student_t ali;
void get_student_data(student_t* student);
void print_student_data(student_t* Ptr);

int main() {
    printf("10 Structures: 07 Struct Data As User Input \n");
    printf("------------------------------------------- \n");

    get_student_data(&ali);

    printf("------------------------------------------- \n");

    print_student_data(&ali);

    return 0;
}


void get_student_data(student_t* student) {
    printf("Enter student name   : ");
    gets(&(student->student_name));
    printf("Enter student degree : ");
    gets(&(student->student_degree));
    printf("Enter student id     : ");
    gets(&(student->student_id));
}

void print_student_data(student_t* Ptr) {
    printf("Student Name   : %s \n", Ptr->student_name);
    printf("Student Degree : %0.2f \n", Ptr->student_degree);
    printf("Student Id     : %i \n", Ptr->student_id);
}