#Add a list of elements to a set.

user_input = input("Enter the elements separated by a comma: ")
my_set = set(map(int, user_input.split(",")))
  

elements_to_add = list(map(int, input("Enter the list of elements to insert: ").split()))

my_set.update(elements_to_add)

print("The new set is:", my_set)
