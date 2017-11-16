#include <string>
#include <iostream>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	string res;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
			res += s[i];
			i += 2;
		} else {
			res += s[i];	
		}
	}
	cout << res << endl;
	return 0;	
}
