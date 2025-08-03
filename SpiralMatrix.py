#Spiral Matrix

def spiral_matrix(n):
    matrix = [[0]*n for _ in range(n)]
    value = 1
    top, bottom, left, right = 0, n-1, 0, n-1

    while value <= n*n:
        for i in range(left, right+1):
            matrix[top][i] = value
            value += 1
        top += 1

        for i in range(top, bottom+1):
            matrix[i][right] = value
            value += 1
        right -= 1

        for i in range(right, left-1, -1):
            matrix[bottom][i] = value
            value += 1
        bottom -= 1

        for i in range(bottom, top-1, -1):
            matrix[i][left] = value
            value += 1
        left += 1

    return matrix

# 3x3 matrix
mat = spiral_matrix(3)
print("Spiral Matrix:")
for row in mat:
    print("\t".join(map(str, row)))
