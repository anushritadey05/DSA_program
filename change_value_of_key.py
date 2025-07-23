#Change value of a key in a nested dictionary.

# Nested dictionary
my_dict = {
    'student1': {'name': 'Alice', 'age': 25},
    'student2': {'name': 'Bob', 'age': 22}
}

# Change the age of student1
my_dict['student1']['age'] = 26

print("Updated dictionary:", my_dict)
