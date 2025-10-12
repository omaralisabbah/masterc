/*
	01 C Programming Language: 16 Variable Lifetime And Scope

	You will learn about the scope and lifetime of variables.

	When we create a variable in C, then two things are always attached with variable.
		- Data Type
		- Storage Class

	Storage class decides the extent (lifetime) and scope (visibility) of the variable in the program.

	You can say that the "storage class" of a variable determines whether the item has a "global" or a "local" lifetime.
		- C calls these two lifetimes "static" and "automatic"

	An item with a global or static lifetime exists and throughout the execution of the program.

	Storage class define the storage location "Memory Location" ( Stack - BSS - Register - Data - etc )
		- Based on the memory location, we determine the lifetime of a variable in the program.
		- It also helps us to trace the existance of a specific variable during the run-time of the program.


*/

#include <stdio.h>

unsigned int NumberOne = 55; // Global Scope
unsigned int Number_1 = 77;

void Print_NumberOne(void);


int main() {
	
	printf("01 C Programming Language: 16 Variable Lifetime And Scope \n");
	printf("--------------------------------------------------------- \n");

	unsigned int Number_1 = 11; // Local Scope

	printf("Number_1 = %i \n", Number_1);
	Print_NumberOne();


	printf("--------------------------------------------------------- \n");

	// Lifetime Scope
	{
		printf("Number_1 = %i \n", Number_1); // 11
		unsigned int Number_1 = 21;
		printf("Number_1 = %i \n", Number_1); // 21
		
		{
			printf("Number_1 = %i \n", Number_1); // 21
			unsigned int Number_1 = 51;
			printf("Number_1 = %i \n", Number_1); // 51
		}

		printf("Number_1 = %i \n", Number_1); // 21
	}

	printf("Number_1 = %i \n", Number_1); // 11


	return 0;
}

void Print_NumberOne(void) {
	unsigned int Number_1 = 22;

	printf("Number_1 = %i \n", Number_1);

}
