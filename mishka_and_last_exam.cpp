#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;

        cin >> n;
        int arr[n / 2], b[n / 2], i, j, min, max, tmp;
        for(i = 0; i < n / 2; i++)
	       cin >> b[i];
        j = 0,  min = 0, max = b[0];
        arr[j++] = max;

        cout << min << " ";
        for(i = 1; i < n / 2; i++) {
	       if(min + max == b[i]) {
		      cout << min << " ";
		      arr[j++] = max;
		      continue;
	       }
	       else {
		      tmp = b[i] - min;
		      if(tmp <= max) {
			     cout << min << " ";
			     max = tmp;
			     arr[j++] = max;
		      }
		      else {
			     min++;
			     i--;
		      }
        
	       }
        }
        for(i = (n / 2) - 1; i >= 0; i--)
	       cout << arr[i] << " ";
        return 0;
}
