/*
	10 Structures: 06 Passing Struct Object By Reference

	Note:
	[1] To allocate object in heap, you have to use dynamic memory allocation (malloc).

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct student_type {
	char student_name[30];
	float student_degree;
	unsigned short student_id;
}student_t;


student_t omar;
student_t* ptr_omar = NULL;

void print_student_data(student_t* Ptr);


int main() {
	printf("10 Structures: 06 Passing Struct Object By Reference \n");
	printf("---------------------------------------------------- \n");

	ptr_omar = &omar;

	strcpy(ptr_omar->student_name, "omaralisabbah");
	ptr_omar->student_degree = 6.5;
	ptr_omar->student_id = 11;

	printf("---------------------------------------------------- \n");

	// address of the fist byte of 40 byte allocated
	ptr_omar = (student_t*)malloc(sizeof(student_t));
	if (ptr_omar != NULL) {
		strcpy(ptr_omar->student_name, "omaralisabbah");
		ptr_omar->student_degree = 2.2;
		ptr_omar->student_id = 12;
		print_student_data(ptr_omar);
	}
	else {
		printf("Error !! \n");
	}

	free(ptr_omar);


	return 0;
}


void print_student_data(student_t* Ptr) {
	printf("Student Name   : %s \n", Ptr->student_name);
	printf("Student Degree : %0.2f \n", Ptr->student_degree);
	printf("Student Id     : %i \n", Ptr->student_id);
}