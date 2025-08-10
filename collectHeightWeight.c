//Write a program to collect height & weight of N students. Find the highest weight/height ratio using linked list.

#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct Student {
    float height;
    float weight;
    float ratio;
    struct Student* next;
};

// Function to create a new node
struct Student* createNode(float height, float weight) {
    struct Student* newNode = (struct Student*)malloc(sizeof(struct Student));
    newNode->height = height;
    newNode->weight = weight;
    newNode->ratio = weight / height;
    newNode->next = NULL;
    return newNode;
}

// Function to insert at the end of the list
void insert(struct Student** head, float height, float weight) {
    struct Student* newNode = createNode(height, weight);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Student* temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}

// Function to find the maximum weight/height ratio
float findMaxRatio(struct Student* head) {
    float maxRatio = 0.0;
    while (head != NULL) {
        if (head->ratio > maxRatio)
            maxRatio = head->ratio;
        head = head->next;
    }
    return maxRatio;
}

int main() {
    struct Student* head = NULL;
    int n, i;
    float height, weight;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter height and weight of student %d: ", i + 1);
        scanf("%f %f", &height, &weight);
        insert(&head, height, weight);
    }

    float maxRatio = findMaxRatio(head);
    printf("Highest weight/height ratio is: %.2f\n", maxRatio);

    return 0;
}

