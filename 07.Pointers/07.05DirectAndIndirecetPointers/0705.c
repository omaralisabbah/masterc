/*
	07 Pointers: 05 Direct And Indirect Pointers




*/

#include <stdio.h>


int main() {
	printf("07 Pointers: 05 Direct And Indirect Pointers \n");
	printf("--------------------------------------------- \n");

	int x, y;
	int* p;

	// direct access
	x = 0xDEAD;
	y = 0xBEEF;
	p = &x;

	// indirect access
	*p = &x;
	p = &y;
	*p = 0x0200;

	return 0;
}

