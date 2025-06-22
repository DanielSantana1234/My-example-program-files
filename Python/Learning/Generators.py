# iterable
# iterate
# generators

# Good for large sets of data, particularly large loops

def generator_function(num):
    for i in range(num):
        yield i

g = generator_function(100)
next(g)
next(g)
print(next(g))

print(next(g))

# How for loops work 

def special_for(iterable):
    iterator = iter(iterable)
    while True:
        try:
            print(iterator)
            print(next(iterator)*2)
        except StopIteration:
            break

special_for([1,2,3])

# How range() works

class MyGen:
  current = 0
  def __init__(self, first, last):
    self.first = first
    self.last = last
    MyGen.current = self.first #this line allows us to use the current number as the starting point for the iteration

  def __iter__(self):
    return self

  def __next__(self):
    if MyGen.current < self.last:
      num = MyGen.current
      MyGen.current += 1
      return num
    raise StopIteration

gen = MyGen(1,100)
for i in gen:
    print(i)