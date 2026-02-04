/*
    Data Structures: Heap Concept (Binary Heap)

    Definition:
    A Heap is a specialized tree-based data structure that satisfies the 
    'Heap Property'. It is a complete binary tree, meaning all levels are 
    fully filled except possibly the last, which is filled from left to right.

    The Heap Property:
    - Max-Heap: The value of the parent is always greater than or equal to 
      the children. The root holds the maximum value.
    - Min-Heap: The value of the parent is always less than or equal to 
      the children. The root holds the minimum value.

    

    Key Characteristics:
    - Efficiency: Accessing the top element (Min/Max) is O(1).
    - Insertion/Deletion: O(log n) because the tree is always balanced.
    - Implementation: Usually implemented using an Array rather than pointers 
      because of its "complete" nature.

    ---
    Array-Based Mapping Logic:
    ---
    For a node at index i (starting at 0):
    - Left Child:  (2 * i) + 1
    - Right Child: (2 * i) + 2
    - Parent:      (i - 1) / 2

    ---
    Primary Operations:
    ---
    1) Heapify (Up/Down):
       - The process of rearranging the heap to maintain the Heap Property 
         after an insertion or deletion.
    2) Insert:
       - Place new element at the end of the array.
       - "Bubble Up" (Shift Up) until the heap property is restored.
    3) Extract Min/Max:
       - Remove the root element.
       - Move the last element of the array to the root.
       - "Bubble Down" (Shift Down/Heapify) to restore order.

    

    ---
    C Implementation Details (Array-based):
    ---
    A) Structure:
       struct Heap {
           int* array;
           int capacity;
           int size;
       };

    B) Insertion Procedure:
       1. Check for Overflow.
       2. Insert element at array[size].
       3. Compare with parent; if child > parent (Max-Heap), swap them.
       4. Repeat until parent is larger or root is reached.
*/


#include <stdio.h>
#include <stdlib.h>

// Structure to represent a Max-Heap
struct MaxHeap {
    int* array;
    int capacity;
    int size;
};

// Helper: Swap two integers
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function: Initialize the Heap
struct MaxHeap* createHeap(int capacity) {
    struct MaxHeap* heap = (struct MaxHeap*)malloc(sizeof(struct MaxHeap));
    heap->capacity = capacity;
    heap->size = 0;
    heap->array = (int*)malloc(capacity * sizeof(int));
    return heap;
}

// Max-Heapify: Maintains heap property by bubbling down
void maxHeapify(struct MaxHeap* heap, int index) {
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < heap->size && heap->array[left] > heap->array[largest])
        largest = left;

    if (right < heap->size && heap->array[right] > heap->array[largest])
        largest = right;

    if (largest != index) {
        swap(&heap->array[index], &heap->array[largest]);
        maxHeapify(heap, largest);
    }
}

// Function: Insert an element
void insert(struct MaxHeap* heap, int value) {
    if (heap->size == heap->capacity) return;

    // Insert at the end
    int i = heap->size;
    heap->array[i] = value;
    heap->size++;

    // Bubble up (Fix the max heap property)
    while (i != 0 && heap->array[(i - 1) / 2] < heap->array[i]) {
        swap(&heap->array[i], &heap->array[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

// Function: Extract the maximum (root)
int extractMax(struct MaxHeap* heap) {
    if (heap->size <= 0) return -1;
    if (heap->size == 1) {
        heap->size--;
        return heap->array[0];
    }

    int root = heap->array[0];
    heap->array[0] = heap->array[heap->size - 1];
    heap->size--;
    maxHeapify(heap, 0);

    return root;
}

int main() {
    struct MaxHeap* heap = createHeap(10);

    insert(heap, 10);
    insert(heap, 20);
    insert(heap, 5);
    insert(heap, 30);

    printf("Max element extracted: %d\n", extractMax(heap)); // Should be 30
    printf("Next max element: %d\n", extractMax(heap));      // Should be 20

    return 0;
}