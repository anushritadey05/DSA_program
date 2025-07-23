#Create a dictionary by extracting the keys from a given dictionary.

original_dict = {
    'name': 'Alice',
    'age': 25,
    'city': 'New York',
    'gender': 'Female'
}
keys_to_extract = ['name', 'city']

new_dict = {key: original_dict[key] for key in keys_to_extract}

print("Extracted dictionary:", new_dict)
