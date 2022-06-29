#include <stdio.h>
#include <stdlib.h>

const char *msgs[5];
const int NMsgs;

typedef struct Node {
        int dest;
        int h;
        struct Node* next;
}Node;

typedef struct AdjList {
    int c;
    struct Node* head;
}AdjList;

typedef struct Graph {
        int V;
        int L;
        struct AdjList* array;
}Graph;

int find(Graph *graph);
int delVert(Graph* graph);
void clear(Graph *graph);
Node* neww(int dest);
Graph* create();
int addEdge(Graph* graph);
int D_Show(Graph* graph);
int D_Add(Graph* graph);
int dialog(const char *msgs[], int N);
int getInt(int *a);

