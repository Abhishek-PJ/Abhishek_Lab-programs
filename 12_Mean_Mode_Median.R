# Function to find Mean, Mode, and Median
calculate_stats <- function(data) {
  # Mean
  mean_value <- mean(data)
  cat("Mean:", mean_value, "\n")
  
  # Mode
  # Calculate frequencies of each value
  freq <- table(data)

# Find the value(s) with maximum frequency
modes <- which(freq == max(freq))

# Display the mode(s)
cat("Mode(s):", modes, "\n")
  
  # Median
  median_value <- median(data)
  cat("Median:", median_value, "\n")
}

# Example dataset
data <- c(1, 2, 3, 4, 5, 5, 6, 6, 6)

# Calculate statistics
calculate_stats(data)
