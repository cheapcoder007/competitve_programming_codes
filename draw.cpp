#include <bits/stdc++.h>
using namespace std;

int main() {
        long long unsigned n, i, ans = 1, a, b, prevmax = 0, col = 0, c = 1;
        cin >> n;
        if(n == 1) {
	       cin >> a >> b;
	       ans += min(a, b);
	       cout << ans << endl;
	       return 0;
        }
        for(i = 0; i < n; i++) {
	       cin >> a >> b;
	       if(a == b)
		      c = 0;
	       else c = 1;
	       if(i == 0 && a != 0 && b != 0)  {
		      ans += min(a, b);
	       }
	       if(i != 0) {
		      if(a == 0 || b == 0) {
		      }
		      else if((col == 1 && (b > a || (min(a, b) >= prevmax))) || (col == 2 && (a > b ||(min(a, b) >= prevmax))) || col == 3) {
			     //if(prevmax != min(a, b) && (col != 3)) {
			//	     cout << prevmax << " " << i << " " << min(a, b) << " " << ans << endl;
				     ans +=  c + abs(min(a, b) - prevmax);
			//	     cout << prevmax << " " << i << " " << min(a, b) << " " << ans << endl;
			     //}
		      }
	       }
	       if(a > b)
		      col = 1;
	       else
		      col = 2;
	       if(a == b)
		      col = 3;
	       prevmax = max(a, b);
        }
        cout << ans << endl;
        return 0;
}
