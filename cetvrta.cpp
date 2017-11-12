#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
	unordered_map<int, int> a, b;
	vector<int> x(3);
	vector<int> y(3);
	for (int i = 0; i < 3; i++) {
		cin >> x[i] >> y[i];
		if (a.find(x[i]) == a.end()) {
			a[x[i]] = 1;
		} else {
			a[x[i]]++;
		}
		if (b.find(y[i]) == b.end()) {
			b[y[i]] = 1;
		} else {
			b[y[i]]++;
		}
	}
	for (int i = 0; i < x.size(); i++) {
		if (a[x[i]] == 1) {
			cout << x[i] << " "; 
		} 
	}
	for (int i = 0; i < x.size(); i++) {
		if (b[y[i]] == 1) {
			cout << y[i] << endl;
		}
	}
	return 0;
}
