#include <bits/stdc++.h>
using namespace std;


int main() {
        int n, t, count = 0, i, j, k, l, m, s = 97;
        cin >> t;

        for(i = 0; i < t; i++) {
	       cin >> n >> k;
	       if(n == k) {
		      for(l = 0; l < k; l++)
			     cout << (char)s++;
		      cout << endl;
		      s = 97;
		      continue;
	       }

	       for(l = 1; l * k <= n; l++) {
	       }

	       l--;
	       for(j = 0; j < k; j++) {
		      for(m = 0; m < l; m++) {
			     cout << (char)s;
			     count++;
		      }
		      s++;
	       }
	       s = 97;
	       if(count != n) {
	       if(n - count > 1)
		      for(i = 0; i < n - count; i++)
			     cout << (char)s++;
	       else
		      cout << (char)s;
	       }
	       count = 0;
	       cout << endl;
	       s = 97;
        }
        return 0;
}
		      

		      
