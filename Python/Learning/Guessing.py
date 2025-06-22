import sys

from random import randint

randomNum = randint(int(sys.argv[1]), int(sys.argv[2]))

while True:
    try:
        guess = int(input("Enter a number between the two numbers chosen."))

        if guess >= int(sys.argv[1]) and guess <= int(sys.argv[2]):
            if guess == randomNum:
                print("You're a genius!")
                break
    except ValueError:
        print("Enter a numerical value.")
        continue