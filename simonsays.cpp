#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	cin >> T;
	cin.ignore();
	for (int i = 0; i < T; i++) {
		string s;
		getline(cin, s);
		string w = "Simon says ";
		if (s.length() < w.length()) {
			continue;	
		}
		string check = s.substr(0, w.length());
		if (check == w) {
			cout << s.substr(w.length()) << endl;	
		}
	}
	
	return 0;	
}
