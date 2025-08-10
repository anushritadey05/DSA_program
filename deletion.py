#Write a program to perform deletion of an element/node in a given list.

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

    def delete(self, value):
        temp = self.head
        prev = None

        # Deleting head node
        if temp and temp.data == value:
            self.head = temp.next
            print(f"Deleted {value} from list.")
            return

        while temp and temp.data != value:
            prev = temp
            temp = temp.next

        if temp is None:
            print(f"Value {value} not found in list.")
            return

        prev.next = temp.next
        print(f"Deleted {value} from list.")

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
    print("\n1. Insert\n2. Delete\n3. Display\n4. Exit")
    choice = int(input("Enter your choice: "))
    if choice == 1:
        val = int(input("Enter value to insert: "))
        ll.insert(val)
    elif choice == 2:
        val = int(input("Enter value to delete: "))
        ll.delete(val)
    elif choice == 3:
        ll.display()
    elif choice == 4:
        break
    else:
        print("Invalid choice!")
