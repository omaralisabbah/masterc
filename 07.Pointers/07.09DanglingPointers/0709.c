/*
	07 Pointers: 09 Dangling Pointers

	Dangling pointers are arise when the referencing objec is deleted or deallocated,
	without changing the value of the pointers.

	When we try to access dangling pointer, it crashes the program.

	Note :
	[1] If the user asked for memory size more than the memory exist, the function will return NULL.
*/

#include <stdio.h>
#include <stdlib.h>

unsigned int User_Size = 0;
char* ptr = NULL;

int main() {

	printf("07 Pointers: 09 Dangling Pointers \n");
	printf("--------------------------------- \n");

	printf("Please enter size in bytes : ");
	scanf("%i", &User_Size); // reserve the memory size in heap

	ptr = malloc(User_Size); // gives you the address of the first byte
	printf("ptr = 0x%X \n", ptr);

	if (NULL == ptr) {
		printf("ERROR !! \n");
	}
	else {
		printf("Space reserved :0 \n");
		/* Operations */
	}

	free(ptr); // Clearing the memory space that you reserved.

	// Now What is the location inside the pointer ??
	// This Pointer is called Dangling Pointer
	// (because the reference object is deleted or deallocated, without changing the value of the pointer)
	// So what we should do ?!

	ptr = NULL; // Reseting pointer

	// *ptr = 212;

	return 0;
}
