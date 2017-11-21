#include <string>
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	cin.ignore();
	for (int i = 0; i < T; i++) {
		string s;
		getline(cin, s);
		string text = "simon says";
		if (s.substr(0,text.length()) == text) {
			cout << s.substr(text.length()+1, s.length()) << endl;
		} else {
			cout << endl;
		}
	}
	
	
}
