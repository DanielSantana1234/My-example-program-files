my_file = open('open.txt')

# print(my_file.read())
# my_file.seek(0)
# print(my_file.read())
# my_file.seek(0)
# print(my_file.read())

# print(my_file.readline())
# print(my_file.readline())
# print(my_file.readline())
# print(my_file.readline())
# print(my_file.readline())

# print(my_file.readlines())

# my_file.close()

with open('open.txt', mode = 'r+') as my_file:
    text = my_file.write('MikeBlackhawk')
    print(text)

# Example of accessing a file in another folder
with open('app\open.txt', mode = 'r+') as my_file:
    text = my_file.write('MikeBlackhawk')
    print(text)