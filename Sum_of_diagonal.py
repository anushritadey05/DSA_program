#sum of diagonal

def diagonal_sums(matrix):
    n = len(matrix)
    primary = sum(matrix[i][i] for i in range(n))
    secondary = sum(matrix[i][n - 1 - i] for i in range(n))
    return primary, secondary

# Example square matrix
matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

print("Matrix:")
for row in matrix:
    print(row)

primary, secondary = diagonal_sums(matrix)
print("Sum of primary diagonal =", primary)
print("Sum of secondary diagonal =", secondary)
