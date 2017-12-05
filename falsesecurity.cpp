//
//  falsesecurity.cpp
//  
//
//  Created by Jonathan Cabrera on 12/4/17.
//

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

string encode(string text, string& code_length, map<char, string>& morse_code) {
    string res;
    for (int i = 0; i < text.length(); i++) {
        string code = morse_code[text[i]];
        code_length += code.length() + '0';
        res += code;
    }
    return res;
}

string decode(string text, string code_length, map<char, string>& morse_code) {
    string res;
    int i = 0;
    int j = 0;
    while (i < text.length()) {
        int len = code_length[j] - '0';
        string morse_letter = text.substr(i, len);
        for (auto it : morse_code) {
            if (it.second == morse_letter) {
                res += it.first;
            }
        }
        i += len;
        j++;
    }
    return res;
}

int main() {
    map<char, string> morse_code;
    morse_code['A'] = ".-";
    morse_code['B'] = "-...";
    morse_code['C'] = "-.-.";
    morse_code['D'] = "-..";
    morse_code['E'] = ".";
    morse_code['F'] = "..-.";
    morse_code['G'] = "--.";
    morse_code['H'] = "....";
    morse_code['I'] = "..";
    morse_code['J'] = ".---";
    morse_code['K'] = "-.-";
    morse_code['L'] = ".-..";
    morse_code['M'] = "--";
    morse_code['N'] = "-.";
    morse_code['O'] = "---";
    morse_code['P'] = ".--.";
    morse_code['Q'] = "--.-";
    morse_code['R'] = ".-.";
    morse_code['S'] = "...";
    morse_code['T'] = "-";
    morse_code['U'] = "..-";
    morse_code['V'] = "...-";
    morse_code['W'] = ".--";
    morse_code['X'] = "-..-";
    morse_code['Y'] = "-.--";
    morse_code['Z'] = "--..";
    morse_code['_'] = "..--";
    morse_code[','] = ".-.-";
    morse_code['.'] = "---.";
    morse_code['?'] = "----";

    string line;
    while(getline(cin, line)) {
        string code_length;
        string code = encode(line, code_length, morse_code);
        reverse(code_length.begin(), code_length.end());
        cout << decode(code, code_length, morse_code) << endl;
    }
    
    return 0;
}
