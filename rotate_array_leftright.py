def left(arr,k):
    n=len(arr)
    k=k%n
    return arr[k:]+arr[:k]

def right(arr,k):
    n=len(arr)
    k=k%n
    return arr[-k:]+arr[:-k]

k=int(input("Enter the value of k:"))
arr=list(map(int,input("Enter the elements:").split()))

print("Original number:",arr)
print("Rotated to the left:",left(arr,k))
print("Rotated to the right:",right(arr,k))
