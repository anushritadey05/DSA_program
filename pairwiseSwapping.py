#Given a singly linked list of size N. The task is to swap elements in the linked list pair wise. For example, if the input list is 1 2 3 4, the resulting list after swaps will be 2 1 4 3.
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def insert_end(head, data):
    new = Node(data)
    if not head:
        return new
    temp = head
    while temp.next:
        temp = temp.next
    temp.next = new
    return head

def display(head):
    while head:
        print(head.data, end=" -> ")
        head = head.next
    print("NULL")

def pairwise_swap(head):
    temp = head
    while temp and temp.next:
        temp.data, temp.next.data = temp.next.data, temp.data
        temp = temp.next.next
    return head

# Input and test
n = int(input("Enter number of nodes: "))
print("Enter the elements:")
head = None
for _ in range(n):
    val = int(input())
    head = insert_end(head, val)

print("\nOriginal List:")
display(head)

head = pairwise_swap(head)

print("List After Pairwise Swap:")
display(head)
