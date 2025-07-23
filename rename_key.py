#Rename key of a dictionary.

my_dict = {
    'name': 'Alice',
    'age': 25,
    'city': 'New York'
}

# Rename key 'name' to 'first_name'
if 'name' in my_dict:
    my_dict['first_name'] = my_dict.pop('name')

print("Updated dictionary:", my_dict)
