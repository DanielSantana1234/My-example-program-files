from random import randint

secret_number = randint(1, 1000)

user_input = int(input("Enter a number between 1 and 1000"))

while user_input != secret_number:
    if user_input > secret_number:
        print("Number is too high!")
        user_input = int(input("Enter a number between 1 and 1000"))
        continue
    elif user_input < secret_number:
        print("Number is too low!")
        user_input = int(input("Enter a number between 1 and 1000"))
        continue
    else:
        print("You guessed correctly!")
        break
print(f"The secret number was {secret_number}!")    