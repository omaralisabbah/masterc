/*
	10 Structures: 02 Structure Definition

	A structure is used to create and store a (Package of data) related to each other,
	that describe a thing.

	You need to specify, how this package of data looks like ?

		- How many elements in this structure
		- How this elements ordered in this struture
		- What is the type of each element in this struture

	The C language supports the user-defined data types like :

	- Structure
	- Union
	- Enumeration

	Note:
	[1] It's optional to give a struct a name or not.
	[2] Structure take space from memory just when user create an object from structure, before that
		there is no space reserved in memory.

*/

#include <stdio.h>
#include <stdlib.h>

struct Student_Data {
	char student_name[30];
	float student_degree;
	unsigned short student_id;
};

struct Student_Info {
	char student_name[30];
	float student_degree;
	unsigned short student_id;
}student_three, student_one;

struct Student_Data student_four, student_zero;

int main() {
	printf("10 Structures: 02 Structure Definition \n");
	printf("-------------------------------------- \n");
	
	struct Student_Data Omar;
	struct Student_Data Samy;


	return 0;
}