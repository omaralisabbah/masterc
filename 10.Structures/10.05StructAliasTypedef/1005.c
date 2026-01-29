/*
	10 Structures: 05 Struct Alias Typedef


	Note:
	[1] Using typedef with struct increase code readability.
	[2] Using typedef, its recommended not to name your struct, alias name is enough.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student_type {
	char student_name[30];
	float student_degree;
	unsigned short student_id;
}student_t; // This is not an object, this is the struct alias or struct new name

// Alias name + object name = object declaration
student_t omar;

int main() {
	printf("10 Structures: 05 Struct Alias Typedef \n");
	printf("-------------------------------------- \n");

	student_t omar;
	memset(omar.student_name, '\0', 20); // setting null in 20 byte allocated
	memcpy(omar.student_name, "omaralisabbah", 13); //be carefull garbage value (local variable)
	printf("omar.student_name : %s \n", omar.student_name);

	return 0;
}