#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	int level = s.length();
	int x = 0;
	int y = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '1') {
			x++;
		} else if (s[i] == '2') {
			y++;
		} else if (s[i] == '3') {
			x++;
			y++;
		}
	}
	cout << level << " " << x*level << " " << y*level << endl;	
	return 0;	
}
