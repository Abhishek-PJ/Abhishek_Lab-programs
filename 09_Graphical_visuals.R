# Example data
x <- c(1, 2, 3, 4, 5)
y <- c(2, 4, 6, 8, 10)
categories <- c("A", "B", "C", "D", "E")
values <- c(20, 30, 40, 50, 60)
data <- data.frame(x, y)

# Plot - Simple line plot
#plot(x, y, col = "blue", main = "Line ", xlab = "X values", ylab = "Y values")

# Histogram - Distribution of values
#hist(values , main = "Histogram", xlab = "Values", ylab = "Frequency", col = "Pink")

# Line chart - Plotting two variables
#plot(x, y, type="b",col = "red", xlab = "X values", ylab = "Y values", main = "Line Chart")

# Pie chart - Distribution of categories
#pie(values, labels = categories, main = "PieChart")

# Boxplot - Visualizing distribution and outliers
#boxplot(x, main = "Boxplot", ylab = "Values")

# Scatterplot - Relationship between two variables
#plot(data$x, data$y, xlab = "X values", ylab = "Y values", main = "Scatterplot")

#Explanation:

#Plot: Creates a simple line plot with x-values on the x-axis and y-values on the y-axis. # nolint: line_length_linter.

#Histogram: Displays the distribution of values using bars. The height of each bar represents the frequency #of values within a specific range. # nolint: line_length_linter.

#Line chart: Plots the relationship between two variables (x and y) using points connected by lines. # nolint

#Pie chart: Represents the distribution of categories (A, B, C, D, E) using proportional slices of a pie. # nolint

#Boxplot: Visualizes the distribution of a single variable (y) showing median, quartiles, and outliers if #any. # nolint: line_length_linter.

#Scatterplot: Displays the relationship between two variables (x and y) using points. It helps visualize #patterns or trends in the data. # nolint
