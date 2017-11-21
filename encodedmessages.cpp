#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string solve(string message) {
	int side_length = sqrt(message.length());
	int j = side_length - 1;
	int temp = j;
	string res;

	for (int i = 0; i < message.length(); i++) {
		res += message[j];
		j += side_length;
		if (j > message.length()) {
			temp--;
			j = temp;
		}
	}
	return res;
}

int main() {
	int T;
	cin >> T;
	for (int t = 0; t < T; t++) {
		string s;
		cin >> s;
		cout << solve(s) << endl;
	}
	return 0;
}
