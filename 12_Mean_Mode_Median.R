# Function to find Mean, Mode, and Median
calculate_stats <- function(data) {
  # Mean
  mean_value <- mean(data)
  cat("Mean:", mean_value, "\n")
  
  # Mode
  mode_value <- names(sort(table(data), decreasing = TRUE))[1]
  cat("Mode:", mode_value, "\n")
  
  # Median
  median_value <- median(data)
  cat("Median:", median_value, "\n")
}

# Example dataset
data <- c(1, 2, 3, 4, 5, 5, 6, 6, 6)

# Calculate statistics
calculate_stats(data)
