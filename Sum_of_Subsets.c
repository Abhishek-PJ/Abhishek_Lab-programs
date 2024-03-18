#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Function to recursively find subsets that sum up to the target
void findSubsets(int numbers[], int n, int targetSum, int subset[], int subsetSize, int startIndex) {
    // Base case: if targetSum is reached, print the subset
    if (targetSum == 0) {
        // Print the subset
        printf("Subset found: [");
        for (int i = 0; i < subsetSize; i++) {
            printf("%d", subset[i]);
            if (i < subsetSize - 1)
                printf(", ");
        }
        printf("]\n");
        return;
    }

    // Iterate over the numbers starting from the given index
    for (int i = startIndex; i < n; i++) {
        // If current number can contribute to the target sum
        if (targetSum - numbers[i] >= 0) {
            // Add the current number to the subset
            subset[subsetSize] = numbers[i];
            // Recursively find subsets with the remaining target sum
            findSubsets(numbers, n, targetSum - numbers[i], subset, subsetSize + 1, i + 1);
        }
    }
}

int main() {
    // Input numbers and target sum
    int numbers[] = {10, 40, 5, 25, 35, 20, 15};
    int targetSum = 50;
    int n = sizeof(numbers) / sizeof(numbers[0]);
    int subset[MAX_SIZE];

    // Display the subsets with the target sum
    printf("Subsets with sum %d:\n", targetSum);
    findSubsets(numbers, n, targetSum, subset, 0, 0);

    return 0;
}
