/*
	06 Arrays: 09 Passing Array To Function As a Parameter

	Note :
	[1] If you are not going to change function parameters inside function, make them const [VI]

*/

#include <stdio.h>
#include <stdlib.h>

unsigned int arr1D[5] = { 11, 44, 41, 51, 66 };

char arr2D[5][30] = { "11, 22, 33, 44, 55",
						 "111, 222, 333, 444, 555",
						 "11, 22, 33, 44, 55",
						 "111, 222, 333, 444, 555",
						 "11, 22, 33, 44, 55", };

void Print_arrOneDimV1(const unsigned int array1DParam[], const unsigned int Length);
void Print_arrOneDimV2(const unsigned int array1DParam[5], const unsigned int Length);
void Print_arrTwoDimV1(const char arrTwoD[][30], const unsigned int Length);

int main() {

	printf("06 Arrays: 09 Passing Array To Function As a Parameter \n");
	printf("------------------------------------------------------ \n");

	Print_arrOneDimV1(arr1D, 5); // arr1D is the address of first element

	printf("------------------------------------------------------ \n");

	Print_arrOneDimV2(arr1D, 5);

	printf("------------------------------------------------------ \n");

	Print_arrTwoDimV1(arr2D, 5);

	return 0;
}

// First Way : parameter as an unsized array (const to prevent user from changing array length )
void Print_arrOneDimV1(const unsigned int array1DParam[], const unsigned int Length) { // Most Used
	unsigned int index = 0;

	for (index = 0; index < Length; index++) {
		printf("arr1D [%i] = %i \n", index, array1DParam[index]);
	}
}


// Second Way : parameter as a sized array
void Print_arrOneDimV2(const unsigned int array1DParam[5], const unsigned int Length) {
	unsigned int index = 0;

	for (index = 0; index < Length; index++) {
		printf("arr1D [%i] = %i \n", index, array1DParam[index]);
	}
}


void Print_arrTwoDimV1(const char arrTwoD[][30], const unsigned int Length) { // At least determine second dimension
	unsigned int index = 0;
	for (index = 0; index < Length; index++) {
		printf("%s \n", arrTwoD[index]);
	}

}