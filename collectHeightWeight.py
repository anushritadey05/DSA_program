#Write a program to collect height & weight of N students. Find the highest weight/height ratio using linked list.

class Student:
    def __init__(self, height, weight):
        self.height = height
        self.weight = weight
        self.ratio = weight / height
        self.next = None

def insert(head, height, weight):
    new_node = Student(height, weight)
    if head is None:
        return new_node
    temp = head
    while temp.next:
        temp = temp.next
    temp.next = new_node
    return head

def find_max_ratio(head):
    max_ratio = 0.0
    while head:
        if head.ratio > max_ratio:
            max_ratio = head.ratio
        head = head.next
    return max_ratio

# Input and execution
n = int(input("Enter number of students: "))
head = None
for i in range(n):
    h, w = map(float, input(f"Enter height and weight of student {i+1}: ").split())
    head = insert(head, h, w)

print("Highest weight/height ratio is: {:.2f}".format(find_max_ratio(head)))
