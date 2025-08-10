//Write a program to perform modification of an element/node in a given list.

#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Create and insert at end
void insert(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// Modify a node's data
void modify(int oldValue, int newValue) {
    struct Node* temp = head;
    while (temp != NULL) {
        if (temp->data == oldValue) {
            temp->data = newValue;
            printf("Node with value %d modified to %d.\n", oldValue, newValue);
            return;
        }
        temp = temp->next;
    }
    printf("Value %d not found in the list.\n", oldValue);
}

// Display the list
void display() {
    struct Node* temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int choice, val, oldVal, newVal;

    while (1) {
        printf("\n1. Insert\n2. Modify\n3. Display\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &val);
                insert(val);
                break;
            case 2:
                printf("Enter value to modify: ");
                scanf("%d", &oldVal);
                printf("Enter new value: ");
                scanf("%d", &newVal);
                modify(oldVal, newVal);
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
        }
    }
    return 0;
}

