# Question 1:
# Write a program which will find all such numbers which are divisible by 7 
# but are not a multiple of 5, between 2000 and 3200 (both included).
# The numbers obtained should be printed in a comma-separated sequence on a single line.
# for i in range(2000, 3201):
#     if i%7 == 0 and i%5 != 0:
#         print(i, end=",")
# result = [i for i in range(2000, 3201) if i%7 == 0 and i%5 != 0]
# print(result)
# or
# print(*(i for i in range(2000, 3201) if i%7 == 0 and i%5 != 0), end=",")

# Question 2:
# Write a program which can compute the factorial of a given numbers.
# The results should be printed in a comma-separated sequence on a single line.
# Suppose the following input is supplied to the program: 8 Then, the output should be:40320

# def fac(num):
#     result = 1
#     for i in range(1, num+1):
#         result *= i
#     return result

# print(fac(8))

# def fac1(num):
#     if num <= 1:
#         return 1
#     else:
#         return num * fac1(num-1)
# print(fac1(8))

# def factorial_n(n):
#     if n < 0:
#         return None
    
#     if n == 0 or n == 1:
#         return 1
    
#     if n % 2 != 0:
#         return factorial_n(n-1)
    
#     return n * factorial_n(n-2)

# print(factorial_n(9))  # Output: 3456

# Question 3:
# With a given integral number n, write a program to generate a dictionary that contains (i, i x i) 
# such that is an integral number between 1 and n (both included). and then the program should print the 
# dictionary.Suppose the following input is supplied to the program: 8

# Then, the output should be:

# {1: 1, 2: 4, 3: 9, 4: 16, 5: 25, 6: 36, 7: 49, 8: 64}

# n = int(input("Size of dictionary "))
# getDict = {}
# def generate(n):
#     for i in range(1, n+1):
#         getDict[i] = i*i
#     return getDict

# generate(n)
# print(getDict)

# new_dict = {i: i*i for i in range(1, n+1)}

# print(new_dict)

# for i in enumerate([i*i for i in range(1, n+1)], 1):
#     print (i)
# print(dict(enumerate([i*i for i in range(1, n+1)], 1)))

# DAY 2 #################################################################

# Question 4:

# Write a program which accepts a sequence of comma-separated numbers from console and generate a list and a
# tuple which contains every number.Suppose the following input is supplied to the program:

# n = input().split(',')

# l = tuple(n)

# print(n)
# print(l)

# print(tuple(input("Enter a series of csv numbers: ").split(',')))

# Question 5:

# Define a class which has at least two methods:

# getString: to get a string from console input
# printString: to print the string in upper case.
# Also please include simple test function to test the class methods.

# class question5():
#     def getString(self):
#         self.text = input("Please enter some text: ")
    
#     def shout(self):
#         print(f'My name is {self.name}')
    
# n = question5()
# n.getString()
# print(n.printString())

# Question 6: 

# Write a program that calculates and prints the value according to the given formula:
# Q = Square root of [(2 * C * D)/H]
# Following are the fixed values of C and H:
# C is 50. H is 30.
# D is the variable whose values should be input to your program in a comma-separated sequence.
# For example Let us assume the following comma separated input sequence is given to the program:
# 100,150,180

# from math import sqrt

# C, H = 50, 30

# def calc(D):
#     return sqrt((2*C*D)/H)

# D = [int(i) for i in input("Enter values here: ").split(',')]
# D = [str(round(calc(i))) for i in D]
# print(','.join(D))

# Question 7:
#_Write a program which takes 2 digits, X,Y as input and generates a 2-dimensional array. 
# The element value in the i-th row and j-th column of the array should be i _ j.*
# Note: i=0,1.., X-1; j=0,1,¡­Y-1. Suppose the following inputs are given to the program: 3,5
# Then, the output of the program should be:
# [[0, 0, 0, 0, 0], [0, 1, 2, 3, 4], [0, 2, 4, 6, 8]]

# x,y = map(int,input().split(','))

# lst = [[i*j for j in range(y)] for i in range(x)]
# ls = []
# for i in range(x):
#     tmp = []
#     for j in range(y):
#         tmp.append(i*j)
#     ls.append(tmp)
# print(ls)

# Question 8:

#Write a program that accepts a comma separated sequence of words as input and prints the words in a comma-separated
#sequence after sorting them alphabetically.\
#Suppose the following input is supplied to the program:
#without,hello,bag,world
#Then, the output should be:
#bag,hello,without,world

# n = input("Enter words: ").split(',')

# n.sort()
# print(','.join(n))

# Question 9:
# Write a program that accepts sequence of lines as input and prints the lines after making all characters in the 
# sentence capitalized.

# Suppose the following input is supplied to the program:

# Hello world
# Practice makes perfect
# Then, the output should be:

# HELLO WORLD
# PRACTICE MAKES PERFECT

# n = []

# while True:
#     li = input()
#     if len(li) == 0:
#         break
#     n.append(li.upper())

# for i in n:
#     print(i)

# Question 10:

# Write a program that accepts a sequence of whitespace separated words as input and prints the words after removing 
# all duplicate words and sorting them alphanumerically.

# Sentence = input("Enter a string of characters: ")
# new_sentence = sorted(list(set(Sentence.split(' '))))
# newNew = ' '.join(new_sentence)
# print(newNew)

# Question 11:

# Write a program which accepts a sequence of comma separated 4 digit binary numbers as its input and then check whether 
# they are divisible by 5 or not. The numbers that are divisible by 5 are to be printed in a comma separated sequence.

newList = input("Enter csv of binary numbers: ")
newNew = newList.split(',')
newNew = [i for i in newNew if int(i, 2) % 5 == 0]
for i in newNew:
    print(i)