#Get Only unique items from two sets.

set1={1,2,3,4}
set2={2,3,5,6}
unique=set1.symmetric_difference(set2)

print("The unique elements are:",unique)
