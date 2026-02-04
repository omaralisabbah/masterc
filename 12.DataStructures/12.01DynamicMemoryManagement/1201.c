/*
    1. Stack vs. Heap:

    Stack: Where normal variables live (int x). Size must be known at compile time.
    Memory is freed automatically when the function ends.

    Heap:  Where dynamic memory lives. You can request any size during run-time.
    YOU are responsible for freeing this memory.

    2. The Golden Rule:
    For every malloc/calloc, there must be exactly one free().
    If you forget -> Memory Leak.
 */


#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;
    struct Node* next;
} Node;


void demo_malloc();
void demo_calloc();
void demo_realloc();
void demo_struct_nodes();


int main() {
    printf("=== DYNAMIC MEMORY MANAGEMENT LESSON ===\n");

    demo_malloc();
    demo_calloc();
    demo_realloc();
    demo_struct_nodes();

    printf("\n=== LESSON COMPLETE ===\n");
    return 0;
}

void demo_malloc() {
    printf("\n--- Demo: malloc ---\n");
    
    // Request memory for 5 integers
    // malloc returns a void pointer, so we cast it to (int*)
    int *arr = (int*)malloc(5 * sizeof(int));

    // CRITICAL: Always check if allocation worked
    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed!\n");
        return;
    }

    // Initialize and print (malloc contains garbage values initially!)
    for(int i = 0; i < 5; i++) {
        arr[i] = i * 10;
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Clean up
    free(arr);
    printf("Memory freed.\n");
}


void demo_calloc() {
    printf("\n--- Demo: calloc ---\n");

    // calloc takes 2 args: (number of elements, size of one element)
    // DIFFERENCE: calloc initializes all bits to ZERO.
    int *arr = (int*)calloc(5, sizeof(int));

    if (arr == NULL) return;

    printf("Values immediately after calloc (should be 0):\n");
    for(int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    free(arr);
    printf("Memory freed.\n");
}


void demo_realloc() {
    printf("\n--- Demo: realloc ---\n");

    // 1. Start with a small array of size 2
    int *arr = (int*)malloc(2 * sizeof(int));
    if (!arr) return;

    arr[0] = 100;
    arr[1] = 200;
    printf("Original array size 2: [%d, %d]\n", arr[0], arr[1]);

    // 2. We realize we need more space (size 4)
    // realloc tries to extend the current block. If it can't, 
    // it moves the data to a new bigger block automatically.
    int *temp = (int*)realloc(arr, 4 * sizeof(int));

    if (temp == NULL) {
        printf("Realloc failed! Original data is safe.\n");
        free(arr); // Don't forget to free the original if you exit
        return;
    } else {
        arr = temp; // Update our pointer to the new address
    }

    // Add new data
    arr[2] = 300;
    arr[3] = 400;

    printf("Resized array size 4: [%d, %d, %d, %d]\n", 
           arr[0], arr[1], arr[2], arr[3]);

    free(arr);
    printf("Memory freed.\n");
}


void demo_struct_nodes() {
    printf("\n--- Demo: Structs & Nodes (Intro to DS) ---\n");

    /* * In Data Structures (Linked Lists, Trees), we don't allocate arrays.
     * We allocate single "Nodes" and link them together.
     */

    // 1. Allocate memory for ONE Node
    Node* myNode = (Node*)malloc(sizeof(Node));

    if (myNode == NULL) return;

    // 2. Set the data
    myNode->data = 999;
    myNode->next = NULL;

    printf("Created a Node dynamically at address %p\n", (void*)myNode);
    printf("Node Data: %d\n", myNode->data);

    // 3. Free the node
    free(myNode);
    myNode = NULL; // Good practice: prevent "Dangling Pointer"
    
    printf("Node freed. Pointer set to NULL.\n");
}