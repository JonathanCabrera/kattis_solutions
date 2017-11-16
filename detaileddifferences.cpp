#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string a, b;
		cin >> a >> b;
		string res;
		for (int i = 0; i < a.length(); i++) {
			if (a[i] != b[i]) {
				res += '*';
			} else {
				res += '.';
			}
		}
		cout << a << endl;
		cout << b << endl;
		cout << res << endl;
	}


	
	return 0;
}
