#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main() {
	int n = 0;
	while(true) {
		int a;
		cin >> a;
		if (a == 0)
			break;
		n++;
		cout << "SET " << n << endl;
		vector<string> c; 
		vector<string> b;
		for (int i = 0; i < a; i++) {
			string temp;
			cin >> temp;
			if (i % 2 == 0) {
				c.push_back(temp);		
			} else {
				b.push_back(temp);	
			}
		}
		for (int i = 0; i < c.size(); i++) {
			cout << c[i] << endl;
		}
		for (int i = b.size()-1; i >= 0; i--) {
			cout << b[i] << endl;	
		}
	}
}


