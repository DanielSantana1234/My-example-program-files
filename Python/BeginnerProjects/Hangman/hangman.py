from random import choice

def load_words():
    with open(r'C:\Users\Owner\Downloads\Programming\Python\BeginnerProjects\Hangman\words.txt') as words:
        validWords = list(words.read().split())
    
    return validWords


def game(listOfWords):
    random = choice(listOfWords)
    letters = [char for char in random]
    guess = ['_' for char in random]
    print(f"Here's your word: {guess}")
    tries = 6
    hangman = ''''''
    while tries>0:
        userInp = input("Enter a letter: ")
        if userInp in letters:
            print()

if __name__ == '__main__':
    englishWords = load_words()
    game(englishWords)
