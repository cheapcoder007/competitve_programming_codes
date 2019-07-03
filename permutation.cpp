#include <bits/stdc++.h>
using namespace std;

int main() {
        vector < int > vec(5001, 0);
        int n, i = 0, tmp, ans = 0;;
        cin >> n;
        while(i < n) {
	       cin >> tmp;
	       if(tmp > n)
		      ans++;
	       vec[tmp]++;
	       i++;
        }

        for(i = 1; i <= n; i++) {
	       if(vec[i]) {
		      ans += vec[i] - 1;
		      vec[i] = 1;
	       }
        }
        cout << ans << endl;
        return 0;
}
