#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <iterator>
#include <map>
using namespace std;

string get_total(vector<string> v, map<string, int> vars) {
    int total = 0;
    for (int i = 1; i < v.size() - 1; i += 2) {
        if (vars.count(v[i])) {
            if (i == 1) {
                total = vars[v[i]];
            } else if (v[i-1] == "+") {
                total += vars[v[i]];
            } else if (v[i-1] == "-") {
                total -= vars[v[i]];
            }
        } else {
            return "unknown";
        }
    }
    return to_string(total);
}

string find_word(string total, map<string, int> vars) {
    for (auto it : vars) {
        if (to_string(it.second) == total) {
            return it.first;
        }
    }
    return "unknown";
}

void print(string word, vector<string> v, map<string, int> vars) {
    for (int i = 1; i < v.size() - 1; i++) {
        cout << v[i] << " ";
    }
    cout << "= " << word << endl;
}

int main() {
    map<string, int> variables;
    vector<string> lines;
    string line;
    while(getline(cin, line)) {
        lines.push_back(line);
    }
    
    for (int i = 0; i < lines.size(); i++) {
        stringstream ss(lines[i]);
        istream_iterator<string> begin(ss);
        istream_iterator<string> end;
        vector<string> v(begin, end);
        if (v[0] == "clear") {
        	variables.erase (variables.begin(), variables.end());
		} else if (v[0] == "def") {
            variables[v[1]] = stoi(v[2]);
        } else if (v[0] == "calc") {
            string total = get_total(v, variables);
            string word = find_word(total, variables);
            print(word, v, variables);
        }
    }
}
