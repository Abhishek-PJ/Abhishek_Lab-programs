#include <stdio.h>

#define MAX_VERTICES 20

int main() {
    int vertices, edges;
    int graph[MAX_VERTICES][MAX_VERTICES] = {0};

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    printf("Enter the edges (format: vertex1 vertex2):\n");
    for (int i = 0; i < edges; ++i) {
        int v1, v2;
        scanf("%d %d", &v1, &v2);
        if (v1 >= 0 && v1 < vertices && v2 >= 0 && v2 < vertices) {
            graph[v1][v2] = 1;
            graph[v2][v1] = 1; // assuming undirected graph
        } else {
            printf("Invalid edge: %d %d\n", v1, v2);
            --i; // decrement i to re-enter this edge
        }
    }

    printf("Adjacency Matrix:\n");
    for (int i = 0; i < vertices; ++i) {
        for (int j = 0; j < vertices; ++j) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }

    return 0;
}


//Test cases
// Enter the number of vertices: 5
// Enter the number of edges: 7
// Enter the edges (format: vertex1 vertex2):
// 0 1
// 0 2
// 1 2
// 1 3
// 2 3
// 2 4
// 3 4

// Adjacency Matrix:
// 0 1 1 0 0 
// 1 0 1 1 0 
// 1 1 0 1 1 
// 0 1 1 0 1 
// 0 0 1 1 0 
