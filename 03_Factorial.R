factorial <- function(n) {
  if (n == 0) {
    return(1)
  } else {
    return(n * factorial(n - 1))
  }
}

# Example usage
n <- 5
result <- factorial(n)
cat("Factorial of", n, ":", result, "\n")
