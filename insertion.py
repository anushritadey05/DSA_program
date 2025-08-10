#Write a program to perform insertion of an element/node in a given list.

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def insert_at_beginning(self, value):
        new_node = Node(value)
        new_node.next = self.head
        self.head = new_node

    def insert_at_end(self, value):
        new_node = Node(value)
        if not self.head:
            self.head = new_node
            return
        temp = self.head
        while temp.next:
            temp = temp.next
        temp.next = new_node

    def insert_at_position(self, value, pos):
        if pos == 0:
            self.insert_at_beginning(value)
            return
        new_node = Node(value)
        temp = self.head
        for _ in range(pos - 1):
            if not temp:
                print("Position out of bounds!")
                return
            temp = temp.next
        if not temp:
            print("Position out of bounds!")
            return
        new_node.next = temp.next
        temp.next = new_node

    def display(self):
        temp = self.head
        print("List:", end=" ")
        while temp:
            print(f"{temp.data} -> ", end="")
            temp = temp.next
        print("NULL")

# Example usage
ll = LinkedList()
while True:
    print("\n1. Insert at beginning\n2. Insert at end\n3. Insert at position\n4. Display\n5. Exit")
    choice = int(input("Enter your choice: "))
    
    if choice == 1:
        val = int(input("Enter value: "))
        ll.insert_at_beginning(val)
    elif choice == 2:
        val = int(input("Enter value: "))
        ll.insert_at_end(val)
    elif choice == 3:
        val = int(input("Enter value: "))
        pos = int(input("Enter position (0-based index): "))
        ll.insert_at_position(val, pos)
    elif choice == 4:
        ll.display()
    elif choice == 5:
        break
    else:
        print("Invalid choice!")
