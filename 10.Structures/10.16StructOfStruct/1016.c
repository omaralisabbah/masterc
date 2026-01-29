/*
	18 Structures: 16 Struct Of Struct


*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char father_name[30];
    char mother_name[30];
    char home_address[30];
}student_details_t;


typedef struct {
    char student_name[30];
    float student_degree;
    unsigned short student_id;
    student_details_t student_details; // Struct of struct
}student_t;


student_t omar;

int main() {
	printf("18 Structures: 16 Struct Of Struct \n");
	printf("---------------------------------- \n");

    strcpy(omar.student_name, "OMARALISABBAH");
    omar.student_degree = 3.5;
    omar.student_id = 22;

    strcpy(omar.student_details.father_name, "ALIABDELWARETH");
    strcpy(omar.student_details.home_address, "MENOFIA");

	return 0;
}

