
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    bool first = true;
    while(true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        if(!first) {
            cout << endl;
        }
        first = false;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n*2; i++) {
            if (i < n) {
                cin >> a[i];
            } else {
                cin >> b[i%n];
            }
        }
        vector<int> a_sorted = a;
        vector<int> b_sorted = b;
        sort(a_sorted.begin(), a_sorted.end());
        sort(b_sorted.begin(), b_sorted.end());
        map<int, int> m;
        
        for (int i = 0;  i < n; i++) {
            m[a_sorted[i]] = b_sorted[i];
        }
        for (int i = 0; i < n; i++) {
            cout << m[a[i]] << endl;
        }
        
    }
    return 0;
}
