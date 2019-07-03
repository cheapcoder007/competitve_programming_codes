#include <bits/stdc++.h>
using namespace std;
int n, len = 1, maxlen, i, j, maxi, mini, maximum, minimum;

int main() {
        cin >> n;
        vector < int > vec(n);
        for(i = 0; i < n; i++) 
	       cin >> vec[i];
        mini = maxi = vec[0];
        i = 0;
        j = i + 1;
        for(;i < n - 1 && j < n;) {
	       if(vec[j] > maxi)
		      maxi = vec[j];
	       if(vec[j]  < mini)
		      mini = vec[j];
	       if(maxi - mini > 1) {
		      minimum = INT_MAX;
		      maximum = INT_MIN;
		      if(vec[i] == mini) {
			     for(int k = i + 1; k <= j; k++) {
				    if(vec[k] < minimum)
					   minimum = vec[k];
			     }
			     mini = minimum;
		      }
		      else if(vec[i] == maxi) {
			     for(int k = i + 1; k <= j; k++) {
				    if(vec[k] > minimum)
					   maximum= vec[k];
			     }
			     maxi = maximum;
		      }

		      i++;
		      if(len > maxlen)
			     maxlen = len;
		      len--;
	       }
	       else {
		      j++;
		      len++;
	       }
        }
        if(len > maxlen)
	       maxlen = len;
        cout << maxlen << endl;
        return 0;
}
