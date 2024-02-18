# Function to perform Quick Sort
quick_sort <- function(arr) {
  if (length(arr) <= 1) {
    return(arr)
  }
  
  pivot <- arr[1]            # Choose first element as pivot
  lesser <- arr[-1][arr[-1] <= pivot]   # Elements less than or equal to pivot
  greater <- arr[-1][arr[-1] > pivot]   # Elements greater than pivot
  
  return(c(quick_sort(lesser), pivot, quick_sort(greater)))  
   # Recursively sort lesser and greater subarrays
}

# Function to perform Binary Search
binary_search <- function(arr, target) {
  low <- 1                     # Initialize low index
  high <- length(arr)          # Initialize high index

  while (low <= high) {
    mid <- floor((low + high) / 2)   # Calculate mid index
    
    if (arr[mid] == target) {
      return(mid)               # Target found, return index
    } else if (arr[mid] < target) {
      low <- mid + 1            # Adjust low index if target is greater than mid element # nolint
    } else {
      high <- mid - 1           # Adjust high index if target is less than mid element # nolint
    }
  }
  
  return(-1)                    # Target not found
}

# Example usage:
arr <- c(5, 3, 8, 1, 2, 9, 4)
sorted_arr <- quick_sort(arr)
print("Sorted Array:")
print(sorted_arr)

target <- 4
index <- binary_search(sorted_arr, target)
if (index != -1) {
  cat("Target", target, "found at index:", index, "\n")
} else {
  cat("Target", target, "not found in the array.\n")
}
