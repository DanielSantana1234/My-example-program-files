def fib(number):
    n1 = 0
    n2 = 1

    for _ in range(number):
        yield n1
        temp = n1
        n1 = n2
        n2 = temp + n1

for x in fib(20):
    print(x)

hello = fib(8)
print(next(hello))
print(next(hello))
print(next(hello))
print(next(hello))
print(next(hello))
print(next(hello))
print(next(hello))
print(next(hello))

def fib2(number):
    n1 = 0
    n2 = 1
    result = []

    for _ in range(number):
        result.append(n1)
        temp = n1
        n1 = n2
        n2 = temp + n1
    return result

print(fib2(20))