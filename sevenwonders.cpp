#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	int total = 0;
	int t = 0;
	int c = 0;
	int g = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'T') {
			t++;
		}	
		if (s[i] == 'C') {
			c++;
		}	
		if (s[i] == 'G') {
			g++;
		}	
	}
	total += (t*t) + (c*c) + (g*g);
	int small = min(min(t, c), g) * 7;
	cout << total + small << endl;
	return 0;	
}
