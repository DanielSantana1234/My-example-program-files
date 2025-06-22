def sum(num1, num2): # Automatically returns none
    return num1 + num2 # A function either modifies something in our program our returns something

# Should do one thing really well.
# Should return something

total = sum(10,5)
print(sum(10,total))

def sum1(num1, num2):
    def another_fun(n1, n2):
        return n1 + n2
    return another_fun(num1 + num2)

total1 = sum(10, 20)
print(total1)