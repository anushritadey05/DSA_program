#Write a program to perform addition of two polynomials using linked list.

class Node:
    def __init__(self, coeff, pow):
        self.coeff = coeff
        self.pow = pow
        self.next = None

def insert_term(head, coeff, pow):
    new_node = Node(coeff, pow)
    if head is None:
        return new_node
    temp = head
    while temp.next:
        temp = temp.next
    temp.next = new_node
    return head

def display(poly):
    while poly:
        print(f"{poly.coeff}x^{poly.pow}", end="")
        if poly.next:
            print(" + ", end="")
        poly = poly.next
    print()

def add_polynomials(poly1, poly2):
    result = None
    while poly1 and poly2:
        if poly1.pow > poly2.pow:
            result = insert_term(result, poly1.coeff, poly1.pow)
            poly1 = poly1.next
        elif poly1.pow < poly2.pow:
            result = insert_term(result, poly2.coeff, poly2.pow)
            poly2 = poly2.next
        else:
            result = insert_term(result, poly1.coeff + poly2.coeff, poly1.pow)
            poly1 = poly1.next
            poly2 = poly2.next

    while poly1:
        result = insert_term(result, poly1.coeff, poly1.pow)
        poly1 = poly1.next
    while poly2:
        result = insert_term(result, poly2.coeff, poly2.pow)
        poly2 = poly2.next

    return result

# First Polynomial: 3x^3 + 4x^2 + 5
poly1 = None
poly1 = insert_term(poly1, 3, 3)
poly1 = insert_term(poly1, 4, 2)
poly1 = insert_term(poly1, 5, 0)

# Second Polynomial: 5x^2 + 6x + 7
poly2 = None
poly2 = insert_term(poly2, 5, 2)
poly2 = insert_term(poly2, 6, 1)
poly2 = insert_term(poly2, 7, 0)

print("Polynomial 1:")
display(poly1)
print("Polynomial 2:")
display(poly2)

result = add_polynomials(poly1, poly2)

print("Sum of polynomials:")
display(result)
