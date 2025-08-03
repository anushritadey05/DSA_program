//Delete an element at a specific index or by value.

#include <stdio.h>

int main() {
    int arr[100], n, i, choice, index, value, found = 0;

    // Input array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Delete by:\n1. Index\n2. Value\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter index to delete: ");
        scanf("%d", &index);
        if (index < 0 || index >= n) {
            printf("Invalid index!\n");
            return 1;
        }
        for (i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    }
    else if (choice == 2) {
        printf("Enter value to delete: ");
        scanf("%d", &value);
        for (i = 0; i < n; i++) {
            if (arr[i] == value) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Value not found!\n");
            return 1;
        }
        for (; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    }
    else {
        printf("Invalid choice!\n");
        return 1;
    }

    // Print updated array
    printf("Updated array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

