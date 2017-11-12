#include <iostream>
#include <cmath>
using namespace std;

int main() {
	const int SIX = 6;
	int correct_peices[SIX] = {1, 1, 2, 2, 2, 8};
	int mirko_peices[SIX];
	for (int i = 0; i < SIX-1; i++) {
		cin >> mirko_peices[i];
		cout << correct_peices[i] - mirko_peices[i] << " ";
	}
	cin >> mirko_peices[SIX-1];
	cout << correct_peices[SIX-1] - mirko_peices[SIX-1] << endl;
	return 0;
}
