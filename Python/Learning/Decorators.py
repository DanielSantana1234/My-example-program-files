#Decorator
from time import time

def performance(fn):
    def wrapper(*args, **kwargs):
        t1 = time()
        result = fn(*args, **kwargs)
        t2 = time()
        print(f'It took {t2 - t1} s')
        return result
    return wrapper

@performance
def long_time():
    for i in range(1000000):
        i*5

long_time()

def my_decorator(func):
    def wrap_func(x):
        print('**********')
        func(x)
        print('**********')
    return wrap_func

@my_decorator
def hello(greeting):
    print(greeting)
    
hello('HI')