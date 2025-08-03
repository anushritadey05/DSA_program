//Write a program to insert a new element in array at given location.

#include <stdio.h>

int main() {
    int arr[100], n, i, pos, val;

    // Input array size and elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position and value
    printf("Enter the position (0-based index) to insert at: ");
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &val);

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert value
    arr[pos] = val;
    n++;

    // Print updated array
    printf("Updated array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

