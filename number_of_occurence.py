#Counts the number of occurrences of item ‘x’ from a tuple.

tuple=tuple(map(int,input("Enter the elements:").split()))
element=int(input("Enter the value of x:"))

count = 0

# Loop through tuple
for item in tuple:
    if item == element:
        count += 1

print("Occurrences of", element, ":", count)

