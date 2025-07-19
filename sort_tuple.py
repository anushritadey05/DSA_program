#Sort a tuple of tuples by 2nd item.
data = ((1, 3), (4, 1), (5, 2), (2, 4))
sorted_data = tuple(sorted(data, key=lambda x: x[1]))

print("Sorted Tuple:", sorted_data)
