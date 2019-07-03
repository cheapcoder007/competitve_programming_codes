#include <bits/stdc++.h>
using namespace std;

int main() {
        long long unsigned n, i, m, l, r, tmp, type;
        vector < long long unsigned > sum, vec;
        cin >> n;
        for(i = 0; i < n; i++) {
	       cin >> tmp;
	       vec.push_back(tmp);
        }
        cin >> m;
        sum.push_back(vec[0]);

       
	        


        for(i = 1; i < n; i++) {
	       tmp = vec[i] + sum[i - 1];
	       sum.push_back(tmp);
        }

        
        sort(vec.begin(), vec.end());
        
        for(i = 1; i < n; i++)
	       vec[i] = vec[i] + vec[i - 1];



        
        
        
        for(i = 0; i < m; i++) {

       cin >> type >> l >> r;
       if(type == 1) {
	      if(l == 1)
		     tmp = 0;
	      else
		     tmp = sum[l - 2];
	      cout << sum[r - 1] - tmp << endl;
       }
       else {
	      if(l == 1)
		     tmp = 0;
	      else
		     tmp = vec[l - 2];
	      cout << vec[r - 1] - tmp << endl;

        
       }
      
        }
        return 0;
}
