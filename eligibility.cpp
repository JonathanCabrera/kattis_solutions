#include <iostream>
#include <string>
using namespace std;

bool rule_1(string start) {
    return stoi(start.substr(0,4)) >= 2010;
    
}

bool rule_2(string birthdate) {
    return stoi(birthdate.substr(0,4)) >= 1991;
}

bool rule_3(int courses) {
    return (courses < 41);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string name, start, birthdate;
        int courses;
        cin >> name >> start >> birthdate >> courses;
        
        cout << name << " ";
        string result;
        if (rule_1(start) || rule_2(birthdate)) {
            result = "eligible";
        } else if (!rule_3(courses)) {
            result = "ineligible";
        } else {
            result = "coach petitions";
        }
        
        cout << result << endl;
    }
    return 0;
}
