#include <iostream>
#include <string>
#include <map>


using namespace std;

int main() {
    string s;
    cin >> s;
    map<char, int> m;
    
    for (int i = 0; i < s.length(); i++) {
        if (m.count(s[i])) {
            m[s[i]]++;
        } else {
            m[s[i]] = 1;
        }
    }
    int odd_count = 0;
    for (auto s : m) {
        if (s.second % 2 != 0) {
            odd_count++;
        }
    }
    if (odd_count == 0) {
        cout << odd_count << endl;
    } else {
        cout << odd_count - 1 << endl;
    }
}
