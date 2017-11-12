#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int h, a;
	cin >> h >> a;
	cout << (int)(h/(sin(a*M_PI/180))) + 1 << endl;
	return 0;
}
