/*
	10 Structures: 03 Special Structure Characteristics


	Note:

	[1] A structure does not contain a member with incomplete or function type (except the flexible array).
	[2] That is the reason at the time of structure declaration, it can not contains the instance of itself.
		but contains a pointer to itself.

	[3] You should not have a flexible array in struct between elements or only in struct.
	[4] GCC permits a C structure to have no members (accepted), but the object from this struct type does not reserve any memory.
	[5] In C++, the struct keyword is optional before declaration of a variable. In C, It's mandatory


*/

#include <stdio.h>
#include <stdlib.h>

// [1] Incomplete Type
struct Student_Info {
	char student_name[30];
	float student_degree;
	unsigned short student_id;
	struct Student_Data* data_ptr;
	// struct Student_Data StdName; // Error incomplete type
};

// Pointer has a fixed size
struct Student_Data {
	char student_name[30];
	float student_degree;
	unsigned short student_id;
	struct Student_Data* data_ptr; // No Problem
};

// Flexible array
struct Student_Data_A {
	char student_name[30];
	float student_degree;
	unsigned short student_id;
	char student_address[]; // Valid in C99, C11
};

// Flexible array member in a struct with no named members
struct Student_Data_B {
	char student_address[]; // Maybe Error
};


int main() {
	printf("10 Structures: 03 Special Structure Characteristics \n");
	printf("---------------------------------------------------- \n");


	return 0;
}