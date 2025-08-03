//Twenty-five numbers are entered from the keyboard. Write a program to find out how many of them are positive, how many are negative, how many are even and how many odd.

#include <stdio.h>

int main() {
    int numbers[25];
    int i, positive = 0, negative = 0, even = 0, odd = 0;

    printf("Enter 25 integers:\n");
    for (i = 0; i < 25; i++) {
        scanf("%d", &numbers[i]);

        if (numbers[i] > 0)
            positive++;
        else if (numbers[i] < 0)
            negative++;

        if (numbers[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("\nResults:\n");
    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}

