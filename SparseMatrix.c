//Sparse Matrix

#include <stdio.h>

int main() {
    int rows, cols,i,j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int zeroCount = 0, total = rows * cols;

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++)
        for ( j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0)
                zeroCount++;
        }

    if (zeroCount > total / 2)
        printf("The matrix is a sparse matrix.\n");
    else
        printf("The matrix is not a sparse matrix.\n");

    return 0;
}

