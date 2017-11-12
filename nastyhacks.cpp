#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
		int r, e, c;
		cin >> r >> e >> c;
		int p = e - c;
		if (p > r) {
			cout << "advertise";
		} else if (p < r) {
			cout << "do not advertise";
		} else if (p == r) {
			cout << "does not matter";
		}
		cout << endl;
	}
	return 0;
}
