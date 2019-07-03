#include <bits/stdc++.h>
using namespace std;

int main () {
        int n, t, arr[100000], count = 0, max = INT_MIN, tmp = 0, i, j;
        cin >> n >> t;
        for(i = 0; i < n; i++)
	       cin >> arr[i];
        for(i = 0; i < n; i++) {
	       for(j = i; j < n; j++) {
		      if(tmp + arr[j] <= t) {
			     tmp += arr[j];
			     count++;
		      }
		      else
			     break;
	       }
	       if(max <  count)
		      max = count;
	       count = 0;
	       tmp = 0;
        }
        cout << max << endl;
        return 0;
}
