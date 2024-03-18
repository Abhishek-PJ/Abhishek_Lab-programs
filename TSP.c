#include <stdio.h>

#define N 4 // Number of cities

int graph[N][N] = {
    {0, 10, 15, 20},
    {10, 0, 35, 25},
    {15, 35, 0, 30},
    {20, 25, 30, 0}
};

int min(int a, int b) {
    return (a < b) ? a : b;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void permute(int cities[], int start, int n, int *minCost) {
    if (start == n - 1) {
        int cost = 0;
        for (int i = 0; i < n - 1; i++) {
            cost += graph[cities[i]][cities[i + 1]];
        }
        cost += graph[cities[n - 1]][cities[0]]; // Return to starting city
        *minCost = min(*minCost, cost);
        return;
    }

    for (int i = start; i < n; i++) {
        swap(&cities[start], &cities[i]);
        permute(cities, start + 1, n, minCost);
        swap(&cities[start], &cities[i]);
    }
}

int main() {
    int cities[N] = {0, 1, 2, 3}; // Assuming cities are numbered from 0 to N-1
    
    int minCost = __INT_MAX__;
    permute(cities, 0, N, &minCost);
    
    printf("Minimum cost for TSP: %d\n", minCost);
    
    return 0;
}
