# Sample dataset: house prices with features (size, bedrooms) and target variable (price)
house_data <- data.frame(
  size = c(1400, 1600, 1700, 1875, 1100, 1550),
  bedrooms = c(3, 3, 2, 4, 2, 3),
  price = c(245000, 312000, 279000, 308000, 199000, 219000)
)

# Check the structure of the dataset
str(house_data)

# Scatterplot to visualize the relationship between features and target variable
plot(house_data$size, house_data$price, xlab = "Size (sq ft)", ylab = "Price", main = "House Price vs. Size")
abline(lm(price ~ size, data = house_data), col = "red")  # Add regression line

plot(house_data$bedrooms, house_data$price, xlab = "Bedrooms", ylab = "Price", main = "House Price vs. Bedrooms")
abline(lm(price ~ bedrooms, data = house_data), col = "blue")  # Add regression line

# Multivariate Linear Regression Model
model <- lm(price ~ size + bedrooms, data = house_data)

# Summary of the model
summary(model)

# Predictions
new_data <- data.frame(size = c(1500, 1800),
                       bedrooms = c(3, 4))
predictions <- predict(model, newdata = new_data)
predictions
