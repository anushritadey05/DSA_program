//Write a program to print abbreviation of a given word. (1st letter of each word)

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i;

    printf("Enter a phrase: ");
    fgets(str, sizeof(str), stdin);

    printf("Abbreviation: ");

    // Print the first character if it's not a space
    if (str[0] != ' ' && str[0] != '\n')
        printf("%c", toupper(str[0]));

    // Check for space followed by a character
    for (i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ' && str[i] != ' ' && str[i] != '\n')
            printf("%c", toupper(str[i]));
    }

    printf("\n");
    return 0;
}

