# Create an @authenticated decorator that only allows the function to run is user1 has 'valid' set to True:
user1 = {
    'name': 'Sorna',
    'valid': True #changing this will either run or not run the message_friends function.
}

user2 = {
    'name': 'Daniel',
    'valid': True #changing this will either run or not run the message_friends function.
}

li = [1,2,3]

def authenticated(fn):
  def wrapper(*args):
     if args[0][1] == 2:
        return fn(*args)
     else:
        return print("Invalid user")
  return wrapper

@authenticated
def message_friends(user1, user2):
    print('message has been sent')

message_friends(li, user2)