#include <bits/stdc++.h>
using namespace std;

int main() {
        long long q, l1, r1, l2, r2;
        cin >> q;
        while(q--) {
      
	       cin >> l1 >> r1 >> l2 >> r2;
	       if(r1 < l2 || r2 < l2)
		      cout << l1 << " " << l2 << endl;
	       else if(l2 < l1)
		      cout << l1 << " " << l2 << endl;
	       else
		      cout << l1 << " " << l2 + 1 << endl;
        }
        return 0;
}
