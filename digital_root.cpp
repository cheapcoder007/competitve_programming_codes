#include <bits/stdc++.h>
using namespace std;

int main() {
        long long k, x, n;
        cin >> n;
        while(n--) {
	       cin >> k >> x;
	       cout << (x + 9 * (k - 1)) << endl;
        }
        return 0;
}
