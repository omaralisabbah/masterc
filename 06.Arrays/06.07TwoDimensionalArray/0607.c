/*
	06 Arrays: 07 Two Dimensional Array

	2 Dimensional array can represent matrices.

	Note :
	[1] the last dimension in array is a must to determine.

*/

#include <stdio.h>
#include <stdlib.h>

// Each Element is array of 3 elements
unsigned int arr2D1[3][3] = { 1, 2, 3,
							 4, 5, 6,
							 7, 8, 9 };

unsigned int arr2D2[3][3] = { {1, 2, 3},
							 {4, 5, 6},
							 {7, 8, 9} };

char arrName[5][13] = { "omaralisabbah",
						"omaralisabbah",
						"omaralisabbah",
						"omaralisabbah",
						"omaralisabbah" };

int main() {

	printf("06 Arrays: 07 Two Dimensional Array \n");
	printf("----------------------------------- \n");

	unsigned int index1 = 0;
	unsigned int index2 = 0;

	// Printing out values
	printf("Values : \n");
	for (index1 = 0; index1 < 3; index1++) {
		for (index2 = 0; index2 < 3; index2++) {
			printf("%i \t", arr2D1[index1][index2]);
		}
		printf("\n");
	}

	printf("----------------------------------- \n");

	// Updating Values
	printf("Values : \n");
	for (index1 = 0; index1 < 3; index1++) {
		for (index2 = 0; index2 < 3; index2++) {
			scanf("%i", &arr2D1[index1][index2]);
		}
	}

	printf("----------------------------------- \n");

	for (index1 = 0; index1 < 3; index1++) {
		for (index2 = 0; index2 < 3; index2++) {
			printf("%i \t", arr2D1[index1][index2]);
		}
		printf("\n");
	}

	printf("----------------------------------- \n");

	// array of characters
	for (index1 = 0; index1 < 5; index1++) {
		for (index2 = 0; index2 < 13; index2++) {
			printf("%c", arrName[index1][index2]);
		}
		printf("\n");
	}

	return 0;
}
