# map, filter, zip, and reduce
from functools import reduce

my_list = [1,2,3]
your_list = (10,20,30)
their_list = (5,4,3)

def multiply_by2(item):
    return item*2

def only_odd(item):
    return item % 2 != 0

def accumulator(acc, item):
    print(acc, item)
    return acc + item

print(list(map(multiply_by2, my_list)))
print(list(filter(only_odd, my_list)))
print(list(zip(my_list, your_list, their_list)))
print(reduce(accumulator, my_list, 10))
print(reduce(lambda acc, item: acc+item, my_list, 10))
print(my_list)