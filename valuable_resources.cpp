#include <bits/stdc++.h>
using namespace std;

int main() {
        long long i = 0, n, xmax = INT_MIN, ymax = INT_MIN, xmin = INT_MAX, ymin = INT_MAX, ans, x, y;
        cin >> n;
        while(i < n) {
	       cin >> x >> y;
	       if(xmax < x)
		      xmax = x;
	       if(xmin > x)
		      xmin = x;
	       if(ymax < y)
		      ymax = y;
	       if(ymin > y)
		      ymin = y;
	       i++;
        }
//        cout << xmin << " " << xmax << " " << ymax << " " << ymin << endl;
        ans = max(abs(xmax - xmin), abs(ymax - ymin));
        cout << ans * ans << endl;
        return 0;
}
