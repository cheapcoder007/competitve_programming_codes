#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, t, i = 1, j = 1, k, arr[1000000], count = 0, result = -1, tmp = 0;
        long long sum[100000];
        sum[0] = arr[0] = 0;
        cin >> n >> t;
        for(k = 1; k <= n; k++) {
	       cin >> arr[k];
	       tmp += arr[k];
	       sum[k] = tmp;
        }
        for(;j <= n;) {
	       if(sum[j] - sum[(i - 1)] > t) {
		      i++;
		      if(result < count)
			     result = count;
		      count--;
	       }
	       else {
		  //    cout << count << " " << j << endl;
		      count++;
		      j++;
	       }
        }
        if(result < count)
	       result = count;
        cout << result << endl;
        return 0;
}
