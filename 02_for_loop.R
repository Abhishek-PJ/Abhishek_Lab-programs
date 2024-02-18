# Function to illustrate for loop with stop condition
print_numbers_up_to_limit <- function(limit) {
  for (i in 1:limit) {  # Loop from 1 to the specified limit
    if (i == 5) {  # Check if the current number is 5
      stop("Error: The number 5 is not allowed.")
    }
    print(i)  # Print the current number
  }
}

# Example usage:
print_numbers_up_to_limit(10)  # Call the function with a limit of 10
