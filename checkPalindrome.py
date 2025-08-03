#Write a program to check whether a string is palindrome or not.

# Input string
string = input("Enter a string: ")

# Method 1: Using slicing
if string == string[::-1]:
    print("The string is a palindrome.")
else:
    print("The string is not a palindrome.")
