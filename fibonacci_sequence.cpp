#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, max = 2, len = 2, a[1000000], i;
        cin >> n;
        if(n == 1) {
	       cout << "1" << endl;
	       return 0;
        }
        for(i = 0; i < n; i++)
	       cin >> a[i];
        if(n == 2) {
	       cout << "2" << endl;
	       return 0;
        }

        len = 2;
        for(i = 2; i < n; i++) {
	       if(a[i] == a[i -1] + a[i - 2]) {
		      len++;
//		      cout << i << " ";
	       }
	       else {
		      if(max < len)
			     max = len;
		      len = 2;
		//	     cout << i << " " << len << " " << max << endl;
	       }
        }
        if(max < len)
	       max = len;
        cout << max  << endl;
        return 0;
}
