#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, maximum = 0, i, j, ans, len, k;
        cin >> n;
        vector < int > vec(n, 0);
        for(i = 0; i < n; i++)
	       cin >> vec[i];
        for(i = 0;i < n;) {
	       if(vec[i] == 1) {
		      for(j = i; vec[j] != 2 && j < n;j++);
		      len = j - i;
		      for(k = j; vec[k] != 1 && k < n; k++);
		      ans = min(len, k - j);
		      maximum = max(ans, maximum);
		      i = k;
	       }
	       else
		      i++;
        }

        for(i = 0;i < n;) {
	       if(vec[i] == 2) {
		      for(j = i; vec[j] != 1 && j < n;j++);
		      len = j - i;
		      for(k = j; vec[k] != 2 && k < n; k++);
		      ans = min(len, k - j);
		      maximum = max(ans, maximum);
		      i = k;
	       }
	       else
		      i++;
        }
        cout << maximum * 2 << endl;
        return 0;
}
