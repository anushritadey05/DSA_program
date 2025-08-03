//Spiral matrix

#include <stdio.h>

int main() {
    int n = 3,i,j;
    int matrix[3][3] = {0};
    int value = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (value <= 9) {
        for (i = left; i <= right; i++)
            matrix[top][i] = value++;
        top++;

        for (i = top; i <= bottom; i++)
            matrix[i][right] = value++;
        right--;

        for (i = right; i >= left; i--)
            matrix[bottom][i] = value++;
        bottom--;

        for (i = bottom; i >= top; i--)
            matrix[i][left] = value++;
        left++;
    }

    printf("Spiral Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }

    return 0;
}

