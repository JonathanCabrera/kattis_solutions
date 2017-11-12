#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int losses = 0;
	for (int i = 0; i < t; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < s.length()-1; j++) {
			if (s[j] == 'C') {
				if (s[j+1] == 'D') {
					losses++;		
				}
			}
			
		}

	}
	cout << (t-losses) << endl;




	return 0;
}
