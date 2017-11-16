#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	string res;
	char last;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != last) {
			res += s[i];
			last = s[i];
		} 	
	}
	cout << res << endl;

	return 0;
}
