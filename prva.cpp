
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> unique(vector<string> grid) {
    vector<string> result;
    for (int i = 0; i < grid.size(); i++) {
        string temp;
        for (int j = 0; j < grid[i].length(); j++) {
            if (grid[i][j] != '#') {
                temp += grid[i][j];
            } else {
                if (temp.length() >= 2) {
                    result.push_back(temp);
                }
                temp = "";
            }
        }
        if (temp.length() >= 2) {
            result.push_back(temp);
        }
    }
    for (int j = 0; j < grid[0].length(); j++) {
        string temp;
        for (int i = 0; i < grid.size(); i++) {
            if (grid[i][j] != '#') {
                temp += grid[i][j];
            } else {
                if (temp.length() >= 2) {
                    result.push_back(temp);
                }
                temp = "";
            }
        }
        if (temp.length() >= 2) {
            result.push_back(temp);
        }
    }
    return result;
}



int main() {
    int r, c;
    cin >> r >> c;
    vector<string> grid(r);
    for (int i = 0; i < r; i++) {
        cin >> grid[i];
    }
    vector<string> v = unique(grid);
    
    // for (auto s : v) {
    //   cout << s << endl;
    // }
    sort(v.begin(), v.end());
    cout << v[0] << endl;
    return 0;
}
