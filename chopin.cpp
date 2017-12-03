
#include <iostream>
#include <string>
#include <map>
#include <unordered_set>
using namespace std;




int main() {
    map<string, string> names;
    names["A#"] = "Bb";
    names["C#"] = "Db";
    names["D#"] = "Eb";
    names["F#"] = "Gb";
    names["G#"] = "Ab";
    unordered_set<string> unique;
    unique.insert("A");
    unique.insert("B");
    unique.insert("C");
    unique.insert("D");
    unique.insert("E");
    unique.insert("F");
    unique.insert("G");
    
    string note, tone;
    int cur_case = 1;
    
    while(cin >> note >> tone) {
        string result;
        
        if (unique.find(note) != unique.end()) {
            result = "UNIQUE";
        }
        for (auto it : names) {
            if (it.first == note) {
                result = it.second + " " + tone;
            } else if (it.second == note) {
                result = it.first + " " + tone;
                
            }
        }
        cout << "Case " << cur_case++ << ": " << result << endl;
    }
    return 0;
}
