//Write a program to insert an element at a specific position.

#include <stdio.h>

int main() {
    int arr[100], n, i, pos, value;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    printf("Enter the position to insert at (0-based index): ");
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Invalid position.\n");
        return 1;
    }

    // Shift elements to the right
    for (i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = value;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

