//Write a program to print the sum of the diagonal element of the M*N square matrix.

#include <stdio.h>

int main() {
    int n,i,j;
    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    int primarySum = 0, secondarySum = 0;

    for (i = 0; i < n; i++) {
        primarySum += matrix[i][i];               // Primary diagonal
        secondarySum += matrix[i][n - 1 - i];      // Secondary diagonal
    }

    printf("Sum of primary diagonal = %d\n", primarySum);
    printf("Sum of secondary diagonal = %d\n", secondarySum);

    return 0;
}

