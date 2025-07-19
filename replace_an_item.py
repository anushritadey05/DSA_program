#Replace list’s item with new value if found


my_list = ["apple", "banana", "cherry"]

old_item = "banana"
new_item = "orange"

if old_item in my_list:
    index = my_list.index(old_item)
    my_list[index] = new_item

print(my_list)
