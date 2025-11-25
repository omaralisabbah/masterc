/*
	06 Arrays: 08 Three Dimensional Array

*/

#include <stdio.h>
#include <stdlib.h>

unsigned int arr3D[3][3][3];

int main() {

	printf("06 Arrays: 08 Three Dimensional Array \n");
	printf("------------------------------------- \n");

	unsigned int index1 = 0;
	unsigned int index2 = 0;
	unsigned int index3 = 0;

	for (index1 = 0; index1 < 3; index1++) {
		for (index2 = 0; index2 < 3; index2++) {
			for (index3 = 0; index3 < 3; index3++) {
				printf("Values : %i \n", arr3D[index1][index2][index3]);
			}
		}
	}


	return 0;
}
