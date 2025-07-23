#Delete a list of keys from a dictionary.

my_dict = {
    'name': 'Alice',
    'age': 25,
    'city': 'New York',
    'gender': 'Female'
}

keys_to_delete = ['age', 'gender']

for key in keys_to_delete:
    my_dict.pop(key, None)  

print("Updated dictionary:", my_dict)
