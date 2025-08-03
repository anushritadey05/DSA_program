//Write a program to merge two sorted array of length M & N. (M & N may not be equal.

#include <stdio.h>

int main() {
    int A[100], B[100], merged[200];
    int m, n, i, j, k;

    // Input size of first array
    printf("Enter number of elements in first array (sorted): ");
    scanf("%d", &m);
    printf("Enter %d sorted elements:\n", m);
    for (i = 0; i < m; i++) {
        scanf("%d", &A[i]);
    }

    // Input size of second array
    printf("Enter number of elements in second array (sorted): ");
    scanf("%d", &n);
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }

    // Merging
    i = j = k = 0;
    while (i < m && j < n) {
        if (A[i] < B[j])
            merged[k++] = A[i++];
        else
            merged[k++] = B[j++];
    }

    // Remaining elements
    while (i < m)
        merged[k++] = A[i++];
    while (j < n)
        merged[k++] = B[j++];

    // Output merged array
    printf("Merged sorted array:\n");
    for (i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}

