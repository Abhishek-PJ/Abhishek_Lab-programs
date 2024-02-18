# Illustrating if-else statement on vectors of variable length

vector_length_check <- function(vec) {
  if (length(vec) > 1) {
    print("Vector has more than one element.")
  } else {
    print("Vector has only one element.")
  }
}

# Example usage:
vector_length_check(c(1, 2, 3))  # Vector has more than one element.
vector_length_check(c(1))         # Vector has only one element.
