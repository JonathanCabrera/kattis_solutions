#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, w, h;
	cin >> n >> w >> h;
	double d = sqrt((w*w) + (h*h));
	for (int i = 0; i < n; i++) {
		int size;
		cin >> size;
		if (size <= w || size <= h || size <= d) {
			cout << "DA" << endl;
		} else {
			cout << "NE" << endl;
		}
	
	}
	return 0;
}
