#Merge two Python dictionaries in to one.

dict1={'a':1,'b':2}
dict2={'c':3,'d':4}
merged=dict1.copy()
merged.update(dict2)

print("Merged Dictionary:",merged)
