#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
    int primeNumbers[100] = {0};
    int arrayLength = sizeof(primeNumbers) / sizeof(primeNumbers[0]);
    int counter = 0;
    
    primeNumbers[counter++] = 2;
    
    
    for(int i = 3; i < 301; i+=2){
        bool isPrime = true;
        for(int j = sqrt(i); j >= 2; j--){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime && counter < arrayLength){
            primeNumbers[counter++] = i;
        }
    }
    for(int i = 0; i < counter; i++){
        printf("%d ", primeNumbers[i]);
    }
    return 0;
}