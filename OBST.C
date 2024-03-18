#include <stdio.h>
#include <limits.h>

// Function to find the minimum of two numbers
int min(int a, int b) {
    return (a < b) ? a : b;
}

// Function to calculate the sum of probabilities from index i to j
float sum(float freq[], int i, int j) {
    float s = 0;
    for (int k = i; k <= j; k++)
        s += freq[k];
    return s;
}

// Function to find the optimal cost of OBST
float optimalCost(float freq[], int n) {
    // Create a 2D array to store the cost of OBST
    float cost[n + 1][n + 1];

    // Initialize all values in the array to 0
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            cost[i][j] = 0;
        }
    }

    // Calculate the cost of OBST
    for (int i = 0; i < n; i++) {
        cost[i][i] = freq[i];
    }

    // Fill the table diagonally
    for (int L = 2; L <= n; L++) { // Length of the subproblem
        for (int i = 0; i <= n - L + 1; i++) { // Starting index of the subproblem
            int j = i + L - 1; // Ending index of the subproblem
            cost[i][j] = INT_MAX; // Initialize the cost of the subproblem to maximum value
            // Find the optimal root for the subproblem
            for (int r = i; r <= j; r++) {
                float c = ((r > i) ? cost[i][r - 1] : 0) + // Cost of left subtree
                          ((r < j) ? cost[r + 1][j] : 0) + // Cost of right subtree
                          sum(freq, i, j); // Sum of probabilities
                cost[i][j] = min(cost[i][j], c); // Update the optimal cost
            }
        }
    }

    // Return the optimal cost
    return cost[0][n - 1];
}

// Main function to test above functions
int main() {
    float freq[] = {0.1, 0.2, 0.4, 0.3}; // Probabilities of keys
    int n = sizeof(freq) / sizeof(freq[0]);
    printf("The optimal cost of the Optimal Binary Search Tree is: %.2f\n", optimalCost(freq, n));
    return 0;
}
