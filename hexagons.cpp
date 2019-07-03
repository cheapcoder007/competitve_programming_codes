#include <bits/stdc++.h>
using namespace std;

int main() {

        long long int n, i, count = 1;
        cin >> n;
       
        for(i = 1; i <= n; i += 5) {

	       if(n >= i && n <= i + 4)
		      break;
	       count++;
        }


        switch(n % 5) {

	       case 1:
		      cout << (2 * count) << " 0" << endl;
		      break;
	       case 2:
		      cout << (2 * count - 1) << " 2" << endl;
		      break;
	       case 3:
		      cout << -count << " " << 2 * count << endl;
		      break;
	       case 4:
		      cout << -(2 * count) << " 0" << endl;
		      break;
	       case 0:
		      cout << -count << " " << -(2 * count) << endl;
		      break;
        }

        return 0;
}
