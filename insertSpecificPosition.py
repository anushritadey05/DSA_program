#Write a program to insert an element at a specific position.

def insert_at_position(arr, pos, value):
    if pos < 0 or pos > len(arr):
        print("Invalid position")
        return arr
    arr.insert(pos, value)
    return arr

# Example usage
arr = [10, 20, 30, 40, 50]
value = 25
position = 2

print("Original array:", arr)
arr = insert_at_position(arr, position, value)
print("Array after insertion:", arr)
