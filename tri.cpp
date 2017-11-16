#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	char e = '=';
	if (a + b == c) {
		cout << a << "+" << b << e << c;		
	} else if (a - b == c) {
		cout << a << "-" << b << e << c;
	} else if (a * b == c) {		
		cout << a << "*" << b << e << c;
	} else if (a / b == c) {
		cout << a << "/" << b << e << c;
	} else if (a == b - c) {
		cout << a << e  << b << "-" << c;
	} else if (a == b + c) {
		cout << a << e << b << "+" << c;
	} else if (a == b * c) {
		cout << a << e << b << "*" << c;
	} else if (a == b / c) {
		cout << a << e << b << "/" << c;
	}
	cout << endl;
	return 0;	
}
