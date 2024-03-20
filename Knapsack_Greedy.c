#include <stdio.h>

// Structure to represent each item
struct Item {
    int value;
    int weight;
};

// Function to solve Knapsack problem using Greedy approach
double knapsack(int capacity, struct Item items[], int n) {
    double total_value = 0.0; // Total value of items taken
    
    // Fill the knapsack with items in decreasing order of value-to-weight ratio
    for (int i = 0; i < n; i++) {
        if (capacity >= items[i].weight) {
            total_value += items[i].value;
            capacity -= items[i].weight;
        } else {
            // Take fraction of the item
            total_value += ((double)capacity / items[i].weight) * items[i].value;
            break;
        }
    }

    return total_value;
}

int main() {
    // Sample items and capacity
    struct Item items[] = {{60, 10}, {100, 20}, {120, 30}};
    int capacity = 50;
    int n = sizeof(items) / sizeof(items[0]);

    // Calculate the maximum value using the Greedy approach
    double max_value = knapsack(capacity, items, n);

    // Print the maximum value
    printf("Maximum value: %.2f\n", max_value);

    return 0;
}
