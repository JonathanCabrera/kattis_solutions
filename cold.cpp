#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int below_zero = 0;
	while (n--) {
		int k;
		cin >> k;
		if (k < 0) {
			below_zero++;
		}
		
	}
	cout << below_zero << endl;
	
	return 0;
}
