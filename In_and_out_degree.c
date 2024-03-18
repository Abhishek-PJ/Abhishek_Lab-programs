#include <stdio.h>

#define MAX_VERTICES 5

void displayAdjacencyMatrix(int graph[][MAX_VERTICES], int vertices) {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < vertices; ++i) {
        for (int j = 0; j < vertices; ++j) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

void printDegrees(int graph[][MAX_VERTICES], int vertices) {
    printf("\nVertex\tIn-Degree\tOut-Degree\n");
    for (int i = 0; i < vertices; ++i) {
        int inDegree = 0, outDegree = 0;
        for (int j = 0; j < vertices; ++j) {
            if (graph[j][i] == 1) // incoming edge
                inDegree++;
            if (graph[i][j] == 1) // outgoing edge
                outDegree++;
        }
        printf("%d\t%d\t\t%d\n", i, inDegree, outDegree);
    }
}

int main() {
    int graph[MAX_VERTICES][MAX_VERTICES] = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 1, 0},
        {1, 1, 0, 1, 1},
        {0, 1, 1, 0, 1},
        {0, 0, 1, 1, 0}
    };

    int vertices = MAX_VERTICES;

    displayAdjacencyMatrix(graph, vertices);
    printDegrees(graph, vertices);

    return 0;
}
