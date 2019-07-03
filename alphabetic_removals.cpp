#include <bits/stdc++.h>
using namespace std;

int main() {

        unsigned int n, k, i, j, c = 97, rem = 0;
        cin >> n >> k;
        string str;
        cin >> str;


        for(i = 0; i < k; i++) {
	       for(j = 0; j < str.size(); j++) {
		      if(str[j] == (char) c + 1)
			     rem = j;
		      else 
			     rem = 0;
		      if(str[j] == (char)c) {
			     str[j] = 0;
			     break;
		      }
		      if(j + 1 == str.size()) {
			     j = rem - 1;
//			     cout << "at " << j << " " << c << endl;
			     c++;
		      }
	       }

        }

        for(i = 0; i < n; i++)
	       if(str[i])
		      cout << str[i];
        cout << endl;
        return 0;
}
