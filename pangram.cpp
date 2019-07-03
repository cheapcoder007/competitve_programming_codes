#include <bits/stdc++.h>
using namespace std;


int main() {

        int n, find1, find2, i;
        cin >> n;
        string str;
       
        if(n < 26) {
	       cout << "NO" << endl;
	       return 0;
        }
        vector < int > visited[26];
        cin >> str;


        for(i = 65; i < 91; i++) {


	       find1 = str.find(i);
	       find2 = str.find(i + 32);
	       if(find1 == -1 && find2 == -1) {
		      cout << "NO" << endl;
		      return 0;
	       }

        }

        cout << "YES" << endl;
        return 0;
}
