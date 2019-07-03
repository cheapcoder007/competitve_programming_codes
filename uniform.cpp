#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, k, t, i, j, count = 0, s = 97;

        cin >> t;

        bool decision = true;
        for(i = 0; i < t; i++) {
	       cin >> n >> k;

	       for(; decision;) {
		      for(j = 0; j < k && count < n; j++) {
			     cout << (char)s++;
			     count++;
		      }
		      s = 97;
		      if(count < n)
			     continue;
		      else 
			     decision = false;
	       }
	       cout << endl;
	       count = 0;
	       decision = true;
        }
        return 0;
}
