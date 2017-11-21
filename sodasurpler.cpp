#include <iostream>
using namespace std;

int solve(int e, int f, int c) {
	int drink_count = 0;
	e += f;
	while (e >= c) {
		e -= c;	
		e++;
		drink_count++;
	}	
	return drink_count;
}

int main() {
	int e, f, c;
	cin >> e >> f >> c;
	cout << solve(e, f, c) << endl;
}
