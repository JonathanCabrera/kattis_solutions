#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int find_index(string s, char c) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == c) {
			return i;
		}
	}
}

double distance(string aphorism) {
	double time_taken = aphorism.length();
	double piece_len = (60 * M_PI) / 28;
	string points = "ABCDEFGHIJKLMNOPQRSTUVWXYZ '";
	for (int i = 0; i < aphorism.length() - 1; i++) {
		int a = abs(find_index(points, aphorism[i]) - find_index(points, aphorism[i+1]));
		int b = 28 - a;
		time_taken  += min(a, b) * (piece_len / 15);
	}
	return time_taken;
}

int main() {
	int n;
	cin >> n;
	cin.ignore();
	while(n--) {
		string temp;
		getline(cin, temp);
		cout << fixed << setprecision(10);
		cout << distance(temp) << endl;
	}
}
