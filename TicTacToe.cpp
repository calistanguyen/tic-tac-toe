#include <iostream>

void CreateBoard(char board[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            board[i][j] = '*'; //'*' will indicate an empty space on the board. 
        }
    }
}

int main(){

    char board[3][3]; //initializing 2d array for the board
    CreateBoard(board); 

}