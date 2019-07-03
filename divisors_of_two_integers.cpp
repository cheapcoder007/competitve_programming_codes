#include <bits/stdc++.h>
using namespace std;

int main() {
        int tmp, y, n, i;
        cin >> n;
        vector < int > freq(1e5, 0), divisors;
        for(i = 0; i < n; i++) {
	       cin >> tmp;
	       divisors.push_back(tmp);
	       freq[tmp]++;
        }
        sort(divisors.begin(), divisors.end());
        tmp = 1;
        y = divisors[divisors.size() - 1];
        for(i = 0; i < n; i++) {
	       if((freq[divisors[i]] == 2)) {
		      freq[divisors[i]] = 0;
		      tmp = (tmp * divisors[i]) / __gcd(tmp, divisors[i]);
	       }
	       else if(y % divisors[i]){
		      tmp = (tmp * divisors[i]) / __gcd(tmp, divisors[i]);
	       }
        }
        cout << tmp << " " << y << endl;
        return 0;
}
