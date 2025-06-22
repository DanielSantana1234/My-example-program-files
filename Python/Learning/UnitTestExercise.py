import sys

from random import randint

def guessinggame(guess, answer):
     if guess >= 1 and guess <= 10:
            if guess == answer:
                print("You're a genius!")
                return True
     else:
        print("Hey I said 1-10")
        return False

if __name__ == '__main__':
    randomNum = randint(1, 10)
    while True:
        try:
            guess = int(input("Enter a number between the two numbers chosen."))
            if(guessinggame(guess, randomNum)):
                break

        except ValueError:
            print("Enter a numerical value.")
            continue