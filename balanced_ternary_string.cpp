#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, l1 = 0, l2 = 0, l0 = 0, L1 = 0, L2 = 0, L0 = 0, l = -1, i;
        cin >> n;
        string str;
        for(i = 0; i < n; i++) {
	       cin >> str[i]; 
	       switch(str[i]) {
		      case '0':
			     L0++;
			     break;

		      case '1':
			     L1++;
			     break;
		      case '2':
			     L2++;
			     break;
	       }
        }
        for(i = 0; i < n; i++) {
	       switch(str[i]) {
		      case '0':
			     l0++;
			     if(l0 > n / 3) {
				    l0--;
				    l = min(L1, L2);
				    if(L1 == l) {
					   cout << "1";
					   L1++;
				    }
				    else {
					   cout << "2";
					   L2++;
				    }
			     }
			     else 
				    cout << "0";
			     break;
		      case '1':
			     l1++;
			     if(l1 > n / 3) {
				    l1--;
				    l = min(L0, L2);
				    if(L0 == l) {
					   cout << "0";
					   L1++;
				    }
				    else {
					   cout << "2";
					   L2++;
				    }
			     }
			     else 
				    cout << "1";
			     break;
		      case '2':
			     l2++;
			     if(l2 >  n / 3) {
				    l2--;
				    l = min(L1, L0);
				    if(L1 == l) {
					   cout << "1";
					   L1++;
				    }
				    else {
					   cout << "0";
					   L0++;
				    }
			     }
			     cout << "2";
			     break;
	       }
        }
        cout << endl;
        return 0;
}
