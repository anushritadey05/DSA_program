#Return a set of elements present in Set A or B, but not both.

A = {1, 2, 3, 4}
B = {3, 4, 5, 6}

result = A.symmetric_difference(B)

print("Elements in A or B but not both:", result)
