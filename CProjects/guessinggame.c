#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int min = 0;
    int max = 20;
    int guess = 0;
    int numberToGuess = 0;
    int attempts = 5;
    time_t t;

    srand((unsigned) time(&t));

    int numberToGuess = rand() % 21;

    printf("Welcome to the Guessing Game!\n");
    printf("I have selected a number between %d and %d.\n", min, max);
    printf("You have %d attempts to guess the number.\n", attempts);
    printf("Please enter your guess: ");
    while(attempts > 0){
        scanf("%d", &guess);
        
        if(attempts <= 0){
            printf("Sorry, you have no attempts left. The number was %d.\n", numberToGuess);
            break;
        }
        if(guess < min || guess > max){
            printf("Your guess is out of range! Please guess a number between %d and %d.\n", min, max);
            continue;
        }

        if(guess == numberToGuess){
            printf("Congratulations! You guessed the number %d correctly!\n", numberToGuess);
            break;
        } else if(guess < numberToGuess){
            attempts--;
            printf("Too low! You have %d attempts left. Try again: ", attempts);
        } else {
            attempts--;
            printf("Too high! You have %d attempts left. Try again: ", attempts);
        }
    }

    return 0;
}