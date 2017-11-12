#include <vector>
#include <iostream>
using namespace std;

int main() {
	vector<int> x(5);
	for (int i = 0; i < 5; i++) {
		x[i] = 0;
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			int n;
			cin >> n;
			x[i] += n;
		}
	}
	int max = x[0];
	int max_i = 0;
	for (int i = 0; i < 5; i++) {
		if ( x[i] > max) {
			max = x[i];
			max_i = i;
		}
	}
	cout << max_i + 1 << " " << max << endl;
	return 0;
}
