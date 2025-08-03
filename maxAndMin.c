//Find the maximum and minimum element in an array.(Do not use sorting)

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int max, min;

    // Input array size and elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min
    max = min = arr[0];

    // Find max and min
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}

