
arr = list(map(int, input("Enter elements of the array separated by space: ").split()))


if not arr:
    print("Array is empty!")
else:

    maximum = minimum = arr[0]

    
    for num in arr[1:]:
        if num > maximum:
            maximum = num
        if num < minimum:
            minimum = num

    
    print("Maximum element:", maximum)
    print("Minimum element:", minimum)
