#include <bits/stdc++.h>
using namespace std;

int main() {
        int Sa = 0, Sg = 0;
        string result;
        int n, a, b, i = 0, j = 0;
        cin >> n;
        while(n--) {
	       cin >> a >>b;
	       if(abs(Sa - Sg) <= 500 && Sa <= 500) {
		      Sa += a;
		      result[i++] = 'A';
	       }
	       else {
		      Sg += b;
		      result[i++] = 'G';
	       }
        }
        if(abs(Sa - Sg) <= 500) {
	       for(; j < i; j++)
		      cout << result[j];
	       cout << endl;
        }
        else cout << "-1" << endl;
        
        return 0;
}
