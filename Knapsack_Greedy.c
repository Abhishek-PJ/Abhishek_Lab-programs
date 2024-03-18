#include <stdio.h>

// Function to find the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to solve 0/1 Knapsack problem using Dynamic Programming
int knapSack(int W, int wt[], int val[], int n) {
    int i, w;
    int K[n + 1][W + 1]; // Create a 2D array for storing the maximum value at each combination of items and weights

    // Build K[][] in bottom-up manner
    for (i = 0; i <= n; i++) {
        for (w = 0; w <= W; w++) {
            // Base case: if no items or capacity is 0, value is 0
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w) {
                // If the weight of the current item is less than or equal to the current capacity
                // Choose the maximum between including the current item or excluding it
                // val[i - 1] represents the value of the current item
                // wt[i - 1] represents the weight of the current item
                // K[i - 1][w - wt[i - 1]] represents the maximum value without including the current item's weight
                K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
            } else {
                // If the weight of the current item is more than the current capacity, exclude it
                K[i][w] = K[i - 1][w];
            }
        }
    }

    // Return the maximum value that can be obtained with the given capacity and items
    return K[n][W];
}


// Main function to test above function
int main() {
    int val[] = {60, 100, 120}; // Values of the items
    int wt[] = {10, 20, 30}; // Weights of the items
    int W = 50; // Capacity of the knapsack
    int n = sizeof(val) / sizeof(val[0]); // Number of items
    int maxVal = knapSack(W, wt, val, n); // Find the maximum value
    printf("Items available for knapsack problem:\n");
    for (int i = 0; i < n; i++) {
        printf("Item %d: Weight = %d, Value = %d\n", i + 1, wt[i], val[i]); // Print the details of each item
    }
    printf("Capacity of the knapsack: %d\n", W); // Print the capacity of the knapsack
    printf("Maximum value that can be obtained: %d\n", maxVal); // Print the maximum value that can be obtained
    return 0;
}
