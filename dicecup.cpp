#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	vector<int> outcomes(a*b+1);
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= b; j++) {
			outcomes[i+j]++; 
		}
	}
	int max_amount = 0;
	for (int i = 0; i < outcomes.size(); i++) {
		if (outcomes[i] > max_amount) {
			max_amount = outcomes[i];
		}
	}
	for (int i = 0; i < outcomes.size(); i++) {
		if (outcomes[i] == max_amount) {
			cout << i << endl;
		}
	}
	return 0;
}
