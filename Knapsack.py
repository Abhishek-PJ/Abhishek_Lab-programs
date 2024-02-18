def knapsack_greedy(values, weights, capacity):
    items = list(zip(values, weights))
    items.sort(key=lambda x: x[0] / x[1], reverse=True)

    selected_items = []
    total_value = 0
    current_weight = 0

    for value, weight in items:
        if current_weight + weight <= capacity:
            selected_items.append(items.index((value, weight)))
            total_value += value
            current_weight += weight

    return  selected_items, total_value

# Example usage:
values = [60, 100, 120]
weights = [10, 20, 30]
knapsack_capacity = 50

selected_items, total_value = knapsack_greedy(values, weights, knapsack_capacity)
print("Selected items:", selected_items)
print("Total value:", total_value)
