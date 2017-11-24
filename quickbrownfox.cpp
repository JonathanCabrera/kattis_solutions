#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {
        string s;
        getline(cin, s);
        
        bool exists[26];
        for (int i = 0; i < 26; i++) {
            exists[i] = false;
        }
        
        for (int i = 0; i < s.length(); i++) {
            char cur = s[i];
            if (cur >= 'A' && cur <= 'Z') {
                cur += ' ';
            }
            if (cur >= 'a' && cur <= 'z') {
                int pos = cur - 'a';
                if (!exists[pos]) {
                    exists[pos] = true;
                }
            }
        }
        string res;
        for (int i = 0; i < 26; i++) {
            if(!exists[i]) {
                res += (i + 'a');
            }
        }
        if (res.length() == 0) {
            cout << "pangram" << endl;    
        } else {
            cout << "missing " << res << endl;
        }
    }
}
