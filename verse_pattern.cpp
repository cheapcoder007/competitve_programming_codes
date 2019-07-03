#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, i, len, j, ans = 0;
        vector < int > vec(100, 0);
        string str;
        char ch;
        cin >> n;
        for(i = 0; i < n; i++)
	       cin >> vec[i];
        ch = getchar();
        for(i = 0; i < n; i++) {
	       getline(cin, str);
	       len = str.size();
	       for(j = 0; j < len; j++)
	               if(str[j] == 'a' || str[j] == 'e' ||  str[j] == 'i' ||  str[j] == 'o' ||  str[j] == 'u' || str[j] == 'y') 
	        	      ans++;
	       if(ans != vec[i]) {
	               cout << "NO" << endl;
	               return 0;
	       }
	       ans = 0;
	}
	cout << "YES" << endl;
	return 0;
}
