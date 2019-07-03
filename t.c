#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll area(ll a, ll b, ll c, ll d);
        
int main() {

        ll n, m, white = 0, x1, y1, x2, y2, x3, y3, x4, y4, t, a1, a2, a3, a4, A2, A3, A4;
        cin >> t;
        while(t--) {

	       cin >> n >> m;
	       cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	       a1 = area(1, 1, m, n);
	       a2 = area(x1, y1, x2, y2);
	       a3 = area(x3, y3, x4, y4);
	       a4 = area(max(x1, x3), max(y1, y3), min(x2, x4), min(y2, y4));
	       A2 = a2;
	       A3 = a3;
	       A4 = a4;


	       cout << a4 << endl;
	       a2 = a2 / 2;
	       a3 = a3 / 2;
	       a4 = a4 / 2;
	       if((x1 % 2) == y1 % 2 && A2 % 2) a2++;
	       if(x3 % 2 == y3 % 2 && A3 % 2) a3++;
	       if(A4 % 2 && (max(x1, x3) % 2 ) != (max(y1, y3) % 2)) a4++;
	       cout << a2 << " " << a3 << " " << a4 << endl;
	       
	       white = ((a1 + 1) / 2 ) + a2 - a3 -a4;
	       cout << white << " " << m * n - white << endl;

        }
        return 0;
}


ll area(ll x1, ll y1, ll x2, ll y2) {

        if(x2 < x1 || y2 < y1)
	       return 0;
        int a = (x2 - x1 + 1) * (y2 - y1 + 1);
        return a;
}




