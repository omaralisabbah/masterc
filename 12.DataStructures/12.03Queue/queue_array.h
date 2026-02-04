
#ifndef _QUEUE_ARRAY_H
#define _QUEUE_ARRAY_H

#include "platform_types.h"

typedef struct {
	void** queue_array; // pointer to array of void pointers
	uint32 queue_maxsize; // maximum elements in the queue
	sint32 elements_counter; // number of elements in the queue
	sint32 queue_front; // index of the front element
	sint32 queue_rear; // index of the rear element
}queue_t;

// more safe than #define
typedef enum {
	QUEUE_NOT_OK = 0,
	QUEUE_OK,
	QUEUE_FULL,
	QUEUE_EMPTY,
	QUEUE_NULL_POINTER
}queue_status_t;


// software interfaces
queue_t* create_queue(uint32 maxsize, queue_status_t* ret_status);
queue_status_t enqueue_element(queue_t* queue_obj, void* item_ptr);
void* dequeue_element(queue_t* queue_obj, queue_status_t* ret_status);
void* queue_front(queue_t* queue_obj, queue_status_t* ret_status);
void* queue_rear(queue_t* queue_obj, queue_status_t* ret_status);
queue_status_t get_queue_counter(queue_t* queue_obj, uint32* queue_counter);
queue_status_t destroy_queue(queue_t* queue_obj);


#endif // _QUEUE_ARRAY_H
