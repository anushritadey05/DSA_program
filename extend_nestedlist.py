#Extend nested list by adding the sub list

nestedlist = [[1, 2], [3, 4], [5, 6]]
print(nestedlist)

item = [7, 8]
nestedlist[1].extend(item)  # Extends the list at index 1: [3, 4] → [3, 4, 7, 8]

print("Extended:", nestedlist)
