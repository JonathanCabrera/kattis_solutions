#include <iostream>
using namespace std;

int main() {
	int bats;
	cin >> bats;
	int total = 0;
	int success = 0;
	for (int i = 0; i < bats; i++) {
		int n;
		cin >> n;
		if (n != -1) {
			success++;
			total += n;
		}
	}
	cout << ((float)total / (float)(success)) << endl;

	return 0;
}
