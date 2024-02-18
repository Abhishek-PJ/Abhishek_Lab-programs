def find_min_max(arr):
    if len(arr) == 1:
        return arr[0], arr[0]
    elif len(arr) == 2:
        return (arr[0], arr[1]) if arr[0] < arr[1] else (arr[1], arr[0])
    
    mid = len(arr) // 2
    left_min, left_max = find_min_max(arr[:mid])
    right_min, right_max = find_min_max(arr[mid:])
    
    return min(left_min, right_min), max(left_max, right_max)

# Example usage
array = [3, 8, 1, 5, 9, 2, 7, 6]
min_value, max_value = find_min_max(array)
print("Minimum value:", min_value)
print("Maximum value:", max_value)
