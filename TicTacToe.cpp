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


 void GetPlayerChoice(int location[2]){
  std::string row, col;

  std::cout << "Enter a row: " << '\n';
  std::cin >> row;
  int int_row = stoi(row);
  location[0] = int_row;
  std::cout << "Enter a column: " << '\n';
  std::cin >> col;
  int int_col = stoi(col);
  location[1] = int_col;
}

int main(){
  int player_number = 1;
  char board[3][3]; //initializing 2d array for the board
  CreateBoard(board);
  DisplayBoard(board);
  // int location[2] = {ptr[0], ptr[1]};
  int location[2];
  for (int i =  0; i < 9; i++) {
    player_number++;
    if (player_number % 2 == 0) {
      std::cout << "Player 2 Turn" << '\n';
      player_number = 2;
      char marker_one = 'X';
      GetPlayerChoice(location);
      PlaceMaker(location, marker_one, board );
    }
    else{
      std::cout << "Player 1 Turn" << '\n';
      player_number = 1;
      char marker_two = 'O';
      GetPlayerChoice(location);
      PlaceMaker(location, marker_two, board );
    }
    DisplayBoard(board);
  }
}
