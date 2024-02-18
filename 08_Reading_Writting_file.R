# Reading data from a CSV file
data <- read.csv("input_data.csv")

# Displaying the read data
print("Data read from input_data.csv:")
print(data)

# Writing data to another CSV file
write.csv(data, file = "output_data.csv")

# Printing a message indicating successful writing
print("Data successfully written to output_data.csv")
