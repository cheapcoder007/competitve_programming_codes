#include <bits/stdc++.h>
using namespace std;

int main() {
        vector < int > vec;
        int n, max= INT_MIN, min= INT_MAX, i = 0, val, j, tmp, minindex, maxindex;
        cin >> n;
        while(i < n) {
	       cin >> tmp;
	       vec.push_back(tmp);
	       i++;
        }

        for(j = 0; j < i; j++) {
	       if(min > vec[j]) {
		      min = vec[j];
		      minindex = j;
	       }
	       if(max < vec[j]) {
		      max = vec[j];
		      maxindex = j;
	       }
        }
        val = abs(minindex - maxindex);

        if(val == 1 || val == n - 1) {
	       if(minindex == 0 && maxindex == n - 1)
		      cout << "0" << endl;
	       else if(minindex < maxindex)
		      cout << "-1" << endl;
	       else
		      cout << n - minindex << endl;
	       return 0;
        }
        else
	       cout << "-1" << endl;
        return 0;
}
