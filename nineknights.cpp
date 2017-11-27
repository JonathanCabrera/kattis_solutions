#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool is_inside(int x, int y) {
  if (x >= 0 && x <= 4 && y >= 0 && y <= 4) {
    return true;
  }
  return false;
}

bool is_valid(vector<string> board) {
  const vector<int> DX = {-2, -1,  1,  2, -2, -1, 1, 2};
  const vector<int> DY = {-1, -2, -2, -1,  1,  2, 2, 1};
  int k_count = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (board[i][j] == 'k') {
        k_count++;
        for (int m = 0; m < DX.size(); m++) {
          int x = i + DX[m];
          int y = j + DY[m];
          if (is_inside(x, y)) {
            if (board[x][y] == 'k') {
              return false;
            }
          }
        }  
      }
    }
  }
  return k_count == 9;
}

int main() {
  vector<string> board(5);
  for (int i = 0; i < 5; i++) {
    cin >> board[i];
  }
  cout << (is_valid(board) ? "valid" : "invalid") << endl;
  return 0;
}
