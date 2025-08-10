//Given a singly linked list of size N. The task is to swap elements in the linked list pair wise. For example, if the input list is 1 2 3 4, the resulting list after swaps will be 2 1 4 3.  

#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Create a new node
struct Node* createNode(int data) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

// Insert node at end
void insertEnd(struct Node** head, int data) {
    struct Node* newnode = createNode(data);
    if (*head == NULL) {
        *head = newnode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next)
        temp = temp->next;
    temp->next = newnode;
}

// Display list
void display(struct Node* head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Swap nodes pairwise
void pairwiseSwap(struct Node* head) {
    struct Node* temp = head;

    while (temp != NULL && temp->next != NULL) {
        // Swap data of current node and next node
        int t = temp->data;
        temp->data = temp->next->data;
        temp->next->data = t;

        // Move two nodes ahead
        temp = temp->next->next;
    }
}

// Main
int main() {
    struct Node* head = NULL;
    int n, val,i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &val);
        insertEnd(&head, val);
    }

    printf("\nOriginal List: ");
    display(head);

    pairwiseSwap(head);

    printf("List After Pairwise Swap: ");
    display(head);

    return 0;
}

