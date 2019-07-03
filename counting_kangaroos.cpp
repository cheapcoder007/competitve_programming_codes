#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, i, j, tmp, k;
        cin >> n;
        vector < int > vec;
        for(i = 0; i < n; i++) {
	       cin >> tmp;
	       vec.push_back(tmp);
        }
        i = 0, j = n - 1;
        sort(vec.begin(), vec.end());
        while(j > i) {
	       if(vec[i] > vec[j] / 2 || i == j)
		      break;
	       i++;
	       j--;
        }
        for(k = 0; k < n - 1; k++)
	       cout << vec[k] << "("  << k << ")" << endl;;
        
        cout << i << " " << j << " " << n - i << endl;
        return 0;
}
