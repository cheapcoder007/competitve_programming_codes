#include <bits/stdc++.h>
using namespace std;


int main() {
        int q, n;
        string str;
        cin >> q;
        while(q--) {
	       cin >> n >> str;
	       if(n == 2 && str[0] >= str[1]) {
		      cout << "NO" << endl;
		      continue;
	       }
	       else
		      cout << "YES" << endl << "2" << endl << str[0] << " " << str.substr(1, n - 1) << endl;
        }
        return 0;
}
