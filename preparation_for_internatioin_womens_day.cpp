#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, k, tmp, i, val;
        cin >> n >> k;
        vector < int > vec(k, 0);
        for(i = 0; i < n; i++) {
	       cin >> tmp;
	       vec[tmp % k]++;
        }
        tmp = vec[0] / 2;
        for(i = 1; i <= (k - 1) / 2; i++) {
	       val = min(vec[i], vec[k - i]);
	       tmp += val;
	       vec[i] -= val;
	       vec[k - i] -= val;
        }
        if(!(k % 2))  {
	       tmp += vec[k / 2];
        }
        tmp *= 2;
        cout << tmp << endl;
        return 0;
}
