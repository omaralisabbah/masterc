/*
	07 Pointers: 07 Storage Classes


	Storage classes specify the scope, lifetime and binding of variables.

	To fully define a variable, one needs to mention not only its ‘type’ but also its storage class.
	A variable name identifies some physical location within computer memory,
	where a collection of bits are allocated for storing values of variable.

	Storage class tells us the following factors
	- Where the variable is stored (in memory or cpu register)?
	- What will be the initial value of variable, if nothing is initialized?
	- What is the scope of variable (where it can be accessed)?
	- What is the life of a variable?

	[1] auto :

	- The variable defined using auto storage class are called as local variable.
	- A local variable is in auto storage class by default if it is not explicitly specified.
	- The scope of an auto variable is limited with the particular block only.
	- Once the control goes out of the block, the access is destroyed.
	- This means only the block in which the auto variable is declared can access it.


	[2] register : (you just recommed to the compiler)	

	- Store local variables within funtions or blocks in CPU registers instead of RAM to have quick acess to these variables.
	- For example, "counters" are a good candidate to be stored in the registers.
	- Note, Address of this variable can not be accessed.
	- Its similar to the auto storage class, the variable is limited to particular block.
	- The only difference is that the variables declared using register storage class are stored inside CPU registers instead of a memory.
	- Register has faster access than main memory.
	- The variables declared using register storage class has no default value.
	- These variables are often declared at the beginning of a program.


	[3] extern :

	- Extern stands for external storage class.
	- Used when we have global functions or variables which are shared between two or more files.
	- Keyword extern is used to declaring a global variable or function in another file to provide the reference of variable or function
		which have been already defined in the original file.
	- Notice that the extern variable can not be initialized it has already been defined in the orignial file.
	- Any static global variable or static functions "Can be extern".


	[4] Static :

	- Static local variable is a local variable that retains and store its value between function calls or block and remains visible
		only to the function or block in which it is defined.
	- Static global variable are global variables visible only to the file in which it is declared.
	- Static functions are global functions visible only to the file in which it is declared.
	- The lifespan of a static variable is in the entire program code.
	- A variable which is declared or initialized using static keyword always contains zero as a default value.

	-----------------------------------------------------------------------------------------------:
	Storage Class	Storage Area	Default initial value	Lifetime				Scope	Keyword

	Automatic		Memory			Till control remains	Till control remains 	Local	Auto
									in block				in block

	Register		CPU register	Garbage value	T		ill control remains 	Local	Register
															in block

	Static			Memory			Zero					Value in between 		Local	Static
															function calls

	External		Memory			Garbage value			Throughout program 		Global	Extern
															execution
	-----------------------------------------------------------------------------------------------

	Note :
	[1] Any automatic variable is local variable by default.
	[2] Not recommended to apply register class on global variable (local variable maybe).
	[3] You can not access to registers location in cpu (error), registers in cpu has no addresses.
*/

#include <stdio.h>

//auto unsigned int number_3 = 114; // Error a global - scope declaration may not have this storage class
unsigned int number_3 = 44;
unsigned int _var_one = 99;

extern int _var_two;
extern int _var_three = 12; // no problem (extern now is meaningless)

void print_func(void);

int main() {

	printf("07 Pointers: 07 Storage Classes \n");
	printf("------------------------------- \n");

	unsigned int number_1 = 14;
	auto unsigned int number_2 = 114; // auto by default you don not need to type it.

	//_var_two = 41; // linker issue
	print_func();

	return 0;
}


void print_func(void) {
	auto unsigned int number_1;
	unsigned int number_2;
	unsigned int* Ptr = NULL;

	register unsigned int counter = 0; // recommendation for compiler to store this value on cpu registers (saving time).

	for (counter = 0; counter <= 8000; counter++) {

	}
	// Ptr = &counter;
}