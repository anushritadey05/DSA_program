#Add new item to list after a specified item.
list=["apple","banana","mango"]
item="orange"
specified_item="banana"
if specified_item in list:
    index=list.index(specified_item)
    list.insert(index+1,item)

print(list)