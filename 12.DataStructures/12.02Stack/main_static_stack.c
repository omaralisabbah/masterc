/*
    Data Structures: Stack Based On Array

    Definition:
    A stack is an abstract data type (ADT) that serves as a collection of elements, 
    with two main principal operations: push and pop. It is a linear data structure 
    where additions and deletions are restricted to a single end, known as the 'Top'.

    LIFO Principle (Last-In, First-Out):
    The last element added to the stack is the first one to be removed.
    - Input Sequence:  {5, 10, 15, 20}
    - Output Sequence: {20, 15, 10, 5}
    
    

    Practical Examples:
    - Undo/Redo mechanisms in text editors.
    - Function call management (The System Call Stack).
    - Backtracking algorithms (e.g., navigating maze paths or browser history).
    - Expression evaluation and syntax parsing.

    ---
    Primary Operations (The "Big Three"):
    ---
    1. Push:
       - Adds an element to the top of the stack.
       - Pre-condition: Check for 'Overflow' (if the stack has a fixed size and is full).
       - Post-condition: The 'Top' pointer is updated to the new element.

    2. Pop:
       - Removes and returns the element at the top of the stack.
       - Pre-condition: Check for 'Underflow' (ensure the stack is not empty).
       - Post-condition: The 'Top' pointer moves to the next available element.

    3. Peek (Stack Top):
       - Returns the value of the top element without removing it.
       - Useful for inspecting the state of the stack before performing logic.
       - Pre-condition: Must check for 'Underflow'.

    ---
    Helper & Utility Functions:
    ---
    - isEmpty(): Returns true if the stack contains no elements.
    - isFull(): Returns true if the stack has reached its maximum capacity (relevant for array-based stacks).
    - Size(): Returns the total number of elements currently in the stack.
    - Clear/Initialize: Resets the stack to an empty state (Top = -1 or NULL).

    ---
    Error Handling Note:
    ---
    - Overflow: Attempting to Push into a full stack.
    - Underflow: Attempting to Pop or Peek from an empty stack.
*/


#include "stack_ds.h"

stack_ds_t stack_1;
stack_ds_t stack_2;

uint32_t stack_pop_value = ZERO_INIT;

int main() {
	printf("Data Structures: Stack Static Based On Array \n");
	printf("-------------------------------------------- \n");

	return_status_t ret = R_NOK;
	ret = stack_init(&stack_1);
	if (R_NOK == ret) {
		printf("Stack_1 failed to be initialized \n");
	}
	else {
		ret = stack_push(&stack_1, 11);
		ret = stack_push(&stack_1, 22);
		ret = stack_push(&stack_1, 33);
		ret = stack_push(&stack_1, 44);
		ret = stack_push(&stack_1, 55);
		ret = stack_push(&stack_1, 66); // Fail

		ret = stack_pop(&stack_1, &stack_pop_value);
		printf("Stack Popped (%i) \n", stack_pop_value);

	printf("-------------------------------------------- \n");

		ret = stack_pop(&stack_1, &stack_pop_value);	
		printf("Stack Popped (%i) \n", stack_pop_value);

		ret = stack_pop(&stack_1, &stack_pop_value);
		printf("Stack Popped (%i) \n", stack_pop_value);

		ret = stack_pop(&stack_1, &stack_pop_value);
		printf("Stack Popped (%i) \n", stack_pop_value);

		ret = stack_pop(&stack_1, &stack_pop_value);
		printf("Stack Popped (%i) \n", stack_pop_value);

		ret = stack_pop(&stack_1, &stack_pop_value);
		printf("Stack Popped (%i) \n", stack_pop_value);
	}

	printf("-------------------------------------------- \n");

	uint32_t stack1_top = ZERO_INIT;
	ret = stack_push(&stack_1, 21);
	ret = stack_top(&stack_1, &stack1_top);
	printf("Stack Top Element (%i)  \n", stack1_top);

	printf("-------------------------------------------- \n");

	ret = stack_push(&stack_1, 11);
	ret = stack_push(&stack_1, 22);
	ret = stack_push(&stack_1, 33);
	ret = stack_push(&stack_1, 44);
	ret = stack_display(&stack_1);

	printf("-------------------------------------------- \n");
	
	ret = stack_init(&stack_2);
	if (R_NOK == ret) {
		printf("Stack_2 failed to be initialized \n");
	}
	else {}



	return 0;
}