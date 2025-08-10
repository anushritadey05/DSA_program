//Given a singly linked list of size N. The task is to left-shift the linked list by k nodes, where k is a given positive integer smaller than or equal to length of the linked list.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Create new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Insert at end
void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}

// Display list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d", head->data);
        if (head->next) printf(" -> ");
        head = head->next;
    }
    printf("\n");
}

// Left shift by k
void leftShift(struct Node** head, int k) {
    if (*head == NULL || k == 0)
        return;

    struct Node* temp = *head;
    int count = 1;

    // Traverse to kth node
    while (count < k && temp != NULL) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL)
        return;

    struct Node* kthNode = temp;

    // Traverse to last node
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = *head;      // Connect last to head
    *head = kthNode->next;   // New head
    kthNode->next = NULL;    // Break old link
}

// Main
int main() {
    struct Node* head = NULL;
    insertEnd(&head, 22);
    insertEnd(&head, 44);
    insertEnd(&head, 77);
    insertEnd(&head, 88);
    insertEnd(&head, 99);

    int k = 3;

    printf("Original List:\n");
    printList(head);

    leftShift(&head, k);

    printf("Left Shifted List by %d:\n", k);
    printList(head);

    return 0;
}

