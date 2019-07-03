#include <bits/stdc++.h>
using namespace std;

int main() {
        char ch, a, b, c, d, e, f, g, h;
        int h1, m1, h2, m2, h3, m3, tmp;
        cin >> a >> b >> ch >> c >> d >> e >> f >> ch >> g >> h;
        h1 = 10 * (a - '0') + (b - '0');
        m1 = 10 * (c - '0') + (d - '0');
        h2 = 10 * (e - '0') + (f - '0');
        m2 = 10 * (g - '0') + (h - '0');
        tmp = 60 * (h1 + h2) + m1 + m2;
        tmp /= 2;
        h3 = tmp / 60;
        m3 = tmp % 60;
        if(h3 < 10) {
	       cout << "0" << h3 << ":";
	       if(m3 < 10) {
		      cout << "0" << m3 << endl;
		      return 0;
			     
	       }
	       else {
		      cout << m3 << endl;
		      return 0;
	       }
        }
        else {
	       cout << h3 << ":";
	       if(m3 < 10) {
		      cout << "0" << m3 << endl;
		      return 0;
			     
	       }
	       else {
		      cout << m3 << endl;
		      return 0;
	       }
        }
}
