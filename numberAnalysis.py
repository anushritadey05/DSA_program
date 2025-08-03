#Twenty-five numbers are entered from the keyboard. Write a program to find out how many of them are positive, how many are negative, how many are even and how many odd.

positive = negative = even = odd = 0

print("Enter 25 integers:")

for _ in range(25):
    num = int(input())

    if num > 0:
        positive += 1
    elif num < 0:
        negative += 1

    if num % 2 == 0:
        even += 1
    else:
        odd += 1

print("\nResults:")
print("Positive numbers:", positive)
print("Negative numbers:", negative)
print("Even numbers:", even)
print("Odd numbers:", odd)
