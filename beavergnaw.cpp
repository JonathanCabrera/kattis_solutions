#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	while (true) {
		int D;
		long long v;
		cin >> D >> v;
	if (D == 0)  {
		break;
	}
	double d3 = D * D * D - 6*v/M_PI;
	double d = pow(d3, 1/3.0);
	cout << fixed << setprecision(8);
	cout << d << endl;
	}
}
