#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll cal(ll n, ll k, ll len) {
        if(k == (len / 2) + 1)
	       return n + 1;
        if(n == 1)
	       return 1;
        if(k > len / 2 )
	       return cal(n - 1, len - k + 1, (len / 2));
        else
	       return cal(n - 1, k, (len / 2));
}

int main() {
        ll n, k, len, prev = 3, tmp;
        cin >> n >> k;
        len = 3;
        if(n == 1) {
	       cout << "1" << endl;
	       return 0;
        }
        for(int i = 2; i < n; i++) {
	       len = prev * 2 + 1;
	       prev = len;
        }


        tmp = cal(n - 1, k, len);
        cout << tmp << endl;
        return 0;
}
