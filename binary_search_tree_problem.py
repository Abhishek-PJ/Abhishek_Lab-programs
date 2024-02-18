INT_MAX = 2147483647

def optimalSearchTree(keys, freq, n):
    cost = [[0 for _ in range(n)] for _ in range(n)]

    for i in range(n):
        cost[i][i] = freq[i]

    for L in range(2, n + 1):
        for i in range(n - L + 1):  # Adjusted range
            j = i + L - 1
            if i >= n or j >= n:
                break
            offset_sum = sum(freq, i, j)  # Fixed the typo 'off_set_sum' to 'offset_sum'
            cost[i][j] = INT_MAX

            for r in range(i, j + 1):
                c = 0
                if r > i:
                    c += cost[i][r - 1]
                if r < j:
                    c += cost[r + 1][j]
                c += offset_sum  # Fixed indentation
                if c < cost[i][j]:
                    cost[i][j] = c
    return cost[0][n - 1]


def sum(freq, i, j):
    s = 0
    for k in range(i, j + 1):
        s += freq[k]
    return s

# Driver Code
if __name__ == '__main__':
    keys = [10, 12, 20]
    freq = [34, 8, 50]
    n = len(keys)
    print("Cost of Optimal BST is", optimalSearchTree(keys, freq, n))
