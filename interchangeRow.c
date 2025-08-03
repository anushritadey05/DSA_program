//Write a program to inter change different rows of a matrix.

#include <stdio.h>

int main() {
    int mat[10][10];
    int rows, cols, row1, row2, i, j, temp;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);

    printf("Enter two row indices to interchange (0-based): ");
    scanf("%d %d", &row1, &row2);

    if (row1 >= rows || row2 >= rows || row1 < 0 || row2 < 0) {
        printf("Invalid row indices.\n");
        return 1;
    }

    // Swapping rows
    for (j = 0; j < cols; j++) {
        temp = mat[row1][j];
        mat[row1][j] = mat[row2][j];
        mat[row2][j] = temp;
    }

    printf("Matrix after interchanging row %d and row %d:\n", row1, row2);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    return 0;
}

