#list, set, and dictionary comprehensions

#list comprehensions:

my_list = [char for char in 'hello']
my_list2 = [num for num in range(0,100)]
my_list3 = [num**2 for num in range(0,100)]
my_list4 = [num**2 for num in range(0,100) if num % 2 == 0]

#set comprehensions:

my_set = {char for char in 'hello'}
my_set2 = {num for num in range(0,100)}
my_set3 = {num**2 for num in range(0,100)}
my_set4 = {num**2 for num in range(0,100) if num % 2 == 0}

#dictionary comprehensions

simple_dict = {
    'a' : 1,
    'b' : 2
}

my_dict = {k:v**2 for k,v in simple_dict.items() if v % 2 == 0}
my_dict2 = {num:num*2 for num in [1,2,3]}

#Exercise:

some_list = ['a', 'b', 'c', 'b', 'd', 'm', 'n', 'n']

duplicates = list(set([x for x in some_list if some_list.count(x) > 1]))

print(duplicates)