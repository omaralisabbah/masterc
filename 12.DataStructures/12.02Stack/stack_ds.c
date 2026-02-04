
#include "stack_ds.h"

/*
 * @brief  check the stack array if full
 * @param  my_stack  Pointer to the stack
 * @retval Status of the stack
 */

static stack_full(stack_ds_t* my_stack) {
	if (my_stack->stack_pointer == STACK_MAX_SIZE - 1) {
		return STACK_FULL;
	}
	else {
		return STACK_NOT_FULL;
	}
}

/*
 * @brief  check the stack array if empty
 * @param  my_stack  Pointer to the stack
 * @retval Status of the stack
 */

static stack_empty(stack_ds_t* my_stack) {
	if (my_stack->stack_pointer == - 1) {
		return STACK_EMPTY;
	}
	else {
		return STACK_NOT_FULL;
	}
	
}

/*
 * @brief  initialize the stack pointer 
 * @param  my_stack  Pointer to the stack
 * @retval Status of the initialization process
 */

return_status_t stack_init(stack_ds_t* my_stack) {
	return_status_t ret = R_NOK;
	
	if (NULL == my_stack) {
		ret = R_NOK;
	}
	else {
		my_stack->stack_pointer = -1;
		ret = R_OK;
	}
	return ret;
}


/*
 * @brief  Adding new elements in the stack
 * @param  my_stack  Pointer to the stack
 * @retval Status of the Stack Push
 */
return_status_t stack_push(stack_ds_t* my_stack, uint32_t value) {
	return_status_t ret = R_NOK;
	if ((NULL == my_stack) || (STACK_FULL == stack_full(my_stack))) {
		#ifdef STACK_DEBUG
		printf("Error, Stack Full \n");
		#endif // STACK_DEBUG
		ret = R_NOK;
	}
	else {
		my_stack->stack_pointer++;
		my_stack->data[my_stack->stack_pointer] = value ;

		#ifdef STACK_DEBUG
		printf("Value [%i] data pushed \n", value);
		#endif // STACK_DEBUG
		
		ret = R_OK;
	}
	return ret;
}

/*
 * @brief  remove the last element from the stack
 * @param  my_stack  Pointer to the stack
 * @retval Status of the Stack Pop
 */
return_status_t stack_pop(stack_ds_t* my_stack, uint32_t* value) {
	return_status_t ret = R_NOK;
	if ((NULL == my_stack) || (NULL == value) || (STACK_EMPTY == stack_empty(my_stack))) {
		#ifdef STACK_DEBUG
		printf("Error, Stack Empty \n");
		#endif // STACK_DEBUG
		ret = R_NOK;
	}
	else {
		*value = my_stack->data[my_stack->stack_pointer];
		my_stack->stack_pointer--;

		#ifdef STACK_DEBUG
		printf("Value [%i] has popped \n", *value);
		#endif // STACK_DEBUG

		ret = R_OK;
	}
	ret = R_OK;
}

/*
 * @brief  Get the last element pushed in the stack
 * @param  my_stack  Pointer to the stack
 * @retval Status of the Stack Top
 */
return_status_t stack_top(stack_ds_t* my_stack, uint32_t* value) {
	return_status_t ret = R_NOK;
	if ((NULL == my_stack) || (NULL == value) || (STACK_EMPTY == stack_empty(my_stack))) {
		#ifdef STACK_DEBUG
		printf("Error, Stack Top Empty \n");
		#endif // STACK_DEBUG

		ret = R_NOK;
	}
	else {
		*value = my_stack->data[my_stack->stack_pointer];
		#ifdef STACK_DEBUG
		printf("Stack Top Value [%i] \n", *value);
		#endif // STACK_DEBUG

		ret = R_OK;
	}
	return ret;
}

/*
 * @brief  Get the size of the stack
 * @param  my_stack  Pointer to the stack
 * @retval Status of the Stack Size
 */
return_status_t stack_size(stack_ds_t* my_stack, uint32_t* stack_size) {
	return_status_t ret = R_NOK;
	if ((NULL == my_stack) || (NULL == stack_size)) {
		ret = R_NOK;
	}
	else {
		*stack_size = my_stack->stack_pointer + 1;
		ret = R_OK;
	}
	return ret;
}

/*
 * @brief  Display Stack Elements
 * @param  my_stack  Pointer to the stack
 * @retval Stack Display
 */
return_status_t stack_display(stack_ds_t* my_stack) {
	return_status_t ret = R_NOK;
	sint32_t l_counter = ZERO_INIT;
	if ((NULL == my_stack) || (STACK_EMPTY == stack_empty(my_stack))) {
		#ifdef STACK_DEBUG
		printf("Error, Stack Top Empty \n");
		#endif // STACK_DEBUG

		ret = R_NOK;
	}
	else {
		printf("Stack data : ");
		for (l_counter = my_stack->stack_pointer; l_counter >= ZERO; l_counter--) {
			printf("%i \t", my_stack->data[l_counter]);
		}
		printf("\n");
		ret = R_OK;
	}
	return ret;
}