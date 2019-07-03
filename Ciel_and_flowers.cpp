#include <bits/stdc++.h>
using namespace std;

int main() {
        long long r, g, b, i, j, k, result, remain, f1 = 0, f2 = 0, f3 = 0, arr[3], s, val;
        cin >> r >> g >> b;
        i = r / 3;
        j = g / 3;
        k = b / 3;
        arr[0] = r % 3;
        arr[1] = g % 3;
        arr[2] = b % 3;
        for(s = 0; s < 3; s++) {
	       switch(arr[s])  {
		      case 0:
			     f1++;
			     break;
	  	      case 1:
			     f2++;
			     break;
	               case 2: 
			     f3++;
			     break;
	       }
        }


        val = min(r, min(b, g));
        if(!val && b < 3 && g < 3) {
	       cout << "0" << endl;
	       return 0;
        }
        if(!val) {
	       cout << i + j + k << endl;
	       return 0;
        }

        remain = min(r % 3, g % 3);
        remain = min(remain, b % 3);
        result = remain + i + j + k;
        if(f3 == 2 && f1 == 1)
	       result++;
        cout << result << endl;
        return 0;
}
