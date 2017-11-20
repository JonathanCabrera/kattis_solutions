#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int amount = 0;
		while(n > 0) {
			n -= 400;
			amount++;
		}
		cout << amount << endl;
	}
	return 0;
}
