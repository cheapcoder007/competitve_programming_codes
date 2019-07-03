#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, tmp;
        cin >> n;
        if(!(n % 2)) {
	       if((n / 2) % 2) {
		      cout << "1" << endl;
		      return 0;
	       }
	       else  {
		      cout << "0" << endl;
		      return 0;
	       }
        }
        tmp = n * (n + 1);
        tmp /= 2;
        if(tmp % 2)
	       cout << "1" << endl;
        else
	       cout << "0" << endl;
        return 0;
}
