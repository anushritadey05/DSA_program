#Check if two sets have any elements in common. If yes, display the common elements.

set1 = {1, 2, 3, 4}
set2 = {3, 5, 6, 7}

common_elements = set1.intersection(set2)

if common_elements:
    print("Common elements found:", common_elements)
else:
    print("No common elements.")
