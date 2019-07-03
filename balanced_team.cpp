#include <bits/stdc++.h>
using namespace std;

int main() {
        long long n, maximum = 1,j, i;
        cin >> n;
        vector < long long > vec(n, 0);
        for(i = 0; i < n; i++)
	       cin >> vec[i];
        i = 0;
        sort(vec.begin(), vec.end());
        for(j = 1; j < n;) {
	       if(abs(vec[j] - vec[i]) > 5 && i < j)
		      i++;
	       else
		      j++;
	       maximum = max(maximum, j - i + 1);
        }
        if(maximum == 1)
	       maximum++;
        cout << maximum - 1 << endl;
        return 0;
}
