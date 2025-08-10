#Write a program to convert a string into a linked list of characters.

class CharNode:
    def __init__(self, char):
        self.data = char
        self.next = None

def string_to_linked_list(string):
    head = None
    tail = None
    for ch in string:
        new_node = CharNode(ch)
        if head is None:
            head = tail = new_node
        else:
            tail.next = new_node
            tail = new_node
    return head

def display(head):
    print("Linked list of characters:", end=" ")
    while head:
        print(f"{head.data} -> ", end="")
        head = head.next
    print("NULL")

# Example usage
s = input("Enter a string: ")
head = string_to_linked_list(s)
display(head)
