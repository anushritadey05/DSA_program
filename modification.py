#Write a program to perform modification of an element/node in a given list.

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def insert(self, value):
        new_node = Node(value)
        if not self.head:
            self.head = new_node
            return
        temp = self.head
        while temp.next:
            temp = temp.next
        temp.next = new_node

    def modify(self, old_value, new_value):
        temp = self.head
        while temp:
            if temp.data == old_value:
                temp.data = new_value
                print(f"Modified node value from {old_value} to {new_value}.")
                return
            temp = temp.next
        print(f"Value {old_value} not found in list.")

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
    print("\n1. Insert\n2. Modify\n3. Display\n4. Exit")
    choice = int(input("Enter your choice: "))
    if choice == 1:
        val = int(input("Enter value to insert: "))
        ll.insert(val)
    elif choice == 2:
        old = int(input("Enter value to modify: "))
        new = int(input("Enter new value: "))
        ll.modify(old, new)
    elif choice == 3:
        ll.display()
    elif choice == 4:
        break
    else:
        print("Invalid choice!")
