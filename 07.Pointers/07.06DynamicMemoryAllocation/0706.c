/*
	07 Pointers: 06 Dynamic Memory Allocation

	Segment = (Piece of memory)

	- Basically, the memory layout of C program contains five main segments.
		- Stack Segment
		- Heap Segment
		- BSS Segment (Block Started by Symbol)
		- Data Segment
		- Text or Code Segment

	- Each segment has own read, write and executable permission.
		- If a program tries to access the memory in a way that is not allowed then the segmentation fault occurs.
		- A segmentation fault is a common problem that causes programs to crash.

		- In Microcontrollers Memory There is two types of memory
			[1] ROM (Flash) [ Unused area - .data - .rodata - .text/code - .vector table ]
				- Contain the code that processor is going to execute.
				- When the electricity runs out, flash can keep data (.data section).

			[2] RAM (SRAM) [ Stack - Unused area - heap - .bss - .data ]
				- Contain the data that you do operations on it.
				- Heap, when you need to reserve memory in run time.

	Note :
	[1] Global variable initialized there is two copies stored in (flash), (RAM) in .data section.
	[2] There is a code called startup code, when you run your program the startup code copy the data from ROM to RAM.
	[3] Any data in .bss section has a value equal to zero.
	[4] Any constant globoal variable stored in ROM in .rodata section.
	[5] Any Data stored in stack, you can change it directly or indirectly.
	[6] After Printing out the function output, the Stack Frame disappears.


	Search :
	- Search about startup code
	- Stack and garbage value relationship
*/

#include <stdio.h>

/* global variable initialized ( flash => .data) */
unsigned int Number1 = 55; // Two copies one in ROM and the other in RAM in place called (.data section)

/* Global Variable Not Initialized (Ram => .bss) */
unsigned int Number2; // One copy Stored in RAM and its value equal to zero.

/* global variable initialized to 0 (Ram => .bss) */
unsigned int Number3 = 0; // Problem !!

/* constant global variable initialized to 55 ( flash => .rodata) */
const unsigned int Number4 = 55; // Stored in ROM in .rodata section.

/* static constant global variable initialized to 99 */
static const unsigned int Number10 = 99; 

unsigned int Get_Summing(unsigned int Num1, unsigned int Num2);


int main() {
	printf("07 Pointers: 06 Dynamic Memory Allocation \n");
	printf("----------------------------------------- \n");

	/* Local Variable Initialized */
	unsigned int Number1 = 56; // RAM Stored in Stack

	/* Local Variable Not Initialized */
	unsigned int Number2; // RAM Stored in Stack

	/* Local Variable Initialized To 0 */
	unsigned int Number3 = 0; // RAM Stored in Stack

	/* Constant Local Variable Initialized To 55 */
	const unsigned int Number4 = 55; // RAM Stored in Stack

	printf("----------------------------------------- \n");

	/* Static Local Variable Initialized */
	static unsigned int Number5 = 55;

	/* Static Local Variable Not Initialized */
	static unsigned int Number6; 

	/* Static Local Variable Initialized To 0 */
	static unsigned int Number7 = 0;

	/* Static Constant Local Variable Initialized To 55 */
	static const unsigned int Number8 = 55;

	// Stack Frame contain variable functions datatypes.
	unsigned int result = Get_Summing(2, 3); 
	printf("result = %i \n", result);
	

	return 0;
}

void print_func(void) { // (.text/code)
	printf("hola \n");
}

unsigned int Get_Summing(unsigned int Num1, unsigned int Num2) {
	unsigned int Number1 = 55; /* Local Variable Initialized */
	unsigned int Number2; /* Local Variable Not Initialized */
	unsigned int Number3 = 0; /* Local Variable Initialized To 0 */

	return (Num1 + Num2);
}