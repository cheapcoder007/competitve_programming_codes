#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        double a, b;
        cin >> n;

        for(;n--;) {
	       cin >> a >> b;
	       if(a + b == 90)
		      cout << "RIGHT" << endl;
	       else
		      cout << "WRONG" << endl;
        }
        return 0;
}
