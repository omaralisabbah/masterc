/*
    Data Structures: Tree Concept (Binary Search Tree)

    Definition:
    A Tree is a non-linear, hierarchical data structure consisting of nodes 
    connected by edges. Unlike linear structures (Stacks/Queues), a tree 
    represents a branching relationship.

    Binary Search Tree (BST) Logic:
    For every node:
    - All nodes in the Left Subtree have values < Parent Node.
    - All nodes in the Right Subtree have values > Parent Node.
    - This allows for efficient searching, similar to binary search in an array.

    

    Key Terminology:
    - Root: The top-most node; the entry point of the tree.
    - Leaf: A node with no children (Left == NULL and Right == NULL).
    - Height: The number of edges on the longest path from root to a leaf.
    - Depth: The number of edges from the root to a specific node.

    ---
    Primary Operations:
    ---
    1) Search:
       - Compares target value with current node.
       - If smaller: Move Left. If larger: Move Right.
       - Efficiency: O(log n) for balanced trees.

    2) Insertion:
       - Always happens at a Leaf position.
       - Traverse the tree based on value until a NULL pointer is found.
       - Create a new node and link it to the parent.

    3) Deletion:
       - Case 1: Node is a Leaf (Simple free).
       - Case 2: Node has One Child (Link parent to child, then free).
       - Case 3: Node has Two Children (Replace with In-order Successor/Predecessor).

    ---
    Traversal Methods (Recursive Processing):
    ---
    a) In-Order (Left, Root, Right):
       - Result: Processes data in sorted ascending order.
    b) Pre-Order (Root, Left, Right):
       - Result: Useful for creating a copy of the tree.
    c) Post-Order (Left, Right, Root):
       - Result: Useful for deleting the tree (bottom-up).

    

    ---
    C Implementation Details (Pointer-based):
    ---

    A) Node Structure:
       struct TreeNode {
           int data;
           struct TreeNode* left;
           struct TreeNode* right;
       };

    B) Insertion Procedure (Recursive):
       Pre: 
       - root_ptr: Pointer to the current node (passed as struct TreeNode**).
       - item: The value to be stored.
       
       Post: 
       - New node allocated and linked in the correct BST position.

       Procedure:
       1. If (*root_ptr) is NULL:
          - malloc() new node.
          - Set data = item, left = NULL, right = NULL.
       2. Else if (item < (*root_ptr)->data):
          - Recurse to the Left child.
       3. Else if (item > (*root_ptr)->data):
          - Recurse to the Right child.

    C) Memory Management:
       - Trees must be cleared using Post-Order traversal to ensure children 
         are freed before the parent node is lost.
*/

#include <stdio.h>
#include <stdlib.h>

// Structure for a BST Node
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function Prototypes
struct TreeNode* createNode(int value);
struct TreeNode* insert(struct TreeNode* root, int value);
struct TreeNode* search(struct TreeNode* root, int target);
void inOrder(struct TreeNode* root);
void freeTree(struct TreeNode* root);

int main() {
    struct TreeNode* root = NULL;

    // 1. Insertion
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    // 2. Traversal (Sorted Output)
    printf("In-Order Traversal (Sorted): ");
    inOrder(root);
    printf("\n");

    // 3. Search
    int key = 60;
    struct TreeNode* found = search(root, key);
    if (found) 
        printf("Element %d found in the tree.\n", key);
    else 
        printf("Element %d not found.\n", key);

    // 4. Memory Cleanup
    freeTree(root);
    root = NULL;

    return 0;
}

// Helper: Create a new node in Heap memory
struct TreeNode* createNode(int value) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    if (newNode != NULL) {
        newNode->data = value;
        newNode->left = NULL;
        newNode->right = NULL;
    }
    return newNode;
}

// BST Insertion Logic (Recursive)
struct TreeNode* insert(struct TreeNode* root, int value) {
    // If the spot is empty, place the new node here
    if (root == NULL) {
        return createNode(value);
    }

    // Otherwise, recurse down the tree
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

// BST Search Logic
struct TreeNode* search(struct TreeNode* root, int target) {
    // Base Case: Not found or found at current node
    if (root == NULL || root->data == target) {
        return root;
    }

    // Target is smaller: Look left
    if (target < root->data) {
        return search(root->left, target);
    }

    // Target is larger: Look right
    return search(root->right, target);
}

// In-Order Traversal (Left, Root, Right)
void inOrder(struct TreeNode* root) {
    if (root != NULL) {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

// Post-Order Freeing (Children before Parent)
void freeTree(struct TreeNode* root) {
    if (root == NULL) return;
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}