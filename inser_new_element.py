array=list(map(int,input("Enter the elements of array separated by space:").split()))
element =int(input("Enter the element to enter:"))
position=int(input("Enter the position in which the element is to be entered:"))
if (0<=position<=len(array)):
    array.insert(position,element)
    print("Updated Array:",array)
else:
    print("Invalid position...")
