/*
	10 Structures: 08 Passing Struct Object By Value

	Note:
	[1] Using struct you can return more values from the same type.
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
void print_student(student_t student);
student_t get_student(void);

int main() {
	printf("10 Structures: 08 Passing Struct Object By Value \n");
	printf("------------------------------------------------ \n");

	ali = get_student();

	printf("------------------------------------------------ \n");

	print_student(ali);

	return 0;
}


// Not Recommended Waste of memory
void print_student(student_t student) {
	printf("Student Name   : %s \n", student.student_name);
	printf("Student Degree : %0.2f \n", student.student_degree);
	printf("Student Id     : %i \n", student.student_id);
}

student_t get_student(void) {
	student_t student;
	printf("Student Name   : ");
	gets(student.student_name);
	printf("Student Degree : ");
	scanf("%f", &(student.student_degree));
	printf("Student Id     : ");
	scanf("%i", &(student.student_id));

	return student;
}