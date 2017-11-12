#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	int count = 0;
	for (int i = 0; i < s.length(); i++) {
		int mod = i % 3;
		if (mod == 0 && s[i] == 'P') {
			count++;
		} else if (mod == 1 && s[i] == 'E') {
			count++;
		} else if (mod == 2 && s[i] == 'R') {
			count++;
		}
	}
	cout << (s.length() - count) << endl;
	return 0;
}
