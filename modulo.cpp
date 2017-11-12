#include <iostream>
#include <unordered_set>
using namespace std;

int mod(int n) {
	return n % 42;
}

int main() {	
	unordered_set<int> set;
	for (int i = 0; i < 10; i++) { 
		int n;
		cin >> n;
		set.insert(mod(n));
	}
	cout << set.size() << endl;
	return 0;
}
