#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, tmp, l, result = 0, i;
        cin >> n;
        vector  < int > vec(n, 0);
        for(i = 0; i < n; i++)
	       cin >> vec[i];
        sort(vec.begin(), vec.end());
        tmp = vec[0] + vec[n - 1];
        for(int j = n; j > n / 2 + 1; j--) {
	       if(vec[i] + vec[j] == tmp)
		      result++;
        }
        cout << result << endl;
        return 0;
}
