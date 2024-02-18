# Create example data
values <- c(10, 20, 30, 15, 25, 35)  # Vector of values
factors <- c("A", "A", "B", "B", "A", "B")  # Factor levels

# Compute mean using tapply
mean_by_factor_tapply <- tapply(values, factors, mean)
print("Mean values computed using tapply:")
print(mean_by_factor_tapply)

# Compute mean using sapply
mean_by_factor_sapply <- sapply(split(values, factors), mean)
print("Mean values computed using sapply:")
print(mean_by_factor_sapply)
