
#ifndef _STACK_DS_H
#define _STACK_DS_H

#include "std_types.h"

#define STACK_MAX_SIZE 5
#define STACK_DEBUG

typedef struct stack_ds {
	uint32_t stack_pointer;
	uint32_t data[STACK_MAX_SIZE];
}stack_ds_t;


typedef enum stack_status {
	STACK_EMPTY,
	STACK_FULL,
	STACK_NOT_FULL
}return_status_t;


/*
 * @brief  initialize the stack pointer
 * @param  my_stack  Pointer to the stack
 * @retval Status of the initialization process
 */
return_status_t stack_init(stack_ds_t *my_stack);
/*
 * @brief  Adding new elements in the stack
 * @param  my_stack  Pointer to the stack
 * @retval Status of the Stack Push
 */
return_status_t stack_push(stack_ds_t* my_stack, uint32_t value);
/*
 * @brief  remove the last element from the stack
 * @param  my_stack  Pointer to the stack
 * @retval Status of the Stack Pop
 */
return_status_t stack_pop(stack_ds_t* my_stack, uint32_t* value);
/*
 * @brief  Get the last element pushed in the stack
 * @param  my_stack  Pointer to the stack
 * @retval Status of the Stack Top
 */
return_status_t stack_top(stack_ds_t* my_stack, uint32_t* value);
/*
 * @brief  Get the size of the stack
 * @param  my_stack  Pointer to the stack
 * @retval Status of the Stack Size
 */
return_status_t stack_size(stack_ds_t* my_stack, uint32_t* stack_size);
/*
 * @brief  Display Stack Elements
 * @param  my_stack  Pointer to the stack
 * @retval Stack Display
 */
return_status_t stack_display(stack_ds_t* my_stack);

#endif // !_STACK_DS_H

