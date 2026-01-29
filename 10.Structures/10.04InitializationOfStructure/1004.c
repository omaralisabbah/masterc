/*
	10 Structures: 04 Initialization Of Structure

	There is three methods to initialize struct

	Note:
	[1] We can not initialize the member of the structure at the time of declaration because,
		there is no memory is allocated to the members at the time of declaration.

	[2] A structure type declaration in only template.
	[3] We can only initialize the structure members using the curly braces {}.
	[4] The Size of object of type struct >= summation of all elements types.


*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student_Info {
	char student_name[30];
	float student_degree;
	unsigned short student_id;
	// struct Student_Data* data_ptr;
};

// method [1]
struct Student_Info omar = { "omaralisabbah", 3.23, 22 };


// method [2]
struct Student_Info ali;


// method [3]
struct Student_Info Mohammed = {
	.student_name = "Mohammed",
	.student_degree = 2.62,
	.student_id = 26
};

int main() {
	printf("10 Structures: 04 Initialization Of Structure \n");
	printf("--------------------------------------------- \n");

	printf("%s \n", omar.student_name);
	printf("%0.2f \n", omar.student_degree);
	printf("%i \n", omar.student_id);
	printf("Size of omar object = %i \n", sizeof(omar));

	printf("--------------------------------------------- \n");

	ali.student_name[0] = 'A';
	ali.student_name[1] = 'l';
	ali.student_name[2] = 'i';
	printf("%s \n", ali.student_name);

	//Using string.h lib
	//strcpy(ali.student_name, "Source");
	//printf("%s \n", ali.student_name);

	printf("--------------------------------------------- \n");

	printf("%s \n", Mohammed.student_name);
	printf("%0.2f \n", Mohammed.student_degree);
	printf("%i \n", Mohammed.student_id);

	return 0;
}