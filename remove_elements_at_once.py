#Remove items from the set at once.

my_set = {1, 2, 3, 4, 5, 6}
items_to_remove = {2, 4, 6}

my_set.difference_update(items_to_remove)

print("Updated set:", my_set)
