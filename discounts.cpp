#include <bits/stdc++.h>
using namespace std;

int main() {
        long long n, m, sum = 0, ans, tmp, i;
        cin >> n;
        vector < long long > vec(n, 0);
        for(i = 0; i < n; i++)
	       cin >> vec[i];
        sort(vec.begin(), vec.end());
        for(i = 0; i < n; i++)
	       sum += vec[i];
        cin >> m;
        for(i = 0; i < m; i++) {
	       cin >> tmp;
	       ans = sum - vec[n - tmp];
	       cout << ans << endl;
        }
        return 0;
}
