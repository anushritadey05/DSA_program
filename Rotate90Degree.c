//Write a program to rotate a given matrix in 90 

#include <stdio.h>

#define N 3  // Size of the square matrix

void printMatrix(int mat[N][N]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

void rotate90(int mat[N][N]) {
    int i, j, temp;

    // Step 1: Transpose the matrix
    for (i = 0; i < N; i++) {
        for (j = i; j < N; j++) {
            temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    // Step 2: Reverse each row
    for (i = 0; i < N; i++) {
        for (j = 0; j < N / 2; j++) {
            temp = mat[i][j];
            mat[i][j] = mat[i][N - 1 - j];
            mat[i][N - 1 - j] = temp;
        }
    }
}

int main() {
    int mat[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Original Matrix:\n");
    printMatrix(mat);

    rotate90(mat);

    printf("Matrix after 90 degree rotation:\n");
    printMatrix(mat);

    return 0;
}



