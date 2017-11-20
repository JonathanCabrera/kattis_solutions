#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	cout << "Dr. Chaz ";
	int output = abs(a-b);
	string text = " piece";
	if (output != 1) {
		text += 's';
	}
	if(a < b) {
		cout << "will have " << output << text << " of chicken left over!"; 
	} else {
		cout << "needs " << output  << " more" << text << " of chicken!";	
	}
	cout << endl;
}
