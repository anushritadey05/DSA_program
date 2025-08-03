#Write a program to print abbreviation of a given word. (1st letter of each word)

# Input phrase
phrase = input("Enter a phrase: ")

# Split into words and take first letter of each
abbreviation = ''.join(word[0].upper() for word in phrase.split() if word)

print("Abbreviation:", abbreviation)
