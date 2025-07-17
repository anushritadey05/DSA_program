a=list(map(int,input("Enter the elements").split()))
unique_a=[]
for num in a:
    if num not in unique_a:
        unique_a.append(num)

print("Array after removing the duplicate elements:",unique_a)