#include <bits/stdc++.h>
using namespace std;

int main() {
        int a, b, c, d, e, f, i;
        cin >> a >> b >> c >> d;
        e = abs(b * c - d * a);
        f = a * c;
        for(i = e * f; i > 1; i--){
	       if(!(e % i) && !(f % i)) {
		      e = e / i;
		      f = f / i;
	       }
        }
        cout << e << '/' << f << endl;
        return 0;
}
