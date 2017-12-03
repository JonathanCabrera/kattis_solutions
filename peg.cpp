#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int SIZE = 7;

const vector<int> DX = {-1, 1, 0, 0};
const vector<int> DY = { 0, 0,-1, 1};

bool is_inside(int x, int y) {
    return x >= 0 && x < SIZE && y >= 0 && y < SIZE;
}

int find_possible(vector<string> grid) {
    int r = grid.size();
    int c = grid[0].size();
    
    int result = 0;
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (grid[i][j] == 'o') {
                for (int k = 0; k < DX.size(); k++) {
                    int x = i + DX[k];
                    int y = j + DY[k];
                    int x2 = i + DX[k] * 2;
                    int y2 = j + DY[k] * 2;
                    
                    if (is_inside(x, y) && is_inside(x2, y2)) {
                        if (grid[x][y] == 'o' && grid[x2][y2] == '.') {
                            result++;
                        }
                    }
                }
            } else {
                continue;
            }
        }
    }
    return result;
}

int main() {
    vector<string> grid(SIZE);
    for (int i = 0; i < SIZE; i++) {
        getline(cin, grid[i]);
    }
    cout << find_possible(grid) << endl;
    
    return 0;
}
