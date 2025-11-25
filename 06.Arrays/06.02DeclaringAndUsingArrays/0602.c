/*
	06 Arrays: 02 Declaring And Using Arrays

	An array is essentially a collection of elements.

	- The datatypes for all elements must be the same and store

	Note :

	[1] The first element is at the lowest adress and the last element is at the highest address in an array.
	[2] The size and type of an array "Static Configurations", that means can not be changed once its declared.
	[3] The size and type of an array "Static Configration", that means can not be changed once it is declared for now...
	[4] Initialization of array in C called (Designated Initializers)
	[5] The C99 Introduces a new mechanism to initialize the elements of the array.
	[6] In C array, there is no boundaries checking mechanisms. (VI)
	[7] The name of the array is the address of the array.
	[8] arr[x] = first elem address + (x *  size of elem) this formula explains why arrays is the fastest type of data structures.
*/

#include <stdio.h>

unsigned int ArrayOfElementsV1[5] = { 0x11, 0x12, 0x13, 0x14, 0x15 };
unsigned int ArrayOfElementsV2[5] = { 0x11 }; // Value of the first element
unsigned int var = 0x14;

//(Designated Initializers)
unsigned int ArrayOfDesignatedElements[25] = { 1, 2, 3, [17] = 17, 4, 5, 6};



int main() {
	printf("06 Arrays: 02 Declaring And Using Arrays \n");
	printf("---------------------------------------- \n");

	printf("Size of array = %i \n", sizeof(ArrayOfElementsV1));

	printf("Value = 0x%X \n", ArrayOfElementsV1[0]);
	printf("Value = 0x%X \n", ArrayOfElementsV1[1]);
	printf("Value = 0x%X \n", ArrayOfElementsV1[2]);
	printf("Value = 0x%X \n", ArrayOfElementsV1[3]);
	printf("Value = 0x%X \n", ArrayOfElementsV1[4]);
	printf("Value = 0x%X \n", ArrayOfElementsV1[5]);

	printf("---------------------------------------- \n");

	printf("var = 0x%X \n", var);
	ArrayOfElementsV1[5] = 0x15;
	printf("Value = 0x%X \n", ArrayOfElementsV1[5]);
	printf("var = 0x%X \n", var); // 15 ????????????? (no boundary checking)

	printf("---------------------------------------- \n");

	printf("Value = 0x%X \n", ArrayOfElementsV2[0]);
	printf("Value = 0x%X \n", ArrayOfElementsV2[1]);
	printf("Value = 0x%X \n", ArrayOfElementsV2[2]);
	printf("Value = 0x%X \n", ArrayOfElementsV2[3]);
	printf("Value = 0x%X \n", ArrayOfElementsV2[4]);

	printf("---------------------------------------- \n");

	ArrayOfElementsV1[1] = 0x111;
	ArrayOfElementsV1[2] = 0x452;
	ArrayOfElementsV1[22] = 0x222; // Warning
	 
	printf("Value = 0x%X \n", ArrayOfElementsV1[1]);
	printf("Value = 0x%X \n", ArrayOfElementsV1[2]);
	printf("Value = 0x%X \n", ArrayOfElementsV1[22]);

	printf("---------------------------------------- \n");

	printf("Array Address = 0x%X \n", ArrayOfElementsV1);
	printf("Array Address = 0x%X \n", &ArrayOfElementsV1);

	return 0;
}
