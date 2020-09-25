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


 static int* GetPlayerChoice(){
  std::string row, col;
  static int cords[2];
  std::cout << "Enter a row: " << '\n';
  std::cin >> row;
  int int_row = stoi(row);
  cords[0] = int_row;
  std::cout << "Enter a column: " << '\n';
  std::cin >> col;
  int int_col = stoi(col);
  cords[1] = int_col;
  return cords;
}

int main(){
  int *ptr = GetPlayerChoice();
  int location[2] = {ptr[0], ptr[1]};
  char board[3][3]; //initializing 2d array for the board
  CreateBoard(board);
  DisplayBoard(board);
}
