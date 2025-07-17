a=list(map(int,input("Enter the elements:").split()))
choice=input("Delete element by 'index' or 'value'?".strip().lower())
if choice=="index":
    index=int(input("Enter the index to delete:"))
    if(0<=index<=len(a)):
        removed=a.pop(index)
        print("The deleted element is:",removed)
        
    else:
        print("Invalid index...")
    
elif choice=="value":
    value=int(input("Enter the value to delete:"))
    if value in a:
        a.remove(value)
        print("Deleted",value)
        
    else:
        print("Value not found in array")

else:
    print("invalid choice")

print("Updated array:",a)

    
