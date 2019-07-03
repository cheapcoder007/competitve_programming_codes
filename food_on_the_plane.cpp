#include <bits/stdc++.h>
using namespace std;

int main() {
        long long n;
        char tmp;
        cin >> n >> tmp;
        int val = n % 4, index;
        switch(tmp) {
	       case 'f':
		      index = 1;
		      break;
	       case 'e':
		      index = 2;
		      break;

	       case 'd':
		      index = 3;
		      break;

	       case 'a':
		      index = 4;
		      break;
	       case 'b':
		      index = 5;
		      break;

	       case 'c':
		      index = 6;
		      break;
        }
        if(val == 1 || val == 2) {
	       cout << (n / 2) * 6 + n - 1 + index << endl;
	       return 0;
        }
        else {
	       cout << (n / 2 - 1) * 6 + n - 3 + index << endl;
	       return 0;
        }
        return 0;
}
