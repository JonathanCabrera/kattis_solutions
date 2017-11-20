#include <vector>
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int gs;
		cin >> gs;
		vector<int> gnomes(gs);
		for(int j = 0; j < gs; j++) {
			cin >> gnomes[j];
		}
		int pos = 1;
		for (int i = gnomes[0]; i <= gnomes.back(); i++) {
			if (i != gnomes[pos-1]) {
				cout << pos << endl;
				break;
			}
			pos++;
		}

	}	
	return 0;	
}
