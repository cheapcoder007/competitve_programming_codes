#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, k, result = 0, maximum, i;
        string str, rev;
        cin >> n >> k >> str;
        rev = str;
//        reverse(rev.begin(), rev.end());

        if(k == 2) {
        for(i = 0; i < n; i++) {

	       if(i % 2) {
		      if(rev[i] != 'B') {
			     result++;
			     rev[i] = 'B';
		      }
	       }
	       else {
		      if(rev[i] != 'A') {
			     result++;
			     rev[i] = 'A';
		      }
        
	       }
        }
        maximum = result;
        result = 0;

        for(i = 0; i < n; i++) {
	       if(i % 2) {
		      if(str[i] != 'A') {
			     result++;
			     str[i] = 'A';
		      }
	       }
	       else {
		      if(str[i] != 'B') {
			     result++;
			     str[i] = 'B';
		      }
	       }
        }
        if(maximum < result) {
	       cout << maximum << endl << rev << endl;
	       return 0;
        }
        else {
	       cout << result << endl << str << endl;
	       return 0;
        }
        }
        for(i = 0; i < n - 1; i++) {
       
	       if(str[i] == str[i + 1]) {
		      result++;
		      char c = 'A';
		      while(c == str[i] || c == str[i + 2])
			     c++;
		      str[i + 1] = c;
	       }

        }
        cout << result << endl << str << endl;
        return 0;
}
