#include <bits/stdc++.h>
using namespace std;

int main() {
        string str;
        cin >> str;
        str = "00" + str;
        unsigned int i, j, k, len = str.size(), a;
        for(i = 0; i < len; i++) {
	       for(j = i + 1; j < len; j++) {
		      for(k = j + 1; k < len; k++) {
			     a =(100 * (str[i] - 48) + 10 * (int)(str[j] - 48) + (int)(str[k] - 48));
			     if(!(a % 8)) {
				    cout << "YES" << endl << a << endl;
				    return 0;
			     }
		      }
	       }
        }
        cout << "NO" << endl;
        return 0;
}
