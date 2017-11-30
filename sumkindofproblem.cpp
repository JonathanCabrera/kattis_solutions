
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

typedef long long ll;

ll pos_sum(int n) {
    ll res = 0;
    for (int i = 1; i <= n; i++) {
        res += i;
    }
    return res;
}

ll odd_sum(int n) {
    ll res = 0;
    ll i = 1;
    while(n) {
        if (i % 2 != 0) {
            res += i;
            n--;
            i += 2;
        }
    }
    return res;
}

ll even_sum(int n) {
    ll res = 0;
    ll i = 2;
    while(n) {
        if (i % 2 == 0) {
            res += i;
            n--;
            i+= 2;
        }
    }
    return res;
}

int main() {
    int p;
    cin >> p;
    for (int i = 0; i < p; i++) {
        int k, n;
        cin >> k >> n;
        cout << k << " " << pos_sum(n) << " " << odd_sum(n) << " " << even_sum(n) << endl;
    }
    return 0;
}
