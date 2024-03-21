# Reading data from a CSV file
file_path <- "input_data.txt"
file_content <- readLines(file_path,warn = FALSE)

# Displaying the read data
print("Data read succesfully")
print(file_content)

data <- c("Hello ji")
file_path <- "output_data.txt"
writeLines(data, file_path)
print("Data written succesfully")
