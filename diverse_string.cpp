#include <bits/stdc++.h>
using namespace std;

int main() {
        vector < int > vec(26, 0);
        unsigned int n, i, k, l = 0;
        bool value = true;
        cin >> n;
        string str;
        while(l < n) {
	       cin >> str;
	       for(i = 0; i < str.size(); i++)
		      vec[str[i] - 97]++;
	       for(i = 0; i < 26; i++)
		      if(vec[i])
			     break;
	     
	       for(k = 0; k < str.size(); i++, k++) {
		      if(vec[i] != 1) {
			     cout << "NO" << endl;
			     value = false;
			     break;
		      }
	       }
	       if(value)
		      cout << "YES" << endl;
		      
	       value = true;

	       for(i = 0; i < 26; i++) 
		      vec[i] = 0;
       
	       l++;
        }
} 
