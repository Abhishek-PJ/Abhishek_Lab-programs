# Sample data for illustration
group1 <- c(10, 12, 14, 16, 18)
group2 <- c(11, 13, 15, 17, 19)

# Performing t-test for ANOVA
t_test_result <- t.test(group1, group2)

# Output the result
print(t_test_result)
