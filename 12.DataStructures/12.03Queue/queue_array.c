
#include "queue_array.h"

static uint8 is_queue_full(queue_t* queue_obj) { // helper function
	return (queue_obj->elements_counter == queue_obj->queue_maxsize);
}


static uint8 is_queue_empty(queue_t* queue_obj) { // helper function
	return (0 == queue_obj->elements_counter);
}


queue_t* create_queue(uint32 maxsize, queue_status_t* ret_status) {
	queue_t* my_queue; // store first address of memory allocated

	/* create queue object in the heap to hold the queue data */
	my_queue = (queue_t* )malloc(sizeof(queue_t));
	if ((NULL == my_queue)) {
		*ret_status = QUEUE_NULL_POINTER;
		my_queue == NULL;
	}
	else {
		/* create array of (void*) to hold the address of the queue data */
		my_queue->queue_array = (void**)calloc(maxsize, sizeof(void*));
		if (NULL == my_queue->queue_array) { // Validation
			*ret_status = QUEUE_NOT_OK;
			my_queue == NULL;
		}
		else {
			my_queue->elements_counter = 0;
			my_queue->queue_front = -1;
			my_queue->queue_rear = -1;
			my_queue->queue_maxsize = maxsize;

			*ret_status = QUEUE_OK;
		}
	}

	return my_queue;
}


queue_status_t enqueue_element(queue_t* queue_obj, void* item_ptr) {
	queue_status_t status = QUEUE_NOT_OK;
	if ((NULL == queue_obj) || (NULL == item_ptr)) {
		status = QUEUE_NULL_POINTER;
	}
	else {
		/* Validate the queue state */
		if (is_queue_full(queue_obj)) { // using helper function
			status = QUEUE_FULL; /* queue is full */
		}
		else {
			/* incrementing queue rear index */
			(queue_obj->queue_rear)++;
			if (queue_obj->queue_rear == queue_obj->queue_maxsize) {
				queue_obj->queue_rear = 0; // queue_obj->queue_rear reset
			}
			/* insert the input data in the rear position */
			queue_obj->queue_array[queue_obj->queue_rear] = item_ptr;
			if (queue_obj->elements_counter == 0) {
				queue_obj->queue_front = 0;
				queue_obj->elements_counter = 1;
			}
			else {
				(queue_obj->elements_counter)++;
			}
			status = QUEUE_OK;
		}
	}
	return status;
}


void* dequeue_element(queue_t* queue_obj, queue_status_t* ret_status) {
	void* returnedvalue = NULL;
	if ((NULL == queue_obj) || (NULL == ret_status)) {
		*ret_status = QUEUE_NOT_OK;
	}
	else {
		if (!(queue_obj->elements_counter)) {
			*ret_status = QUEUE_EMPTY;
			returnedvalue = NULL;
		}
		else {
			returnedvalue = queue_obj->queue_array[queue_obj->queue_front];
			(queue_obj->queue_front)++;

			if (queue_obj->queue_front == queue_obj->queue_maxsize) {
				queue_obj->queue_front = 0;
			}
			else {/*nothing here*/}
			if (1 == queue_obj->elements_counter) {
				queue_obj->queue_front = -1;
				queue_obj->queue_rear = -1;
			}
			else {/*nothing here*/}
			(queue_obj->elements_counter)--;
		}
		*ret_status = QUEUE_OK;
	}
	return returnedvalue; // return error status through function parameter
}


void* queue_front(queue_t* queue_obj, queue_status_t* ret_status) {
	void* returnedvalue = NULL;
	if ((NULL == queue_obj) || (NULL == ret_status)) {
		*ret_status = QUEUE_NULL_POINTER;
	}
	else {
		if (!(queue_obj->elements_counter)) {
			*ret_status = QUEUE_EMPTY;
			returnedvalue = NULL;
		}
		else {
			returnedvalue = queue_obj->queue_array[queue_obj->queue_front];
			*ret_status = QUEUE_OK;
		}
	}
	return returnedvalue;
}


void* queue_rear(queue_t* queue_obj, queue_status_t* ret_status) {
	void* returnedvalue = NULL;
	if ((NULL == queue_obj) || (NULL == ret_status)) {
		*ret_status = QUEUE_NULL_POINTER;
	}
	else {
		if (!(queue_obj->elements_counter)) {
			*ret_status = QUEUE_EMPTY;
			returnedvalue = NULL;
		}
		else {
			returnedvalue = queue_obj->queue_array[queue_obj->queue_rear];
			*ret_status = QUEUE_OK;
		}
	}
	return returnedvalue;
}


queue_status_t get_queue_counter(queue_t* queue_obj, uint32* queue_counter) {
	queue_status_t status = QUEUE_NOT_OK;
	if ((NULL == queue_obj) || (NULL == queue_counter)) {
		status = QUEUE_NULL_POINTER;
	}
	else {
		if (!(queue_obj->elements_counter)) {
			*queue_counter = 0;
		}
		else {
			*queue_counter = queue_obj->elements_counter;
			status = QUEUE_OK;
		}
	}
	return status;
}


queue_status_t destroy_queue(queue_t* queue_obj) {
	queue_status_t status = QUEUE_NOT_OK;
	if ((NULL == queue_obj)) {
		status = QUEUE_NULL_POINTER;
	}
	else {
		free(queue_obj->queue_array);
		free(queue_obj);
		status = QUEUE_OK;
	}
	return status;
}

