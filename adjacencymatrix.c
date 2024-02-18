#include <stdio.h>

#define MAX_VERTICES 20

int main() {
    int vertices, edges, i, j;
    int adjacency_matrix[MAX_VERTICES][MAX_VERTICES];

    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &vertices);

    printf("Enter the number of edges in the graph: ");
    scanf("%d", &edges);

    // Initialize adjacency matrix with all zeroes
    for (i = 0; i < vertices; i++) {
        for (j = 0; j < vertices; j++) {
            adjacency_matrix[i][j] = 0;
        }
    }

    // Accept edges and update adjacency matrix accordingly
    printf("Enter the edges (format: vertex1 vertex2):\n");
    for (i = 0; i < edges; i++) {
        int vertex1, vertex2;
        scanf("%d %d", &vertex1, &vertex2);
        // Assuming input is 1-indexed, decrementing to make it 0-indexed
        vertex1--;
        vertex2--;
        adjacency_matrix[vertex1][vertex2] = 1;
        adjacency_matrix[vertex2][vertex1] = 1; // Assuming undirected graph
    }

    // Print the adjacency matrix
    printf("Adjacency Matrix:\n");
    for (i = 0; i < vertices; i++) {
        for (j = 0; j < vertices; j++) {
            printf("%d ", adjacency_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}


//This program prompts the user to input the number of vertices and edges in the graph. Then it accepts the edges in the format of pairs of vertices and updates the adjacency matrix accordingly. Finally, it prints out the adjacency matrix representing the graph.