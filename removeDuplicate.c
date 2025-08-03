//Write program to remove duplicate elements from array.

#include <stdio.h>

int main() {
    int arr[100], n, i, j, k;

    // Input array size and elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; ) {
            if (arr[i] == arr[j]) {
                // Shift elements left
                for (k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; // reduce array size
            } else {
                j++;
            }
        }
    }

    // Print result
    printf("Array after removing duplicates:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

