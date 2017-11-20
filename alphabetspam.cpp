#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void print(int c, int len) {
	long double res = c/(double)len;
	cout << fixed << setprecision(8) << endl;
	cout << res << endl;
}

int main() {
	string s;
	cin >> s;
	int ws = 0;
	int lc = 0;
	int uc = 0;
	int sc = 0;
	
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '_') {
			ws++;
		} else if (s[i] >= 'a' && s[i] <= 'z') {
			lc++;
		} else if (s[i] >= 'A' && s[i] <= 'Z') {
			uc++;
		} else {
			sc++;
		}
	}
	int l = s.length();
	print(ws, l);
	print(lc, l);
	print(uc, l);
	print(sc, l);
	
}
