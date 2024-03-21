# Function to perform Quick Sort
quickSort <- function(arr) {
  if (length(arr) <= 1) {
    return(arr)
  }
  
  pivot <- arr[1]
  left <- arr[arr < pivot]
  right <- arr[arr > pivot]
  
  return(c(quickSort(left), pivot, quickSort(right)))
}

# Function to perform binary search
binarySearch <- function(arr, target) {
  low <- 1
  high <- length(arr)
  
  while (low <= high) {
    mid <- floor((low + high) / 2)
    
    if (arr[mid] == target) {
      return(mid)  # Element found
    } else if (arr[mid] < target) {
      low <- mid + 1
    } else {
      high <- mid - 1
    }
  }
  
  return(-1)  # Element not found
}

# Example usage:
arr <- c(10, 7, 8, 9, 1, 5)
sorted_arr <- quickSort(arr)
print("Sorted Array:")
print(sorted_arr)

target <- 9
index <- binarySearch(sorted_arr, target)
if (index != -1) {
  print(paste("Element", target, "found at index", index))
} else {
  print(paste("Element", target, "not found"))
}
