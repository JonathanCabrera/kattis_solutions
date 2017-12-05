#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        cout << "Case #" << i + 1 << ": ";
        int n;
        cin >> n;
        vector<int> red;
        vector<int> blue;
        
        for (int j = 0 ; j < n; j++) {
            string temp;
            cin >> temp;
            int back = temp.length() - 1;
            if (temp[back] == 'R') {
                red.push_back(stoi(temp.substr(0, back)));
            } else if (temp[back] == 'B') {
                blue.push_back(stoi(temp.substr(0, back)));
            }
        }
        sort(red.rbegin(), red.rend());
        sort(blue.rbegin(), blue.rend());
        
        int total = 0;
        if (blue.size() + red.size() > 1) {
            for (int j = 0; j < min(red.size(), blue.size()); j++) {
                total += red[j] + blue[j] - 2;
            }
        }
        cout << total << endl;
    }
    return 0;
}

