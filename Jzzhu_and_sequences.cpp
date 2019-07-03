#include <bits/stdc++.h>
using namespace std;

int main() {
        long long x, y, n, next, i, tmp;
        cin >> x >> y >> n;
        tmp = n % 6;
        if(!tmp)
	       tmp += 6;
        if(tmp == 2)
	       next = y;
        else if(tmp == 1)
	       next = x;
        for(i = 3; i <= tmp; i++) {
	       next = y - x;
	       x = y;
	       y = next;
        }

        if(next >= 0)
	       cout << next % (1000000007) << endl;
        else  {
	       while(next < 0)
		      next += 1000000007;
	       cout << (next)  % 1000000007 << endl;
        }
        return 0;
}
