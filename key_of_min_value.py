#Get the key of a minimum value from the following dictionary.

my_dict={'a':1, 'b':4, 'c':5, 'd':9}
min_key=min(my_dict,key=my_dict.get)
print("The minimum value is in key:",min_key)