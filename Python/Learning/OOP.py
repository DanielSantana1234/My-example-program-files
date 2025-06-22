#OOP

class PlayerCharacter():
    # Class Object Attribute
    membership = True # This is the same for all objects
    def __init__(self, name='anonymous', age='0'):
        if (PlayerCharacter.membership):
            self.name = name #attributes
            self.age = age

    def run(self):
        print('run')

player1 = PlayerCharacter('Daniel', 21)
print(player1.name, player1.age)


# # function that filters vowels
# def fun(variable):
#     letters = ['a', 'e', 'i', 'o', 'u']
#     if (variable in letters):
#         return True
#     else:
#         return False
 
 
# # sequence
# sequence = ['a', 'e', 'e', 'j', 'k', 's', 'p', 'r']
 
# # using filter function
# filtered = filter(fun, sequence)
 
# print('The filtered letters are:')
# for s in filtered:
#     print(s)