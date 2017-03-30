#include "graph.h"
#include "stdio.h"
#include "stdlib.h"

int main()
{
    // create the graph given in above fugure
    int V = 5;
    struct Graph* graph = createGraph(V);
    insertEdge(graph, 0, 5);
    insertEdge(graph, 0, 3);
    insertEdge(graph, 1, 2);
    insertEdge(graph, 1, 4);
    insertEdge(graph, 1, 2);
    insertEdge(graph, 2, 1);
    insertEdge(graph, 3, 1);
 
    // print the adjacency list representation of the above graph
    printGraph(graph);
 
    return EXIT_SUCCESS;
}