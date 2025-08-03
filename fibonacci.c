//Write a Program to print the following sequence of numbers: 0,1,1,2,3,5,8,13, 21,34...

#include <stdio.h>

int main() {
    int n = 10; // Number of terms
    int a = 0, b = 1, next, count = 2;

    printf("%d, %d", a, b);

    while (count < n) {
        next = a + b;
        printf(", %d", next);
        a = b;
        b = next;
        count++;
    }

    printf("\n");
    return 0;
}

