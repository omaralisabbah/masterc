/*
	06 Arrays: 05 Arrays of Characters

	Note :

	[1] String terminator, every string should have a Null terminator
	[2] NULL Termination, add to array one more element

*/

#include <stdio.h>

unsigned int nums[] = { 1, 2, 3, 4, 5 };
char arr1[] = "OmarAliSabbah1"; // Every character as element
char arr2[] = { 'O', 'm', 'a', 'r', 'A', 'l', 'i', 'S', 'a', 'b', 'b', 'a', 'h', '2' };

int main() {
	printf("06 Arrays: 05 Array of Characters \n");
	printf("------------------------------------ \n");

	printf("%s \n", arr1);
	printf("%s \n", arr2);

	printf("------------------------------------ \n");

	printf("%s \n", arr1);
	// scanf("%s", arr1); // ignoring after space
	gets(arr1);
	printf("%s \n", arr1);

	return 0;
}
