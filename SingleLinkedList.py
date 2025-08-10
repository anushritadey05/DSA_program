#Write a program to implement single linked list.

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class SinglyLinkedList:
    def __init__(self):
        self.head = None

    def insert_at_end(self, value):
        new_node = Node(value)
        if self.head is None:
            self.head = new_node
        else:
            temp = self.head
            while temp.next:
                temp = temp.next
            temp.next = new_node

    def display(self):
        temp = self.head
        print("Linked list:", end=" ")
        while temp:
            print(f"{temp.data} -> ", end="")
            temp = temp.next
        print("NULL")

# Example usage
ll = SinglyLinkedList()
n = int(input("Enter number of nodes: "))
print(f"Enter {n} values:")
for _ in range(n):
    val = int(input())
    ll.insert_at_end(val)
ll.display()
