#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	if (x == 0 && y == 0) {
		cout << "Not a moose" << endl;
		
	}
	else if (x == y) {
		cout << "Even ";	
		cout << (2 * max(x, y)) << endl;	
	} else {
		cout << "Odd ";
		cout << (2 * max(x, y)) << endl;
	}
	return 0;
}
