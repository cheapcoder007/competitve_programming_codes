#include <bits/stdc++.h>
using namespace std;

int n, x1, x2, y2, a, b, x, y, i, r1, r2, Y1, r1prev, r2prev, tmp, flag, maximum;
int cal();

int main() {
        cin >> n >> x1 >> Y1 >> x2 >> y2;
        tmp = n;
        vector < vector < int > > vec(n, vector < int > (2));
        while(n--) {
	       cin >> x >> y;
	       vec[i][0] = x;
	       vec[i++][1] = y;
        
        }
        for(i = 0; i < tmp; i++) {
	       a = x1;
	       x = vec[i][0];
	       y = vec[i][1];
	       b = Y1;
	       r1 = cal();
	       a = x2;
	       b = y2;
	       r2 = cal();
	       cout << r1 << " " << r2 << " " << i << endl;
	       if(r1 > r2) {
		      if(r2  >  r2prev)
			     r2prev = r2;
	       }
	       else
		      if(r1 > r1prev)
			     r1prev = r1;
        }
        cout << r1prev << " " << r2prev << endl;
        if(r1prev > r2prev) {
	       r2prev = 0;
	       flag = 1;
        }
        else
	       r1prev = 0;
        if(flag) {
        for(i = 0; i < tmp; i++) {
	       a = x1;
	       x = vec[i][0];
	       y = vec[i][1];
	       b = Y1;
	       r1 = cal();
	       a = x2;
	       b = y2;
	       r2 = cal();
	       if(r1 > r1prev) {
		     if(r2 >= r2prev)
			    r2prev = r2;
		      }
	       }
        }
        else {
	       for(i = 0; i < tmp; i++) {
		       a = x1;
		       x = vec[i][0];
		       y = vec[i][1];
		       b = Y1;
		       r1 = cal();
		       a = x2;
		       b = y2;
		       r2 = cal();
		      if(r2 > r2prev) {
			     if(r1 >= r1prev)
				    r1prev = r1;
		      }
	       }
        }
        cout << r1prev + r2prev << endl;;
        return 0;
}

int cal() {
        return (a - x) * (a - x) + (b - y) * ( b - y);
}
