#include <iostream>
#include <algorithm>
using namespace std ;
int main() {
	char c;
	int lowval = 0, hival = 0;
	int lowpos = -1, hipos = -1;
	int pos = 0, curval = 0;
	while (cin >> c) {
    	if (c == 'R') {
			curval++;
			if (curval > hival) {
				hival = curval;
				hipos = pos;
			}
			pos++;
		} else if (c == 'B') {
			curval-- ;
			if (curval < lowval) {
				lowval = curval;
				lowpos = pos;
			}
			pos++;
		}
	}
	if (lowpos > hipos) {
		swap(lowpos, hipos);
	}
	cout << (lowpos+2) << " " << (hipos+1) << endl;
	return 0;
}
						
