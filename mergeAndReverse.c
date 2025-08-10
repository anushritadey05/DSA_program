//Write a program to merge two already sorted list & reverse the resultant list.

#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Insert node at the end
void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
}

// Merge two sorted linked lists
struct Node* mergeSorted(struct Node* a, struct Node* b) {
    struct Node dummy;
    struct Node* tail = &dummy;
    dummy.next = NULL;

    while (a && b) {
        if (a->data < b->data) {
            tail->next = a;
            a = a->next;
        } else {
            tail->next = b;
            b = b->next;
        }
        tail = tail->next;
    }

    tail->next = (a) ? a : b;
    return dummy.next;
}

// Reverse linked list
struct Node* reverse(struct Node* head) {
    struct Node *prev = NULL, *next = NULL;
    while (head) {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}

// Display linked list
void display(struct Node* head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct Node *list1 = NULL, *list2 = NULL;

    int n1, n2, val,i;

    printf("Enter number of elements in first sorted list: ");
    scanf("%d", &n1);
    printf("Enter %d sorted values: ", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &val);
        insertEnd(&list1, val);
    }

    printf("Enter number of elements in second sorted list: ");
    scanf("%d", &n2);
    printf("Enter %d sorted values: ", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &val);
        insertEnd(&list2, val);
    }

    printf("\nList 1: ");
    display(list1);
    printf("List 2: ");
    display(list2);

    struct Node* merged = mergeSorted(list1, list2);
    printf("\nMerged List: ");
    display(merged);

    struct Node* reversed = reverse(merged);
    printf("Reversed Merged List: ");
    display(reversed);

    return 0;
}

