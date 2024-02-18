# Install and load the 'markovchain' package if you haven't already
# install.packages("markovchain")
library(markovchain)

# Define the transition matrix of the Markov chain
transition_matrix <- matrix(c(0.8, 0.2, 0.1, 0.9), nrow = 2, byrow = TRUE)

# Create a Markov chain object
mc <- new("markovchain", states = c("State 1", "State 2"), transitionMatrix = transition_matrix)

# Find the stationary distribution
stationary_distribution <- steadyStates(mc)

# Print the stationary distribution
cat("Stationary Distribution:")
print(stationary_distribution)
