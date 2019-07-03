#include <bits/stdc++.h>
using namespace std;

int main() {

        unsigned long long sum = 0, tmp;
        int n;
        cin >> n;
        vector < int > vec;
        for(int i = 0; i < n; i++) {
	       cin >> tmp;
	       vec.push_back(tmp);
        }
        sort(vec.begin(), vec.end());
        for(int i = 0; i < n / 2; i++) {
	       tmp = vec[i] + vec[n - i - 1];
	       sum += tmp * tmp;
        }
        cout << sum << endl;
        return 0;
}
