#Remove all occurrences of a specific item from a list.

my_list = [1, 2, 3, 2, 4, 2, 5]
item_to_remove = 2

# Remove all occurrences
my_list = [item for item in my_list if item != item_to_remove]

print(my_list)
