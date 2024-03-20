#include <stdio.h>

// Function to find the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to solve 0/1 Knapsack problem using Dynamic Programming
int knapSack(int knapsackCapacity, int itemWeights[], int itemValues[], int numOfItems) {
    int i, j;
    int maxValues[numOfItems + 1][knapsackCapacity + 1]; // Create a 2D array for storing the maximum value at each combination of items and weights

    // Build maxValues[][] in bottom-up manner
    for (i = 0; i <= numOfItems; i++) {
        for (j = 0; j <= knapsackCapacity; j++) {
            // Base case: if no items or capacity is 0, value is 0
            if (i == 0 || j == 0)
                maxValues[i][j] = 0;
            else if (itemWeights[i - 1] <= j) {
                // If the weight of the current item is less than or equal to the current capacity
                // Choose the maximum between including the current item or excluding it
                // itemValues[i - 1] represents the value of the current item
                // itemWeights[i - 1] represents the weight of the current item
                // maxValues[i - 1][j - itemWeights[i - 1]] represents the maximum value without including the current item's weight
                maxValues[i][j] = max(itemValues[i - 1] + maxValues[i - 1][j - itemWeights[i - 1]], maxValues[i - 1][j]);
            } else {
                // If the weight of the current item is more than the current capacity, exclude it
                maxValues[i][j] = maxValues[i - 1][j];
            }
        }
    }

    // Return the maximum value that can be obtained with the given capacity and items
    return maxValues[numOfItems][knapsackCapacity];
}

// Main function to test above function
int main() {
    int itemValues[] = {60, 100, 120}; // Values of the items
    int itemWeights[] = {10, 20, 30}; // Weights of the items
    int knapsackCapacity = 50; // Capacity of the knapsack
    int numOfItems = sizeof(itemValues) / sizeof(itemValues[0]); // Number of items
    int maxVal = knapSack(knapsackCapacity, itemWeights, itemValues, numOfItems); // Find the maximum value
    printf("Items available for knapsack problem:\n");
    for (int i = 0; i < numOfItems; i++) {
        printf("Item %d: Weight = %d, Value = %d\n", i + 1, itemWeights[i], itemValues[i]); // Print the details of each item
    }
    printf("Capacity of the knapsack: %d\n", knapsackCapacity); // Print the capacity of the knapsack
    printf("Maximum value that can be obtained: %d\n", maxVal); // Print the maximum value that can be obtained
    return 0;
}
