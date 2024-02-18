def sum_of_subsets_util(arr, target_sum, partial=[], index=0):
    if sum(partial) == target_sum:
        print("Sum subset found:", partial)
    if sum(partial) >= target_sum:
        return

    for i in range(index, len(arr)):
        sum_of_subsets_util(arr, target_sum, partial + [arr[i]], i + 1)

def sum_of_subsets(arr, target_sum):
    sum_of_subsets_util(arr, target_sum)

arr = [2, 4, 6, 8, 10]
target_sum = 10
sum_of_subsets(arr, target_sum)
