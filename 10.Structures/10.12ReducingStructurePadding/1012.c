/*
	10 Structures: 12 Reducing Structure Padding

	In case of structure and union we can save the wastage of memory to rearrange the structure members
	in the order of the largest size to smallest.

*/

#include <stdio.h>
#include <stdlib.h>


struct test1 {
	char var1; // 1 Byte + 3 Padding
	int var2; // 4
	char var3; // 1 Byte + 3 Padding
}obj1; // 12 Byte


struct test2 {
	int var2; // 4
	char var1; // 1 Byte + 1 Padding
	char var3; // 1 Byte + 1 Padding
}obj2; // 8 Byte

int main() {
	printf("10 Structures: 12 Reducing Structure Padding \n");
	printf("-------------------------------------------- \n");

	printf("Object Size : %i \n", sizeof(obj1));
	printf("Object Size : %i \n", sizeof(obj2)); // 4 Bytes Saved

	return 0;
}