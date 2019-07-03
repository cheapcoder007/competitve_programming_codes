#include <bits/stdc++.h>
using namespace std;
int n, positives, negatives, zeros, tmp, val, no, c;

int main() {
        cin >> n;
        tmp = n;
        while(tmp--) {
	       cin >> val;
	       if(!val)
		      zeros++;
	       else if(val > 0)
		      positives++;
	       else
		      negatives++;
        }
        no = n / 2 + n % 2;
        if(n % 2 && zeros > no)
	       c = 1;
        if(c || (positives < no && negatives < no)) {
	       cout << "0" << endl;
	       return 0;
        }
        if(positives > negatives)
	       cout << "1" << endl;
        else
	       cout << "-1" << endl;
        return 0;
}
