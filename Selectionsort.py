def selection_sort(arr):
    n = len(arr)

    for i in range(n - 1):
        # Find the minimum element in the unsorted part
        min_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j

        # Swap the found minimum element with the first element
        arr[i], arr[min_index] = arr[min_index], arr[i]

# Example usage:
if __name__ == "__main__":
    # Replace this list with your own list of elements
    elements = [64, 25, 12, 22, 11]

    print("Original List:", elements)

    selection_sort(elements)

    print("Sorted List:", elements)
