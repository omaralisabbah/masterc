/*
    Data Structures: Singly Linked List (SLL)

    Definition:
    A Singly Linked List is a dynamic linear data structure consisting of a 
    sequence of 'nodes'. Each node contains two parts:
    1. Data: The value or information stored.
    2. Next: A pointer (link) to the next node in the sequence.

    Key Characteristics:
    - Size is not fixed; it grows and shrinks during execution (Dynamic).
    - Non-contiguous memory: Nodes are scattered in the heap memory.
    - Sequential Access: To find the Nth element, you must traverse from the Head.

    

    The Foundation:
    - Head: A pointer to the first node. If Head is NULL, the list is empty.
    - Tail (Optional): A pointer to the last node to make additions at the end O(1).
    - Termination: The 'Next' pointer of the last node must point to NULL.

    ---
    Primary Operations:
    ---
    1. Insertion:
       - At Beginning: Update new node's next to current Head; update Head to new node.
       - At End: Traverse to the last node; set last node's next to new node.
       - At Middle: Link new node to the next node, then link previous node to new node.

    2. Deletion:
       - From Beginning: Move Head to Head->next; free the old node.
       - From End: Traverse to the second-to-last node; set its next to NULL; free last node.
       - Specific Key: Locate node; bypass it by linking previous to next; free node.

    3. Search/Traversal:
       - Start at Head and follow 'next' pointers until the key is found or NULL is reached.

    ---
    Detailed Procedures (C Language Specific):
    ---

    A) Node Structure Definition:
       struct Node {
           int data;
           struct Node* next;
       };

    B) Insertion at Beginning (Pre-condition: item exists):
       1. Allocate memory for new_node using malloc().
       2. Assign data: new_node->data = value.
       3. Link: new_node->next = Head.
       4. Update Head: Head = new_node.

    

    C) Deletion from Middle (Pre-condition: List is not empty):
       1. Locate node to delete (target) and the node before it (prev).
       2. Bridge: prev->next = target->next.
       3. Free: call free(target) to prevent memory leaks.

    ---
    Pros and Cons:
    ---
    Advantages:
    - Efficient insertions/deletions (no shifting like arrays).
    - No need to pre-define size (avoids Overflow unless RAM is full).

    Disadvantages:
    - Extra memory used for pointers (overhead).
    - No random access (cannot jump to index [5] directly).
    - Reverse traversal is impossible (requires a Doubly Linked List).
*/


#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint32;
typedef unsigned short uint16;
typedef unsigned char uint8;

struct Node {
    uint32 NodeData;
    struct Node* NodeLink;
};

void Insert_Node_At_Beginning(struct Node** List);
void Insert_Node_At_End(struct Node** List);
void Insert_Node_After(struct Node* List);
void Delete_Node_At_Beginning(struct Node** List);
void Delete_Node(struct Node* List);
void Display_All_Nodes(struct Node* List);
uint32 Get_Length(struct Node* List);

struct Node* ListHead = NULL;

int main()
{
    printf("Data Structures : 07 Single Linked List \n");
    printf("--------------------------------------- \n");

    uint8 UserChoice = 0;
    uint32 ListLength = 0;

    printf("-> Hello to Single Linked List \n");
    while (1) {
        printf("\n");

        printf("--------------------------------------- \n");

        printf("-> 1) Insert_Node_At_Beginning \n");
        printf("-> 2) Insert_Node_At_End \n");
        printf("-> 3) Insert_Node_After \n");
        printf("-> 4) Delete_Node_At_Beginning \n");
        printf("-> 5) Delete_Node \n");
        printf("-> 6) Display_All_Nodes \n");
        printf("-> 7) Get_Length \n");
        printf("-> 8) Quit from application \n");

        printf("--------------------------------------- \n");

        printf("\n");
        printf("UserChoice : ");
        scanf("%i", &UserChoice);

        switch (UserChoice) {
        case 1:
            Insert_Node_At_Beginning(&ListHead);
            break;
        case 2:
            Insert_Node_At_End(&ListHead);
            break;
        case 3:
            Insert_Node_After(ListHead);
            break;
        case 4:
            Delete_Node_At_Beginning(&ListHead);
            break;
        case 5:
            Delete_Node(ListHead);
            break;
        case 6:
            Display_All_Nodes(ListHead);
            break;
        case 7:
            ListLength = Get_Length(ListHead);
            printf("List Length : << %i >> Nodes\n", ListLength);
            break;
        case 8:
            printf("Quit from application \n");
            exit(1);
            break;
        default:
            printf("User Choice out of range !!\n");
            break;
        }
    }
    return 0;
}


void Insert_Node_At_Beginning(struct Node** List) {
    struct Node* TempNode = NULL;

    TempNode = (struct Node*)malloc(sizeof(struct Node));
    if (NULL != TempNode) {
        printf("Enter Node Data : ");
        scanf("%i", &TempNode->NodeData);

        /* Check if linked list is empty */
        if (NULL == *List) { /* Linked list is empty */
            TempNode->NodeLink = NULL;
            *List = TempNode;
        }
        else { /* Linked list is not empty */
            TempNode->NodeLink = *List;
            *List = TempNode;
        }
    }
    else {
        /* Nothing */
    }
}


void Insert_Node_At_End(struct Node** List) {
    struct Node* TempNode = NULL;
    struct Node* LastNode = NULL;

    TempNode = (struct Node*)malloc(sizeof(struct Node));
    if (NULL != TempNode) {
        printf("Enter Node Data : ");
        scanf("%i", &TempNode->NodeData);
        TempNode->NodeLink = NULL;

        /* Check if linked list is empty */
        if (NULL == *List) { /* Linked list is empty */
            *List = TempNode;
        }
        else { /* Linked list is not empty */
            LastNode = *List;
            while (LastNode->NodeLink != NULL) {
                LastNode = LastNode->NodeLink;
            }
            LastNode->NodeLink = TempNode;
        }
    }
    else {
        /* Nothing */
    }
}


void Insert_Node_After(struct Node* List) {
    struct Node* TempNode = NULL;
    struct Node* NodeListCounter = NULL;
    uint32 NodePosition = 0;    /*  */
    uint32 ListLength = 0;      /*  */
    uint32 NodeCounter = 1;     /* Points to the first node */

    printf("Enter Node Position (First node is position = 1): ");
    scanf("%i", &NodePosition);

    ListLength = Get_Length(List);
    if (NodePosition > ListLength) {
        printf("Invalid Node Position -> List has ( %i ) Nodes \n", ListLength);
    }
    else {
        NodeListCounter = List;
        while (NodeCounter < NodePosition) {
            NodeCounter++;
            NodeListCounter = NodeListCounter->NodeLink;
        } /* TempNode points to the node where we have to insert after it */
        TempNode = (struct Node*)malloc(sizeof(struct Node));
        if (NULL != TempNode) {
            printf("Enter Node Data : ");
            scanf("%i", &TempNode->NodeData);
            /* Connect the right side connection */
            TempNode->NodeLink = NodeListCounter->NodeLink;
            /* Connect the Left side connection */
            NodeListCounter->NodeLink = TempNode;
        }
        else {
            /* Nothing */
        }
    }
}


void Delete_Node_At_Beginning(struct Node** List) {
    struct Node* TempNode = *List;
    uint32 ListLength = 0;      /*  */

    ListLength = Get_Length(*List);
    if (ListLength == 0) {
        printf("List is Empty , nothing to be deleted !! \n");
    }
    else {
        *List = TempNode->NodeLink;
        TempNode->NodeLink = NULL; /* TempNode is a free node */
        free(TempNode);
    }
}


void Delete_Node(struct Node* List) {
    struct Node* NodeListCounter = List;
    struct Node* NextNode = List;
    uint32 NodePosition = 0;    /*  */
    uint32 ListLength = 0;      /*  */
    uint32 NodeCounter = 1;     /* Points to the first node */

    printf("Enter Node Position (First node is position = 1): ");
    scanf("%i", &NodePosition);
    ListLength = Get_Length(List);
    if ((NodePosition > ListLength) || (ListLength == 1)) {
        printf("Please use Delete_Node_At_Beginning !! \n");
    }
    else {
        while (NodeCounter < (NodePosition - 1)) {
            NodeCounter++;
            NodeListCounter = NodeListCounter->NodeLink;
        }
        NextNode = NodeListCounter->NodeLink;
        NodeListCounter->NodeLink = NextNode->NodeLink;
        free(NextNode);
    }
}


void Display_All_Nodes(struct Node* List) {
    struct Node* TempNode = List;

    printf("Node Values : ");
    if (NULL == TempNode) {
        printf("List is empty !! \n");
    }
    else {
        while (TempNode != NULL) {
            printf("%i -> ", TempNode->NodeData);
            TempNode = TempNode->NodeLink;
        }
        if (NULL == TempNode) {
            printf("NULL \n");
        }
    }
}


uint32 Get_Length(struct Node* List) {
    struct Node* TempNode = List;
    uint32 NodeCount = 0;

    while (TempNode != NULL) {
        NodeCount++;
        TempNode = TempNode->NodeLink;
    }

    return NodeCount;
}