#Write a program to merge two already sorted list & reverse the resultant list.

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

def merge_sorted(l1, l2):
    dummy = Node(0)
    tail = dummy

    while l1 and l2:
        if l1.data < l2.data:
            tail.next = l1
            l1 = l1.next
        else:
            tail.next = l2
            l2 = l2.next
        tail = tail.next

    tail.next = l1 if l1 else l2
    return dummy.next

def reverse(head):
    prev = None
    while head:
        nxt = head.next
        head.next = prev
        prev = head
        head = nxt
    return prev

def display(head):
    while head:
        print(f"{head.data} -> ", end="")
        head = head.next
    print("NULL")

# Example usage
def create_sorted_list():
    n = int(input("Enter number of elements in sorted list: "))
    print("Enter sorted elements:")
    head = None
    for _ in range(n):
        val = int(input())
        head = insert_end(head, val)
    return head

print("Create first sorted list")
list1 = create_sorted_list()
print("Create second sorted list")
list2 = create_sorted_list()

print("\nList 1: ", end=""); display(list1)
print("List 2: ", end=""); display(list2)

merged = merge_sorted(list1, list2)
print("\nMerged List: ", end=""); display(merged)

reversed_list = reverse(merged)
print("Reversed Merged List: ", end=""); display(reversed_list)
