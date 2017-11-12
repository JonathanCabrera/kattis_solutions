#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int prev = 0;
	for (int i = 0; i < n-1; i++) {
		prev = prev + prev + 1;
	}
	int multi = prev + prev + 3;
	cout << (multi * multi) << endl;
	return 0;
}
