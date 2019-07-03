#include <bits/stdc++.h>
using namespace std;

int main() {

        long long int n, t, sum, i, yo = 1e9 + 7, result;
        cin >> t;

        for(i = 0; i < t; i++) {
	       cin >> n;
	       sum = n % yo;
	       result = (sum * sum) % yo;
	       //cout << sum << "sum" << endl;
	       cout << result << endl;
	       sum = 0;
        }

        return 0;
}
