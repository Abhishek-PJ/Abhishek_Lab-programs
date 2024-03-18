// Below is a C program to find the minimum and maximum values in an array using the divide and conquer approach:

#include <stdio.h>

// Structure to hold both minimum and maximum values
struct MinMax
{
    int min;
    int max;
};

// Function to find minimum and maximum using divide and conquer
struct MinMax findMinMax(int arr[], int low, int high)
{
    struct MinMax result, left, right;
    int mid;

    // If there is only one element
    if (low == high)
    {
        result.min = arr[low];
        result.max = arr[low];
        return result;
    }

    // If there are two elements
    if (high == low + 1)
    {
        if (arr[low] < arr[high])
        {
            result.min = arr[low];
            result.max = arr[high];
        }
        else
        {
            result.min = arr[high];
            result.max = arr[low];
        }
        return result;
    }

    // If there are more than two elements, divide the array and recursively find min/max
    mid = (low + high) / 2;
    left = findMinMax(arr, low, mid);
    right = findMinMax(arr, mid + 1, high);

    // Merge the results
    if (left.min < right.min)
        result.min = left.min;
    else
        result.min = right.min;

    if (left.max > right.max)
        result.max = left.max;
    else
        result.max = right.max;

    return result;
}

// Main function to test the findMinMax function
int main()
{
    int arr[] = {10, 11, 45, 91, 30, 26};
    int size = sizeof(arr) / sizeof(arr[0]);
    struct MinMax result = findMinMax(arr, 0, size - 1);
    printf("Minimum element in the array: %d\n", result.min);
    printf("Maximum element in the array: %d\n", result.max);
    return 0;
}

// This program recursively divides the array into smaller parts and finds the minimum and maximum values. Finally, it merges the results to find the overall minimum and maximum.