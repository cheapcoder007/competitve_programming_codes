#include <bits/stdc++.h>
using namespace std;

int main() {

        int n, i, j, k = 1, l;
        bool val = false;
        cin >> n;
        vector < int > arr(n, 0), frequency(n + 1, 0);

        for(i = 0; i < n; i++) {
	       cin >> arr[i];
	       frequency[n - arr[i]]++;
        }

        l = arr[0];
        for(i = 0; i < n; i++) {
	       if(l != arr[i]) {
		      val = true;
		      break;
	       }
        }
        if(!val) {
        
	       if(!l) {
		      cout << "Possible" << endl;
		      for(i = 0; i < n; i++)
			     cout << "1 ";
		      cout << endl;
		      return 0;
        }
        }

        if(!val) {
	       if(n % 2 != 0) {
		      cout << "Impossible" << endl;
		      return 0;
	       }
	       else {
		      if(l != n / 2) {
			     cout << "Impossible" << endl;
			     return 0;
		      }
		      cout << "Possible" << endl;

		      for(i = 0; i < n; i++) {
			     if(i == n / 2)
				    k++;
			     cout << k << " ";
		      }
		      cout << endl;
		      return 0;
	       }
        }
        
        for(i = 0; i < n + 1; i++) {
	       if(frequency[i]) {
		      if(frequency[i] != i) {
			     cout << "Impossible" << endl;
			     return 0;
		      }
	       }
        }

        cout << "Possible" << endl;

        for(i = 0; i < n + 1; i++) {
	       if(frequency[i]) {
		      for(j = i; j; j--)
			     cout << k << " ";
		      k++;
	       }
        }
        cout << endl;

        return 0;
}
