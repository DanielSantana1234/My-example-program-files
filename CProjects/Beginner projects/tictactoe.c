#include "stdio.h"
#include "stdlib.h"

void checkForWin(char array[3][3], int *gameState, int player);
void drawBoard(char array[3][3]);
int markBoard(char array[3][3], char player, char playerCharacter);

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void drawBoard(char array[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%c\t", array[i][j]);
        }
        printf("\n");
    }
}

int markBoard(char array[3][3], char player, char playerCharacter){
    switch(player){
        case '1':
            array[0][0] = playerCharacter;
            return 0;
            break;
        case '2':
            array[0][1] = playerCharacter;
            break;
        case '3':
            array[0][2] = playerCharacter;
            break;
        case '4':
            array[1][0] = playerCharacter;
            break;
        case '5':
            array[1][1] = playerCharacter;
            break;
        case '6':
            array[1][2] = playerCharacter;
            break;
        case '7':
            array[2][0] = playerCharacter;
            break;
        case '8':
            array[2][1] = playerCharacter;
            break;
        case '9':
            array[2][2] = playerCharacter;
            break;
    }
}

void checkForWin(char array[3][3], int *gameState, int player){
    for(int i = 0; i < 3; i++){
        if(array[i][0] == array[i][1] && array[i][1] == array[i][2]){
            printf("Player %d has won!", player);
            *gameState = 0;
            break;
        }
    }
    for(int j = 0; j < 3; j++){ 
        if(array[0][j] == array[1][j] && array[1][j] == array[2][j]){
            printf("Player %d has won!", player);
            *gameState = 0;
            break;
        }
    }
    if(array[0][0] == array[1][1] && array[1][1] == array[2][2]){
        printf("Player %d has won!", player);
        *gameState = 0;
    }
    else if(array[0][2] == array[1][1] && array[1][1] == array[2][0]){
        printf("Player %d has won!", player);
        *gameState = 0;
    }

    int fill = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(array[i][j] == 'X' || array[i][j] == 'O'){
                fill++;
            }
        }
    }
    if(fill == 9 && *gameState != 0){
        printf("It's a draw!");
        *gameState = 0;
        return;
    }

}
    
    // Row wins
    // if(array[0][0] == array[0][1] && array[0][1] == array[0][2]){
    //     printf("Player %d has won!", player);
    //     *gameState = 0;
    // }
    // else if(array[1][0] == array[1][1] && array[1][1] == array[1][2]){
    //     printf("Player %d has won!", player);
    //     *gameState = 0;
    // }
    // else if(array[2][0] == array[2][1] && array[2][1] == array[2][2]){
    //     printf("Player %d has won!", player);
    //     *gameState = 0;
    // }
    // // column wins 
    // else if(array[0][0] == array[1][0] && array[1][0] == array[2][0]){
    //     printf("Player %d has won!", player);
    //     *gameState = 0;
    // }
    // else if(array[0][1] == array[1][1] && array[1][1] == array[2][1]){
    //     printf("Player %d has won!", player);
    //     *gameState = 0;
    // }
    // else if(array[0][2] == array[1][2] && array[1][2] == array[2][2]){
    //     printf("Player %d has won!", player);
    //     *gameState = 0;
    // }
    // // diagonal wins 
    // else if(array[0][0] == array[1][1] && array[1][1] == array[2][2]){
    //     printf("Player %d has won!", player);
    //     *gameState = 0;
    // }
    // else if(array[0][2] == array[1][1] && array[1][1] == array[2][0]){
    //     printf("Player %d has won!", player);
    //     *gameState = 0;
    // }

void clearScreen() {
    system("cls"); // Clears the console screen
}

int main(){
    int gameOn = 1;
    char gameBoard[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
    
    printf("\t\tTic Tac Toe\n\n");
    printf("Player 1 (X) - Player 2 (O)\n\n");
    drawBoard(gameBoard);
    int player = 1;
    char playerCharacter = 'X';
    char guess = ' ';
    while(gameOn != 0){
        printf("Player %d, enter a number: ", player);
        scanf(" %c", &guess);
        while(guess != '0' && guess != '1' && guess != '2' && guess != '3' && guess != '4' && guess != '5' && guess != '6' && guess != '7' && guess != '8' && guess != '9'){
                printf("Invalid input, press ENTER to continue.");
                fflush(stdout); // Ensure the message is displayed before waiting for input
                clearInputBuffer(); // Clear any existing newlines from previous inputs
                getchar();
                printf("Player %d, enter a number: ", player);
                scanf(" %c", &guess);
            }
        markBoard(gameBoard, guess, playerCharacter);
        clearScreen();
        drawBoard(gameBoard);
        checkForWin(gameBoard, &gameOn, player);
        if(player == 1){ 
            player = 2;
            playerCharacter = 'O';
        }
        else{ 
            player = 1;
            playerCharacter = 'X';
        }
    }
    return 0;
}