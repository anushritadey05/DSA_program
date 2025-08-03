#4.Write a program to check whether a matrix is sparse or not.

def is_sparse(matrix):
    rows = len(matrix)
    cols = len(matrix[0]) if rows > 0 else 0
    total = rows * cols
    zero_count = sum(row.count(0) for row in matrix)

    return zero_count > total // 2

# Example matrix
matrix = [
    [0, 0, 3],
    [0, 0, 6],
    [7, 0, 0]
]

print("Matrix:")
for row in matrix:
    print(row)

if is_sparse(matrix):
    print("The matrix is a sparse matrix.")
else:
    print("The matrix is not a sparse matrix.")
