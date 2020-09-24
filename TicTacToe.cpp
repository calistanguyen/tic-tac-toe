#include <iostream>

void CreateBoard(char board[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            board[i][j] = '*'; //'*' will indicate an empty space on the board.
        }
    }
}
void DisplayBoard(char board[3][3]){
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      std::cout << board[i][j];
    }
    std::cout << std::endl; 
  }

}

void PlaceMaker(int location[2], char marker, char board[3][3]){
    int row = location[0]; 
    int col = location[1]; 
    board[row][col] = marker; 
}

int main(){

    char board[3][3]; //initializing 2d array for the board
    CreateBoard(board);
    DisplayBoard(board); 

}
