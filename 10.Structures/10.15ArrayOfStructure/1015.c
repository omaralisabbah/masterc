/*
    10 Structures: 15 Array Of Structure


*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char student_name[30];
    float student_degree;
    unsigned short student_id;
}student_t;

// array of two elements having student_t data
student_t students[2] = { {"omaralisabbah1", 26, 262}, {"omaralisabbah2", 4.26, 124} };
student_t* students_ptr[2];

void get_students_data(student_t studen[], unsigned char arr_size);
void print_students_data(student_t studen[], unsigned char arr_size);


int main() {
    printf("10 Structures: 15 Array Of Structure \n");
    printf("------------------------------------ \n");

    strcpy(students[0].student_name, "omaralisabbah");
    students[0].student_degree = 1.25;
    students[0].student_id = 262;

    strcpy(students[1].student_name, "omaralisabbah");
    students[1].student_degree = 4.26;
    students[1].student_id = 124;

    printf("------------------------------------ \n");

    get_students_data(students, 2);
    print_students_data(students, 2);

    printf("------------------------------------ \n");

    strcpy(students[0].student_name, "omaralisabbah");
    students[0].student_degree = 4.26;
    students[0].student_id = 124;

    students_ptr[0] = &students[0];

    printf("%s", students_ptr[0]->student_name);
    printf("%0.2f", students_ptr[0]->student_degree);
    printf("%i", students_ptr[0]->student_id);


    return 0;
}


void get_students_data(student_t studen[], unsigned char arr_size) {
    unsigned char counter = 0;
    for (counter; counter < arr_size; counter++) {
        printf("Please Enter Student %i Name   : ", counter);
        gets(studen[counter].student_name);
        printf("Please Enter Student %i Degree : ", counter);
        scanf("%f", &(studen[counter].student_degree));
        printf("Please Enter Student %i Id     : ", counter);
        scanf("%i", &(studen[counter].student_id));
        fflush(stdin);
    }

}


void print_students_data(student_t studen[], unsigned char arr_size) {
    unsigned char counter = 0;
    for (counter; counter < arr_size; counter++) {
        printf("Student %i Name   : %s \n", counter, studen[counter].student_name);
        printf("Student %i Name   : %0.2f \n", counter, studen[counter].student_degree);
        printf("Student %i Name   : %i \n", counter, studen[counter].student_id);

    }

}