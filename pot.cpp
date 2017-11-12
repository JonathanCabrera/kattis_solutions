#include <string>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int res = 0;
	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;
		int base = stoi(a.substr(0,a.length()-1));
		int exponent = a[a.length()-1] - '0';	
		res += pow(base, exponent);
	}
	cout << res << endl;

	return 0;
}
