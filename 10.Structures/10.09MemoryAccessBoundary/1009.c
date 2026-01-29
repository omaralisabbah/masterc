/*
	10 Structures: 09 Memory Access Boundary

	Memory access boundary:
	-
	In real-world processors, does not read or write the memory byte by byte but
	actually, for performance reason, it accesses the memory in the formates like 2,4,8,16,32 bytes
	of chunks at a time.

	The hardware designers often restrict the processor such that it can access memory only
	at a certain boundaries.


	Ex : Processor may be able to access the memory only at four byte boundaries.


	How the processor will read address 3 and address 4 ?!

	[1] The processor has to access the memory location with address 0 and read
		the four consecutive bytes (from address 0 to 3).

	[2] Next, it has to use shift operations to separate the content of address 3 from
		the other three bytes (from addresses 0 to 2)

	[3] Similarly, the processor can access address 4 and read another four byte
		chunk (from address 4 to 7).

	[4] Finally, shift operations can be used to separate the desired byte (at address 4)
		from the other three bytes.

	[5] Memory access boundary limitation exists because making certain assumptions about
		the address can simplify the hardware design.


	Note :
	[1] Generally, the compiler handles the scenario of alignment and it aligned the variable in their boundary
	[2] In the 32 bits x86 architechture the alignment of data type generally similar to their length
	[3] Alignemnt is an architechture dependent
	[4] Search about Access memory boundary (figures)

*/

#include <stdio.h>
#include <stdlib.h>


int main() {
	printf("10 Structures: 09 Memory Access Boundary \n");
	printf("---------------------------------------- \n");

	return 0;
}