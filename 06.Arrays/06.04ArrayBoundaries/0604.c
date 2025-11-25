/*
	06 Arrays: 04 Array Boundaries


	
*/

#include <stdio.h>

unsigned int ArrayOfElements[5] = {0x11,
                                   0x12,
                                   0x13,
                                   0x14,
                                   0x15};

unsigned int NumberOne = 0x52;

int main() {
	printf("06 Arrays: 04 Array Boundaries \n");
	printf("------------------------------ \n");

    printf("NumberOne = 0x%X \n", NumberOne);

    ArrayOfElements[5] = 0x991;

    printf("Value = 0x%X \n", ArrayOfElements[5]);
    printf("NumberOne = 0x%X \n", NumberOne); // ?!?!?!?

    printf("------------------------------ \n");

    printf("Address = 0x%X \n", &ArrayOfElements[0]);
    printf("Address = 0x%X \n", ArrayOfElements);


	return 0;
}
