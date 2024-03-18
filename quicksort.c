#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low]; // Choose the first element as the pivot
    int start = low + 1;
    int end = high;

    while (start <= end) {
        while (start <= end && arr[start] <= pivot) {
            start++;
        }

        while (end >= start && arr[end] > pivot) {
            end--;
        }

        if (start < end) {
            swap(&arr[start], &arr[end]);
            start++;
            end--;
        }
    }
    
    swap(&arr[low], &arr[end]);
    return end; // Return the partitioning index
}


// Recursive function that implements Quick Sort
void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

// Function to print an array
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Test program
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    print_array(arr, n);

    quick_sort(arr, 0, n - 1);

    printf("Sorted array: \n");
    print_array(arr, n);
    return 0;
}
