#include <bits/stdc++.h>
using namespace std;


int main() {
        int n, k, ans,i;
        cin >> n >> k;
        ans = 3 * n;
        if(n == 2) {
	       cout << ans << endl;
	       return 0;
        }
	       
        for(i = 1; i <= n / 2 + 1; i++) {
		      if(i == k || n - i + 1 == k) {
			     cout << ans << endl;
			     return 0;
		      }
		      ans++;
	       }
}
