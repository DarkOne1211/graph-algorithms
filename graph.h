#ifndef GRAPH_H
#define GRAPH_H

typedef struct AdjListNode
{
    int adjecent;
    struct AdjListNode* next;
}AdjListNode;

typedef struct AdjList
{
    struct AdjListNode* head; 
}AdjList;

typedef struct Graph
{
    int vertex;
    struct AdjList* array;
}Graph;

AdjListNode* newAdjListNode(int dest);
Graph* createGraph(int V);
void insertEdge(Graph* graph, int src, int dest);
void printGraph(Graph* graph);

#endif