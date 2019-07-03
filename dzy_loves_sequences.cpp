#include <bits/stdc++.h>
using namespace std;

int main() {
        bool remember = true;
        int n, i, j, len = 1, index = -1, max = -1, tmp, tmpindex = 0;
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
	       if(vec[j] >= tmp || remember) {
		      len++;
		      if(vec[j] <= tmp) {
			     if(j - tmpindex == 1 && vec[j + 1] > vec[j] + 1) {
				    tmp = vec[j];
				    tmpindex = j;
				    index = tmpindex;
			     }
			     remember = false;
		      }
		      else  {
			     tmpindex = j;
			     tmp = vec[j];
		      }
		      cout << i << " " << j << " " << len << " " << tmp << endl;
		      j++;
	       }
	       else {
		      i++;
		      if(i > index) {
			     tmpindex = j - 1;
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
