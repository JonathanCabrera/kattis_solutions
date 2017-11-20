#include <iostream>
#include <unordered_map>
using namespace std;

int fact(int n, unordered_map<int, int>& m) {
	if (m.find(n) != m.end()) {
		return m[n];	
	} else if (n == 1 || n == 0) {
		return 1;	
	}	
	int result =  fact(n-1, m) + fact(n-2, m);
	m[n] = result;
	return result;
}


int main() {
	int n;
	cin >> n;
	unordered_map<int, int> m;
	fact(n, m);
	if (n == 1) {
		cout << "0 1" << endl;	
	} else if (n == 2) {
		cout << "1 1" << endl;
	} else if (n == 3) {
		cout << "1 2" << endl;	
	} else {
		cout << m[n-2] << " " << m[n-1]<< endl;
	}
	return 0;	
}
