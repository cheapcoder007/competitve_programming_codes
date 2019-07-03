#include <bits/stdc++.h>
using namespace std;

int main() {
        bool remember = true;
        int n, i, j, len = 1, index = -1, max = -1, tmp;
        cin >> n;
        if(n == 1) {
	       cout << "1" << endl;
	       return 0;
        }

        vector < int > vec;
        for(i = 0; i < n; i++) {
	       cin >> tmp;
	       vec.push_back(tmp);
        }

        i = 0;
        tmp = vec[0];
        j = 1;
        while(j < n) {
	       if(vec[j] > tmp || remember) {
		      len++;
		      if(vec[j] < tmp) {
			     index = j;
			     remember = false;
		      }
		      else 
			     tmp = vec[j];
		      j++;
	       }
	       else {
		      i++;
		      if(i == index) {
			     tmp = vec[j - 1];
			     remember = true;
		      }
		      if(max < len)
			     max = len;
		      len--;
	       }
        }
        if(max < len)
	       max = len;
        cout << max << endl;
        return 0;
}
