#include <bits/stdc++.h>
using namespace std;
int main() {
        int n, a[3], result = 0, tmp, i = 0;
        cin >> n >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        if(!(n % a[0])) {
	       cout << n / a[0] << endl;
	       return 0;
        }
        result = n / a[0] + 1;
        while(1) {
	       tmp = result * a[i];
	       if(tmp <= n) {
		      if(tmp + a[1] == n || tmp + a[2] == n || tmp + a[1] + a[2] == n) {
			     if(tmp + a[1] + a[2] == n)
				    result += 2;
			     else 
				    result++;
			     cout << result << endl;
			     return 0;
		      }
	       }
	       result--;
	       if(result < 0) {
		      i++;
		      result = n / a[i] + 1;
	       }
	       cout << i << " ";
        }
        return 0;
}
