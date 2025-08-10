//Write a program to perform addition of two polynomials using linked list.

#include <stdio.h>
#include <stdlib.h>

// Node structure for polynomial term
struct Node {
    int coeff;
    int pow;
    struct Node* next;
};

// Create a new node
struct Node* createNode(int coeff, int pow) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->pow = pow;
    newNode->next = NULL;
    return newNode;
}

// Insert term at end
void insertTerm(struct Node** poly, int coeff, int pow) {
    struct Node* newNode = createNode(coeff, pow);
    if (*poly == NULL) {
        *poly = newNode;
    } else {
        struct Node* temp = *poly;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}

// Display polynomial
void display(struct Node* poly) {
    while (poly != NULL) {
        printf("%dx^%d", poly->coeff, poly->pow);
        if (poly->next != NULL)
            printf(" + ");
        poly = poly->next;
    }
    printf("\n");
}

// Add two polynomials
struct Node* addPolynomials(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL;

    while (poly1 != NULL && poly2 != NULL) {
        if (poly1->pow > poly2->pow) {
            insertTerm(&result, poly1->coeff, poly1->pow);
            poly1 = poly1->next;
        } else if (poly1->pow < poly2->pow) {
            insertTerm(&result, poly2->coeff, poly2->pow);
            poly2 = poly2->next;
        } else {
            insertTerm(&result, poly1->coeff + poly2->coeff, poly1->pow);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }

    // Remaining terms
    while (poly1 != NULL) {
        insertTerm(&result, poly1->coeff, poly1->pow);
        poly1 = poly1->next;
    }
    while (poly2 != NULL) {
        insertTerm(&result, poly2->coeff, poly2->pow);
        poly2 = poly2->next;
    }

    return result;
}

// Main
int main() {
    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;
    struct Node* result = NULL;

    // First polynomial: 3x^3 + 4x^2 + 5
    insertTerm(&poly1, 3, 3);
    insertTerm(&poly1, 4, 2);
    insertTerm(&poly1, 5, 0);

    // Second polynomial: 5x^2 + 6x + 7
    insertTerm(&poly2, 5, 2);
    insertTerm(&poly2, 6, 1);
    insertTerm(&poly2, 7, 0);

    printf("Polynomial 1: ");
    display(poly1);

    printf("Polynomial 2: ");
    display(poly2);

    result = addPolynomials(poly1, poly2);

    printf("Sum: ");
    display(result);

    return 0;
}

