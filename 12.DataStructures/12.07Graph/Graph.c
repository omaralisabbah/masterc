/*
    Data Structures: Graph Concept

    Definition:
    A Graph is a non-linear data structure consisting of a finite set of vertices 
    (or nodes) and a set of edges that connect these vertices. Unlike trees, 
    graphs can have cycles and do not have a strict parent-child hierarchy.

    Key Components:
    - Vertices (V): The data points or "nodes" in the graph.
    - Edges (E): The links or paths between vertices.
    
    Graph Variations:
    - Undirected: Edges have no direction (A-B is the same as B-A).
    - Directed (Digraph): Edges have a specific direction (A -> B).
    - Weighted: Edges carry a value or "cost" (e.g., distance between cities).
    - Cyclic/Acyclic: Whether paths exist that return to the starting vertex.

    

    ---
    Common Representations:
    ---
    1. Adjacency Matrix:
       - A 2D array where matrix[i][j] = 1 if an edge exists.
       - Best for: Dense graphs; quick edge lookups (O(1)).
    2. Adjacency List:
       - An array of linked lists where list[i] contains all neighbors of vertex i.
       - Best for: Sparse graphs; saves memory (O(V + E)).

    ---
    Primary Operations:
    ---
    1) Add Vertex: Add a new data point to the graph.
    2) Add Edge: Connect two vertices.
    3) Traversal:
       - Breadth-First Search (BFS): Explores neighbors first (uses a Queue).
       - Depth-First Search (DFS): Explores as far as possible along a branch (uses a Stack/Recursion).

    

    ---
    C Implementation Details (Adjacency List):
    ---
    A) Structure:
       - struct Node: Standard linked list node to store neighbor index.
       - struct Graph: Contains an array of pointers to Node (the list headers).

    B) Procedure for Adding Edge (Undirected):
       Pre: Graph object initialized, source and destination indices provided.
       1. Create a new node for the destination.
       2. Insert it at the head of the source's adjacency list.
       3. Create a new node for the source.
       4. Insert it at the head of the destination's adjacency list.
*/


#include <stdio.h>
#include <stdlib.h>

// Node to represent an edge in the adjacency list
struct AdjListNode {
    int dest;
    struct AdjListNode* next;
};

// Structure to represent the adjacency list for a vertex
struct AdjList {
    struct AdjListNode* head;
};

// Structure to represent the Graph
struct Graph {
    int numVertices;
    struct AdjList* array;
};

// Helper: Create a new adjacency list node
struct AdjListNode* newAdjListNode(int dest) {
    struct AdjListNode* newNode = (struct AdjListNode*)malloc(sizeof(struct AdjListNode));
    newNode->dest = dest;
    newNode->next = NULL;
    return newNode;
}

// Function: Create a graph of V vertices
struct Graph* createGraph(int V) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->numVertices = V;

    // Create an array of adjacency lists
    graph->array = (struct AdjList*)malloc(V * sizeof(struct AdjList));

    // Initialize each adjacency list as empty (NULL head)
    for (int i = 0; i < V; ++i)
        graph->array[i].head = NULL;

    return graph;
}

// Function: Add an edge to an undirected graph
void addEdge(struct Graph* graph, int src, int dest) {
    // Add edge from src to dest
    struct AdjListNode* newNode = newAdjListNode(dest);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;

    // Since it's undirected, add edge from dest to src
    newNode = newAdjListNode(src);
    newNode->next = graph->array[dest].head;
    graph->array[dest].head = newNode;
}

// Function: Print the graph
void printGraph(struct Graph* graph) {
    for (int v = 0; v < graph->numVertices; ++v) {
        struct AdjListNode* pCrawl = graph->array[v].head;
        printf("\n Adjacency list of vertex %d\n head ", v);
        while (pCrawl) {
            printf("-> %d", pCrawl->dest);
            pCrawl = pCrawl->next;
        }
        printf("\n");
    }
}

int main() {
    int V = 5;
    struct Graph* graph = createGraph(V);
    
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);

    printGraph(graph);

    return 0;
}