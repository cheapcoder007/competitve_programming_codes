#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, i = -1, ans = 1, tmp, value; 
        cin >> n;
        vector < int > vec(n, -1);
        
        while(n--) {

	       i++;
	       cin >> tmp;
	       if(vec[tmp] == -1)
		      vec[tmp] = i;
	       else {
		      value = i - vec[tmp] + 1;
		      ans = max(value, ans);
	       }
        }
        cout << ans << endl;
        return 0;
}
