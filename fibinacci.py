n=int(input("Enter the range:"))
a,b=0,1
print("Fibonacci Series:")
for i in range(n):
    print(a,end="," if i<n-1 else "\n")
    a,b=b,a+b