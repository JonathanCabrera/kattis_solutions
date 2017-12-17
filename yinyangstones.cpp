#include <iostream>
#include <string>
using namespace std;

int count(string s, char t) {
	int total = 0;
	for (char c : s) {
		if (c == t) {
			total++;
		}	
	}
	return total;
}



int main() {
	string s;
	cin >> s;
	int l = s.length();
	if (l == 1) {
		cout << 0;
	} else if (l % 2 == 0 && count(s, 'B') == count(s, 'W')) {
		cout << 1;
	} else {
		cout << 0;
	}
	cout << endl;


	return 0;	
}
