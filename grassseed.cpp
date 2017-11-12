#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double cost;
	int lawns;
	cin >> cost >> lawns;
	double total = 0;
	for (int i = 0; i < lawns; i++) {
		double l, w;
		cin >> l >> w;
		total += (l * w);
	}
	cout << fixed << setprecision(7);
	cout << (double)(total * cost) << endl;
	
}




