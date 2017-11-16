#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int compute_sum(string num) {
	int res = 0;
	for (int i = 0; i < num.length(); i++) {
		res += num[i] - '0';	
	}
	return res;
}



int main() {
	int l, d, x;
	cin >> l >> d >> x;
	
	int n = d;
	int m = l;
	for (int i = l; i <= d; i++) {
			string num = to_string(i);
			int sum = compute_sum(num);
			if (sum == x) {
				n = min(n, i);
				m = max(m, i);
			}
	}
	cout << n << endl;
	cout << m << endl;
	return 0;
}
