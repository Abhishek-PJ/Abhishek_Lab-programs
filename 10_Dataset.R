# Creating a sample dataset (data frame)
data <- data.frame(
  ID = 1:5,
  Name = c("John", "Anna", "Mike", "Emily", "David"),
  Age = c(25, 30, 35, 40, 45),
  Gender = c("M", "F", "M", "F", "M"),
  Score = c(80, 85, 90, 95, 85)
)

# Displaying the dataset
print("Original dataset:")
print(data)

# Manipulating data
# Adding a new column for 'Grade'
data$Grade <- ifelse(data$Score >= 90, "A", 
                     ifelse(data$Score >= 80, "B", "C"))

# Updating scores for female students
data$Score[data$Gender == "F"] <- data$Score[data$Gender == "F"] + 5

# Analyzing data
# Summary statistics
summary(data)

# Mean score by gender
mean_score_gender <- tapply(data$Score, data$Gender, mean)
print("Mean score by gender:")
print(mean_score_gender)

# Subset of data for individuals aged 30 and above
subset_data <- data[data$Age >= 30, ]
print("Subset of data for individuals aged 30 and above:")
print(subset_data)
