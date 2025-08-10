#Given a singly linked list of size N. The task is to left-shift the linked list by k nodes, where k is a given positive integer smaller than or equal to length of the linked list. 

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def insert_end(head, data):
    new_node = Node(data)
    if not head:
        return new_node
    temp = head
    while temp.next:
        temp = temp.next
    temp.next = new_node
    return head

def print_list(head):
    while head:
        print(head.data, end=" -> " if head.next else "\n")
        head = head.next

def left_shift(head, k):
    if not head or k == 0:
        return head

    # Find length
    temp = head
    length = 1
    while temp.next:
        temp = temp.next
        length += 1

    if k >= length:
        return head

    # Traverse to kth node
    temp = head
    for _ in range(k - 1):
        temp = temp.next

    new_head = temp.next
    temp.next = None

    # Find last of new list
    last = new_head
    while last and last.next:
        last = last.next

    if last:
        last.next = head
        return new_head
    else:
        return head

# Driver code
head = None
for val in [22, 44, 77, 88, 99]:
    head = insert_end(head, val)

k = 3
print("Original list:")
print_list(head)

head = left_shift(head, k)

print(f"Left shifted list by {k}:")
print_list(head)
