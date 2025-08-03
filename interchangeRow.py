#Write a program to inter change different rows of a matrix.

def swap_rows(matrix, row1, row2):
    if row1 >= len(matrix) or row2 >= len(matrix) or row1 < 0 or row2 < 0:
        print("Invalid row indices.")
        return matrix

    # Swapping rows
    matrix[row1], matrix[row2] = matrix[row2], matrix[row1]
    return matrix

# Example usage
matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

print("Original matrix:")
for row in matrix:
    print(row)

row1 = 0
row2 = 2

matrix = swap_rows(matrix, row1, row2)

print(f"Matrix after swapping row {row1} and row {row2}:")
for row in matrix:
    print(row)
