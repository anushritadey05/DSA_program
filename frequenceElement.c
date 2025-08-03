//Write a program to count frequency of each element in the array.

#include <stdio.h>

int main() {
    int arr[100], freq[100];
    int n, i, j, count;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequency array
    }

    // Count frequency
    for (i = 0; i < n; i++) {
        count = 1;
        if (freq[i] != 0) {
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0; // Mark counted
                }
            }
            freq[i] = count;
        }
    }

    printf("Frequency of each element:\n");
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d appears %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}

