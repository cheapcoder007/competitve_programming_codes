#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, x, y, len = 0, a, i;
        cin >> n >> x >> y;
        if(x > y) {
	       cout << n << endl;
	       return 0;
        }
        for(i = 0; i < n; i++) {
	       cin >> a;
	       if(a <= x) 
		      len++;
        }
	       
        if(!(len % 2))
	       cout << len / 2 << endl;
        else 
	       cout << ((len / 2) + 1) << endl;
        return 0;
}
