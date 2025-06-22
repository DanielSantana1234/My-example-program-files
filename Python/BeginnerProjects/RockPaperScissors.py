from random import choice

def game():
    rps = ["rock", "paper", "scissors"]
    play = True
    while play==True:
        userInp = input("Enter \"rock\", \"paper\", or \"scissors\": ")
        compInp = choice(rps)
        if userInp == compInp:
            print("Tie game!")

        elif(userInp=="rock" and compInp=="paper"):
            print(f"Computer Wins! by {compInp} beating {userInp}")
        elif(userInp=="scissors" and compInp=="rock"):
            print(f"Computer Wins! by {compInp} beating {userInp}")
        elif(userInp=="paper" and compInp=="scissors"):
            print(f"Computer Wins! by {compInp} beating {userInp}")

        elif(compInp=="rock" and userInp=="paper"):
            print(f"User Wins! by {userInp} beating {compInp}")
        elif(compInp=="scissors" and userInp=="rock"):
            print(f"User Wins! by {userInp} beating {compInp}")
        elif(compInp=="paper" and userInp=="scissors"):
            print(f"User Wins! by {userInp} beating {compInp}")
        
        result = input("Play again Y or N?: ")
        if result == "Y":
            play = True
        elif result == "N":
            play = False
    print("Thanks for playing!")

game()        