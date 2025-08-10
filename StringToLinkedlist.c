//Write a program to convert a string into a linked list of characters.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Node structure
struct Node {
    char data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(char ch) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = ch;
    newNode->next = NULL;
    return newNode;
}

// Function to convert string to linked list
struct Node* stringToLinkedList(char* str) {
    struct Node *head = NULL, *tail = NULL;
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        struct Node* newNode = createNode(str[i]);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

// Function to display the linked list
void display(struct Node* head) {
    printf("Linked list of characters: ");
    while (head != NULL) {
        printf("%c -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    struct Node* head = stringToLinkedList(str);
    display(head);

    return 0;
}

