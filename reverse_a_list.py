n=int(input("Enter the number of elements in the list:"))
list=[]
for i in range(n):
    element=int(input("Enter element:"))
    list.append(element)
print("Original list:",list)
reversed_list=list[::-1]
print("The reversed list is:",reversed_list)