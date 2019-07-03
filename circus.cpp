#include <bits/stdc++.h>
using namespace std;
int n, tmp, i, x, y, w, z, clown, acrobat;

int main() {
        cin >> n;
        vector < int > c(n, 0), a(n, 0);
        for(i = 0; i < n; i++) {
	       cin >> c[i];
	       if(c[i])
		      clown++;
        }

        for(i = 0; i < n; i++) {
	       cin >> a[i];
	       if(a[i])
		      acrobat++;
        }

        for(i = 0; i< n; i++) {
	       if(a[i] || c[i])
		      w++;
	       else if(c[i] && !a[i])
		      x++;
	       else if(!c[i] && a[i])
		      y++;
	       else
		      z++;
        }
        if(clown == acrobat) {
	       if(x != y) {
		      cout << "-1" << endl;
		      return 0;
	       }
	       else {
		      for(i = 0; i < n; i++) {
			     if(c[i] && !a[i])
				    cout << i << " ";
		      }
		      cout << endl;
		      return 0;
	       }
        }
        else if(clown < acrobat) {

	       ans += z + y;
	       if(ans < n / 2)

















