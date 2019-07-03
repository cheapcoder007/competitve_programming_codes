#include <bits/stdc++.h>
using namespace std;


int main() {
        int n, i = 0, tmp, max, j;
        cin >> n;
        vector < int > vec;
        while(i < n) {
	       cin >> tmp;
	       vec.push_back(tmp);
	       i++;
        }
        sort(vec.begin(), vec.end());
        max = vec[n - 1];
        for(i = n - 1; i >= 0; i--) {
	       if(vec[i] <= max / 2)
		      break;
        }
        for(j = 0; j < n - 1; j++) {
	       cout << vec[j] << " ";
        }
        cout << endl;

        cout << (n - 1 - i) << endl;
        return 0;
}
