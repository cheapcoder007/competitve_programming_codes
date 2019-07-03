#include <bits/stdc++.h>
using namespace std;

int main() {
        long long l, r, d, q, val;
        cin >> q;
        while(q--) {
	       cin >> l >> r >> d;
	       while(1) {

		      if(d < l || d > r) {
			     cout << d << endl;
			     break;
		      }
		      else {
			     val = r + d - (r % d); 
			     cout << val << endl;
			     break;
		      }
	       }
        }
        return 0;
}
