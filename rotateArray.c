//Rotate an array left and right by k positions.

#include <stdio.h>

void rotateLeft(int arr[], int n, int k) {
    int i, j, temp;
    for (i = 0; i < k; i++) {
        temp = arr[0];
        for (j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }
}

void rotateRight(int arr[], int n, int k) {
    int i, j, temp;
    for (i = 0; i < k; i++) {
        temp = arr[n - 1];
        for (j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
}

int main() {
    int arr[100], n, i, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    // Left Rotation
    rotateLeft(arr, n, k);
    printf("Array after left rotation by %d positions:\n", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    // Reset to original array for right rotation example
    // (You can input again for a fresh array or reset values)

    printf("Enter %d elements again for right rotation:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    rotateRight(arr, n, k);
    printf("Array after right rotation by %d positions:\n", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

