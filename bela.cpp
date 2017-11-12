#include <iostream>
using namespace std;

int main() {
	int h;
	char suit;
	cin >> h >> suit;
	
	int res = 0;
		for (int j = 0; j < h*4; j++) {
			string s;
			cin >> s;
			if (s[0] == 'A') {
				res += 11;	
			} else if (s[0] == 'K') {
				res += 4;
			} else if (s[0] == 'Q') {
				res += 3;
			} else if (s[0] == 'T') {
				res += 10;
			} else if (s[0] == '8' || s[0] == '7') {
				continue;	
			} else if (s[0] == 'J') {
				if (s[1] == suit) {
					res += 20;
				} else {
					res += 2;
				}
			} else if (s[0] == '9') {
				if (s[1] == suit) {
					res += 14 ;	
				}
			}
		}	
		cout << res << endl;	
	return 0;
}
