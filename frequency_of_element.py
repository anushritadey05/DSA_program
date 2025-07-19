def count_frequency(arr):
    freq={}
    for item in arr:
        if item in freq:
            freq[item]+=1
        else:
            freq[item]=1
    return freq

arr=list(map(int,input("Enter the elements:").split()))
frequency=count_frequency(arr)
for key,value in frequency.items():
    print(f"{key}={value}")


