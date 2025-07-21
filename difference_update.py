#Update the first set with items that don’t exist in the second set.

set1 = {1, 2, 3, 4}
set2 = {3, 4, 5, 6}

set1.difference_update(set2)

print("Updated set1:", set1)
