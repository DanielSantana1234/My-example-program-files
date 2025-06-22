import random


def game():
    userInp = int(input("Enter a random number between 1 - 1000: "))
    low = 1
    high = 1000
    randomNum = random.randint(low,high)

    print(f"Is this number: {randomNum} \"above\" or \"below\" or \"equal\" to your number?")
    abvBel = input("Enter \"above\" or \"below\" or \"equal\"")

    while abvBel != "equal":
        randomNum = random.randint(low, high)
        print(f"Is this number: {randomNum} \"above\" or \"below\" or \"equal\" to your number?")
        abvBel = input("Enter \"above\" or \"below\" or \"equal\"")
        if abvBel == "above":
            print("Sorry your number is too high!")
            high = randomNum-1
        elif abvBel == "below":
            print("Sorry your number is too low")
            low = randomNum+1
        else:
            break
    print(randomNum)
    
game()