#include <bits/stdc++.h>
using namespace std;
int main() {
        string str;
        long long n, i, l = 0, r = 0, result;
        cin >> n >> str;

        if(n == 2) {
		      cout << "3" << endl;
		      return 0;
        }
        char start = str[0], end = str[n - 1];
        for(i = 0;i < n;i++) {
	       if(start == str[i])
		      l++;
	       else 
		      break;
        }
        for(i = n - 1;i + 1;i--) {
	       if(end == str[i])
		      r++;
	       else 
		      break;
        }

        if(l == n) {
	       cout << ((n * (n + 1)) / 2) % 998244353 << endl;
	       return 0;
        }
        result = l + r + 1;
        result = 2 + (result - 2) * 2;
        if(start == end) {
	       cout << result % 998244353 << endl;
	       return 0;
        }

        cout << (l + r + 1) % 998244353 << endl;
        return 0;
}
