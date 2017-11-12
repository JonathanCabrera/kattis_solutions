#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

string ctb(int n) {
	string res;
	while(n) {
		res += ((n % 2) + '0');
		n /= 2;
	}
	return res;
}

int btd(string s) {
	int res = 0;
	int base = 1;
	for (int i = s.length() - 1; i >= 0; i--) {
		res += base * (s[i] - '0');
		base *= 2;
	}
	return res;
}

int main() {
	int n;
	cin >> n;
	cout << btd(ctb(n)) << endl;
	
	return 0;
}

