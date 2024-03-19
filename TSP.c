#include <stdio.h>
#include <limits.h>

#define N 4 // Number of cities

int graph[N][N] = {
    {0, 10, 15, 20},
    {10, 0, 35, 25},
    {15, 35, 0, 30},
    {20, 25, 30, 0}
};

int visited[N] = {0}; // To keep track of visited cities

int minDistance(int dist[], int n) {
    int minIndex, minDist = INT_MAX;

    // Loop through all cities
    for (int i = 0; i < n; i++) {
        // Check if the city 'i' is unvisited and its distance is smaller than the current minimum distance
        if (!visited[i] && dist[i] < minDist) {
            // Update the minimum distance and the index of the nearest unvisited city
            minDist = dist[i];
            minIndex = i;
        }
    }
    // Return the index of the nearest unvisited city
    return minIndex;
}


int tspNearestNeighbor(int start) {
    int currentCity = start;
    int tourLength = 0;

    for (int i = 0; i < N - 1; i++) {
        visited[currentCity] = 1; // Mark current city as visited
        int nearestNeighbor = minDistance(graph[currentCity], N); // Find nearest unvisited city
        tourLength += graph[currentCity][nearestNeighbor]; // Update tour length
        currentCity = nearestNeighbor; // Move to nearest unvisited city
    }

    tourLength += graph[currentCity][start]; // Return to starting city

    return tourLength;
}

int main() {
    int startCity = 0; // Starting city index

    int tourLength = tspNearestNeighbor(startCity);

    printf("Shortest tour length using Nearest Neighbor Algorithm: %d\n", tourLength);

    return 0;
}
