/*
    Data Structures: Queue Based On Array

    Definition:
    A queue is a linear data structure that operates on the FIFO (First-In, First-Out) 
    principle. It restricts data manipulation such that insertions occur at one end 
    (Rear) and deletions occur at the opposite end (Front).

    FIFO Principle:
    The first element added to the queue is the first one to be removed.
    - Input Sequence:  {5, 10, 15, 20}
    - Output Sequence: {5, 10, 15, 20}

    

    Practical Examples:
    - Task Scheduling: CPU scheduling or IO requests.
    - Buffering: Print spoolers or IO buffers (keyboard strokes).
    - Networking: Packets waiting in a router to be transmitted.
    - Call Center Systems: Putting callers on hold in the order they arrived.

    ---
    Primary Operations:
    ---
    1. Enqueue (Insert):
       - Purpose: Adds an element to the 'Rear' of the queue.
       - Pre-condition: Check for 'Overflow' (if the array/buffer is full).
       - Logic: In a circular array, use (Rear + 1) % Max_Size to wrap around.

    2. Dequeue (Delete):
       - Purpose: Removes and returns the element at the 'Front'.
       - Pre-condition: Check for 'Underflow' (ensure the queue is not empty).
       - Logic: Update the Front pointer to the next element.

    3. Front (Peek Front):
       - Purpose: Retrieves the value at the 'Front' without removing it.
       - Requirement: Must verify the queue is not empty.

    4. Rear (Peek Rear):
       - Purpose: Retrieves the value at the 'Rear' without removing it.
       - Requirement: Must verify the queue is not empty.

    ---
    Array-Based Implementation Details:
    ---
    To prevent "Right-ward Drift" (where the queue appears full because the Rear 
    reaches the end of the array, even if the Front is empty), a Circular Queue 
    is typically used.

    

    A) Enqueue Procedure (Array):
       1. Check if (Count == Max_Size) -> Return Overflow Error.
       2. Update Rear: Rear = (Rear + 1) % Max_Size.
       3. Insert Data: Array[Rear] = New_Data.
       4. Increment Count.

    B) Dequeue Procedure (Array):
       1. Check if (Count == 0) -> Return Underflow Error.
       2. Store Data: Temp = Array[Front].
       3. Update Front: Front = (Front + 1) % Max_Size.
       4. Decrement Count.
       5. Return Temp.

    ---
    Non-Mandatory / Utility Operations:
    ---
    - isEmpty(): returns (Count == 0).
    - isFull(): returns (Count == Max_Size).
    - Size(): returns current count of elements.
    - Clear(): Resets Front, Rear, and Count to 0 (or -1 depending on logic).
*/


#include "platform_types.h"
#include "queue_array.h"

uint32 queue_max_element = 0;
queue_status_t ret_queue_status = QUEUE_NOT_OK;
queue_t* queue1;

uint32 num1 = 0x11, num2 = 0x22, num3 = 0x33, num4 = 0x44, num5 = 0x55;
void* queue_ret_val;
uint32 queue_count;

int main() {
	printf("Data Structures : 06 Queue Based On Array \n");
	printf("----------------------------------------- \n");

	printf("please enter element in queue1 : ");
	scanf("%i", &queue_max_element);
	queue1 = create_queue(queue_max_element, &ret_queue_status);
	printf("0x%X \n", queue1);

	printf("----------------------------------------- \n");

	ret_queue_status = enqueue_element(queue1, &num1);
	printf("%i \n", ret_queue_status);
	ret_queue_status = enqueue_element(queue1, &num2);
	printf("%i \n", ret_queue_status);
	ret_queue_status = enqueue_element(queue1, &num3);
	printf("%i \n", ret_queue_status);
	ret_queue_status = enqueue_element(queue1, &num4);
	printf("%i \n", ret_queue_status);
	ret_queue_status = enqueue_element(queue1, &num5);
	printf("%i \n", ret_queue_status); // 1 => QUEUE_OK
	// ret_queue_status = enqueue_element(queue1, &num5);
	// printf("%i \n", ret_queue_status); // 2 => QUEUE_NOT_OK

	printf("----------------------------------------- \n");
    /*
	queue_ret_val = dequeue_element(queue1, &ret_queue_status);
	printf("%i \t", ret_queue_status); printf("dequed value = 0x%X \n", *((uint32*)queue_ret_val));
	queue_ret_val = dequeue_element(queue1, &ret_queue_status);
	printf("%i \t", ret_queue_status); printf("dequed value = 0x%X \n", *((uint32*)queue_ret_val));
	queue_ret_val = dequeue_element(queue1, &ret_queue_status);

	queue_ret_val = queue_front(queue1, &ret_queue_status);
	printf("front value = 0x%X \n", *((uint32*)queue_ret_val)); // 0x33

	printf("%i \t", ret_queue_status); printf("dequed value = 0x%X \n", *((uint32*)queue_ret_val));
	queue_ret_val = dequeue_element(queue1, &ret_queue_status);
	printf("%i \t", ret_queue_status); printf("dequed value = 0x%X \n", *((uint32*)queue_ret_val));
	queue_ret_val = dequeue_element(queue1, &ret_queue_status);
	printf("%i \t", ret_queue_status); printf("dequed value = 0x%X \n", *((uint32*)queue_ret_val));
	// queue_ret_val = dequeue_element(queue1, &ret_queue_status);
	// printf("%i \n", ret_queue_status); // 3 => QUEUE_EMPTY

	// queue_ret_val = get_queue_counter(queue1, &queue_count);
	// printf("%i \n", ret_queue_status);
	// printf("queue_count %i \n", queue_count);

	printf("----------------------------------------- \n");

	destroy_queue(queue1);
    */
	return 0;
}
