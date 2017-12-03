#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> abc(3);
    for (int i = 0; i < 3; i++) {
        cin >> abc[i];
    }
    string order;
    cin >> order;
    sort(abc.begin(), abc.end());
    for (int i = 0; i < order.length(); i++) {
        cout << abc[order[i]-'A'] << " ";
    }
    
    return 0;
}
