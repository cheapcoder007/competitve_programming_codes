#include <bits/stdc++.h>
using namespace std;

int main() {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        if(!a && !b  && !c && !c &&!d) {
	       cout << "1" << endl;
	       return 0;
        }
        if(!c) {
	       if(a == d) {
		      cout << "1" << endl;
		      return 0;
	       }
	       else
		      cout << "0" << endl;
	       return 0;
        }

        if(a == d && c && a && d)
	       cout << "1" << endl;
        else
	       cout << "0" << endl;
        return 0;
}
