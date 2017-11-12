#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
		int x;
		cin >> x;
		cout << x;
		cout << ((x % 2 == 0) ? " is even" : " is odd") << endl; 
	}
	return 0;
}
